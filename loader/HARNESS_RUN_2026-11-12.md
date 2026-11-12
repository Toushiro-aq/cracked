# Harness Run Addendum #2 — `v1.dll` detonation with exfil containment (2026-11-12)

Runtime follow-up to `HARNESS_RUN_2026-11-11.md`. Same standalone 32-bit harness model (no game process involved), two upgrades: **webhook exfil blocked** and **direct observation of gate outcomes** (thread-level + DNS attribution). No Windows VM was available on this host (only VirtualBox guest is Kali Linux), so detonation ran on the host in a disposable 32-bit PowerShell process — same containment model as the prior run, minus the telemetry leak.

## Pre-run state of the live remote config (fetched read-only)

| Paste | Current content | Meaning |
|---|---|---|
| `pastebin.com/raw/77EmaC6S` | all 8 features `UNLOCKED` | Operator kill-switch currently fully open |
| `pastebin.com/raw/q2zwmHDs` | `2.0` | Version gate |
| `pastebin.com/raw/vpihRRYH` | `112.201.74.96`, `49.145.198.229`, `//PULA` | IP blocklist (2 IPs) |

**The operator's infrastructure is still live.**

## Containment

- `hosts`: `0.0.0.0 discord.com`, `0.0.0.0 discordapp.com` added pre-run, snapshot-restored post-run (verified clean).
- Disposable staged copy `C:\temp\phantomx_harness\v1_run2.dll` (hash-verified `9E6EE049…482D0C4` pre-run).
- Archived originals `loader\v1.dll` + `New folder\v1_extracted.dll` never loaded; hash-verified post-run.
- Baseline persistence snapshot (Run keys ×5, schtasks count, service count, XIGNCODE3 status) vs post-run: no change attributable to the sample.

## Timeline (from `harness_log_v2.txt`, local time)

| Time | Observation |
|---|---|
| 14:23:12 | Mutex `Global\SFRush_SecurityMatrix_2026` created (handle 0xAA8) — loader gate satisfied |
| 14:23:12 | `LoadLibraryW` OK, base `0x6B200000`; **+4 threads** at attach (incl. unconditional telemetry thread `FUN_10027ce0`) |
| 14:23:12→33 | DNS cache: `discord.com → 0.0.0.0` (**webhook attempt fired — blocked**), `discordapp.com → 0.0.0.0`, `pastebin.com`, `api.ipify.org` resolved normally |
| 14:23:33 | Only established TLS from PID: `172.67.74.152:443` (ipify) + `172.66.171.73:443` (pastebin). **No Discord edge TLS — exfil containment held** |
| 14:23:33 | `NextHook` resolved at `base+0x28150` — exact decompiled RVA |
| 14:23:35 | `NextHook(0,0,0)` returned `0x0` in 2,006 ms |
| 14:23:40 | `phantomx-server.onrender.com → 216.24.57.16 / .18` — **subscription/version phase reached: mutex + HWID/IP-blocklist gates passed** (runtime-proven, was inferred on 11-11) |
| 14:23:40–24:05 | Thread churn (new TIDs 13816, 5388, 14832 appear); cheat core inert — no `SpecialForce.exe` module present |
| 14:24:05 | `FreeLibrary` — detach, hook cleanup `FUN_10016cf0` |
| 14:24:26/33 | Staged copy still on disk (no `cmd.exe`/`ping.exe` child during 14 s poll window) |
| 14:24:33–48 | **Staged copy self-deleted** (gone by post-check) — `FUN_10027940` delayed self-delete confirmed again; spawn occurred after the poll window (later than the 11-11 run's timing) |
| 14:24:46+ | Hosts restored clean; mutex gone; both archived originals intact |

## Conclusions

1. **Gate chain runtime-proven end-to-end**: with the mutex present, mutex → HWID/IP blocklist → subscription/version all pass on this machine (onrender fetch occurred after `NextHook`, no failure-embed pattern). Worker threads spawn but the cheat core exits inert without the game module — standalone containment held in both runs.
2. **Webhook block works as a containment control**: the telemetry attempt is provable from DNS cache alone (`discord.com → 0.0.0.0`) while no data leaves. Recommended for any future detonation of this family.
3. **Self-delete**: capability confirmed in both runs; timing is delayed and variable (present at +26 s this run, gone by +43 s; present at +8 s on 11-11). Plan observation windows ≥60 s post-unload.
4. **Residual footprint of this run**: read-only GETs to pastebin/ipify (Cloudflare sees the connection, as with any visit) and one version fetch to the onrender C2 — the server inherently logs the requesting IP. No HWID/IP/username reached the Discord webhook this time.

## New finding — pre-existing leftover

`C:\Windows\PhantomX.dll` — **not from this run**. Created 2026-11-08 22:46:56, modified 2026-11-09 17:39:13, 358,912 bytes, SHA-256 `0ED2A21BA734B270EBA9382B6999B1E495CE3FF031BDF6F30F44B06610D55E73`, attributes: Archive only. Matches none of the three known payloads (v1 fallback 239,104 B / v2 878,592 B / cloud 279,040 B) — likely a later cloud-served build dropped during the Nov 8–9 sessions. Left in place to preserve the baseline; recommend archiving it into the bundle and removing it from `C:\Windows\`.

## Artifacts

- Harness: `C:\temp\phantomx_harness\harness_phantomx_v2.ps1` (+ `pre_run.ps1`, `post_run.ps1`)
- Logs: `harness_log_v2.txt`, `pre_run_log.txt`, `post_run_log.txt`, `baseline_state.txt`, `post_state.txt`, `dns_cache_baseline.csv`, `dns_cache_post.csv`, `hosts.snapshot`

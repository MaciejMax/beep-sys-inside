#include "out.h"



void FUN_1c0001010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  code *pcVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_2 + 0xa8);
  plVar1 = (longlong *)*plVar4;
  if (((longlong *)plVar1[1] == plVar4) &&
     (pplVar2 = *(longlong ***)(param_2 + 0xb0), *pplVar2 == plVar4)) {
    *pplVar2 = plVar1;
    plVar1[1] = (longlong)pplVar2;
    return;
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(3);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_1c0001040(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x30) = 0xc0000120;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return;
}



undefined8 FUN_1c0001070(longlong param_1,longlong param_2)

{
  undefined uVar1;
  longlong lVar2;
  undefined local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = KfRaiseIrql(2);
  IoAcquireCancelSpinLock(local_res8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    while ((lVar2 = KeRemoveDeviceQueue(param_1 + 0xa0), lVar2 != 0 && (lVar2 + -0x78 != 0))) {
      LOCK();
      *(undefined8 *)(lVar2 + -0x10) = 0;
      UNLOCK();
      *(undefined4 *)(lVar2 + -0x48) = 0xc0000120;
      *(undefined8 *)(lVar2 + -0x40) = 0;
      IoReleaseCancelSpinLock(local_res8[0]);
      IofCompleteRequest(lVar2 + -0x78,0);
      IoAcquireCancelSpinLock(local_res8);
    }
  }
  IoReleaseCancelSpinLock(local_res8[0]);
  KeLowerIrql(uVar1);
  FUN_1c0001120(param_1,param_2,0,0);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}



ulonglong FUN_1c0001120(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  uVar2 = IoGetRequestorSessionId(param_2,local_18);
  if (-1 < (int)uVar2) {
    lVar3 = IoCsqRemoveNextIrp(*(longlong *)(param_1 + 0x40) + 0x60,local_18[0]);
    if (lVar3 == 0) {
      uVar2 = 0xc0000225;
    }
    else {
      puVar1 = *(undefined4 **)(lVar3 + 0x18);
      *puVar1 = param_3;
      puVar1[1] = param_4;
      *(undefined4 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 8;
      IofCompleteRequest(lVar3,0);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  return uVar2;
}



undefined8 FUN_1c00011b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  ExAcquireFastMutex(lVar2);
  piVar1 = (int *)(lVar2 + 0x38);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    MmUnlockPagableImageSection(*(undefined8 *)(lVar2 + 0x40));
  }
  ExReleaseFastMutex(lVar2);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}



undefined8 * FUN_1c0001230(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_2 == 0) {
    puVar1 = *(undefined8 **)(undefined8 *)(param_1 + -0x10);
  }
  else {
    puVar1 = *(undefined8 **)(param_2 + 0xa8);
  }
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + -0x10)) {
      return (undefined8 *)0x0;
    }
    iVar2 = IoGetRequestorSessionId(puVar1 + -0x15,local_res8);
    if (((iVar2 < 0) || (local_res8[0] == param_3)) || (param_3 == -1)) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1 + -0x15;
}



undefined4 FUN_1c0001290(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (*(int *)(lVar1 + 0x18) == 0x10000) {
    if (7 < *(uint *)(lVar1 + 0x10)) {
      if ((**(int **)(param_2 + 0x18) == 0) || ((*(int **)(param_2 + 0x18))[1] != 0)) {
        *(undefined4 *)(param_2 + 0x30) = 0x103;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) | 1;
        IoStartPacket(param_1,param_2,0,FUN_1c0001790);
        return 0x103;
      }
      uVar2 = 0;
      goto LAB_1c000172c;
    }
  }
  else if (*(int *)(lVar1 + 0x18) == 0x10004) {
    if (7 < *(uint *)(lVar1 + 8)) {
      *(undefined4 *)(param_2 + 0x30) = 0x103;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) | 1;
      IoCsqInsertIrp(*(longlong *)(param_1 + 0x40) + 0x60,param_2,0);
      return 0x103;
    }
    uVar2 = 0xc000000d;
    goto LAB_1c000172c;
  }
  uVar2 = 0xc000000d;
LAB_1c000172c:
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return uVar2;
}



undefined8 FUN_1c0001300(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)(param_2 + 0xa8);
  pplVar2 = *(longlong ***)(param_1 + -8);
  if (*pplVar2 == (longlong *)(param_1 + -0x10)) {
    *plVar1 = (longlong)(longlong *)(param_1 + -0x10);
    *(longlong ***)(param_2 + 0xb0) = pplVar2;
    *pplVar2 = plVar1;
    *(longlong **)(param_1 + -8) = plVar1;
    return 0;
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(3);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



void FUN_1c0001330(longlong param_1,undefined *param_2)

{
  undefined uVar1;
  
  uVar1 = KeAcquireSpinLockRaiseToDpc(param_1 + -0x18);
  *param_2 = uVar1;
  return;
}



undefined8 FUN_1c0001360(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffd0;
  undefined local_18 [16];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_18 = ZEXT816(0);
  local_res18[0] = 0;
  RtlInitUnicodeString(local_18,L"\\Device\\Beep");
  uVar3 = IoCreateDevice(param_1,0xa0,local_18,1,CONCAT44(uVar4,0x100),
                         in_stack_ffffffffffffffd0 & 0xffffffffffffff00,local_res18);
  if ((int)uVar3 == 0) {
    *(uint *)(local_res18[0] + 0x30) = *(uint *)(local_res18[0] + 0x30) | 4;
    puVar2 = *(undefined4 **)(local_res18[0] + 0x40);
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    KeInitializeEvent(puVar2 + 6,1,0);
    puVar1 = puVar2 + 0x14;
    puVar2[0xe] = 0;
    *(undefined4 **)(puVar2 + 0x16) = puVar1;
    *(undefined4 **)puVar1 = puVar1;
    KeInitializeSpinLock(puVar2 + 0x12);
    uVar3 = IoCsqInitialize(puVar2 + 0x18,FUN_1c0001300,FUN_1c0001010,FUN_1c0001230,FUN_1c0001330,
                            FUN_1c00014f0,FUN_1c0001040);
    if ((int)uVar3 == 0) {
      *(code **)(param_1 + 0x60) = FUN_1c0001810;
      *(code **)(param_1 + 0x68) = FUN_1c00018e0;
      *(code **)(param_1 + 0x70) = FUN_1c0001510;
      *(code **)(param_1 + 0x80) = FUN_1c00011b0;
      *(code **)(param_1 + 0xe0) = FUN_1c0001290;
      *(code **)(param_1 + 0x100) = FUN_1c0001070;
      IoSetStartIoAttributes(local_res18[0],1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}



void FUN_1c00014f0(longlong param_1)

{
  KeReleaseSpinLock(param_1 + -0x18);
  return;
}



undefined8 FUN_1c0001510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  ExAcquireFastMutex(lVar1);
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
  if (*(int *)(lVar1 + 0x38) == 1) {
    uVar2 = MmLockPagableDataSection(FUN_1c0001510);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
  }
  ExReleaseFastMutex(lVar1);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}



void FUN_1c00015d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void _guard_check_icall(void)

{
  return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0001c0001600. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_1c0001790(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  
  if (param_2 == *(longlong *)(param_1 + 0x20)) {
    uVar2 = *(undefined *)(param_2 + 0x45);
  }
  else {
    cVar1 = KeRemoveEntryDeviceQueue(param_1 + 0xa0,param_2 + 0x78);
    uVar2 = *(undefined *)(param_2 + 0x45);
    if (cVar1 != '\0') {
      IoReleaseCancelSpinLock(uVar2);
      *(undefined4 *)(param_2 + 0x30) = 0xc0000120;
      *(undefined8 *)(param_2 + 0x38) = 0;
      IofCompleteRequest(param_2,0);
      return;
    }
  }
  IoReleaseCancelSpinLock(uVar2);
  return;
}



void FUN_1c0001810(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined local_res10 [24];
  
  local_res10[0] = 0;
  IoAcquireCancelSpinLock(local_res10);
  if (param_2 == 0) {
    IoReleaseCancelSpinLock(local_res10[0]);
  }
  else {
    LOCK();
    *(undefined8 *)(param_2 + 0x68) = 0;
    UNLOCK();
    IoReleaseCancelSpinLock(local_res10[0]);
    if (*(int *)(*(longlong *)(param_2 + 0xb8) + 0x18) == 0x10000) {
      uVar2 = FUN_1c0001120(param_1,param_2,**(undefined4 **)(param_2 + 0x18),
                            (*(undefined4 **)(param_2 + 0x18))[1]);
      uVar1 = (undefined4)uVar2;
    }
    else {
      uVar1 = 0xc000000d;
    }
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    IoStartNextPacket(param_1,1);
    IofCompleteRequest(param_2,0);
  }
  return;
}



void FUN_1c00018e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x40);
  lVar3 = IoCsqRemoveNextIrp(lVar2 + 0x60,0xffffffffffffffff);
  while (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x30) = 0xc0000120;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    IofCompleteRequest(lVar3,0);
    lVar3 = IoCsqRemoveNextIrp(lVar2 + 0x60);
  }
  IoDeleteDevice(lVar1);
  return;
}



void entry(longlong param_1)

{
  FUN_1c0006044();
  FUN_1c0001360(param_1);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1c0006044(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if ((DAT_1c0003000 != 0) && (DAT_1c0003000 != 0x2b992ddfa232)) {
    _DAT_1c0003008 = ~DAT_1c0003000;
    return;
  }
  pcVar1 = (code *)swi(0x29);
  pcVar3 = (char *)(*pcVar1)(6);
  cVar2 = (char)pcVar3;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}




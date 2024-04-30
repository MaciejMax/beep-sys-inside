int64_t* sub_1c0001010(int64_t arg1, void* arg2)
{
    void* rcx = *(arg2 + 0xa8);
    if (*(rcx + 8) == (arg2 + 0xa8))
    {
        int64_t* rax_1 = *(arg2 + 0xb0);
        if (*rax_1 == (arg2 + 0xa8))
        {
            *rax_1 = rcx;
            *(rcx + 8) = rax_1;
            return rax_1;
        }
    }
    trap(0xd);
}

int64_t sub_1c0001040(int64_t arg1, IRP* arg2)
{
    *(arg2->IoStatus. + 0) = 0xc0000120;
    arg2->IoStatus.Information = 0;
    return IofCompleteRequest(arg2, 0);
}

int64_t sub_1c0001070(void* arg1, IRP* arg2)
{
    void* rdi = arg1;
    Irql = 0;
    arg1 = 2;
    uint8_t rax = KfRaiseIrql(arg1);
    IoAcquireCancelSpinLock(&Irql);
    int64_t rdx = *(rdi + 0x20);
    *(rdi + 0x20) = 0;
    if (rdx != 0)
    {
        while (true)
        {
            KDEVICE_QUEUE_ENTRY* rax_2 = KeRemoveDeviceQueue((rdi + 0xa0));
            if (rax_2 == 0)
            {
                break;
            }
            if (rax_2 == 0x78)
            {
                break;
            }
            *(rax_2 + -0x10);
            *(rax_2 + -0x10) = 0;
            *(rax_2 + -0x48) = 0xc0000120;
            *(rax_2 + -0x40) = 0;
            IoReleaseCancelSpinLock(Irql);
            IofCompleteRequest((rax_2 - 0x78), 0);
            IoAcquireCancelSpinLock(&Irql);
        }
    }
    IoReleaseCancelSpinLock(Irql);
    KeLowerIrql(rax);
    sub_1c0001120(rdi, arg2, 0, 0);
    *(arg2->IoStatus. + 0) = 0;
    arg2->IoStatus.Information = 0;
    IofCompleteRequest(arg2, 0);
    return 0;
}

NTSTATUS sub_1c0001120(void* arg1, IRP* arg2, int32_t arg3, int32_t arg4)
{
    int32_t pSessionId = 0;
    NTSTATUS rax_1 = IoGetRequestorSessionId(arg2, &pSessionId);
    NTSTATUS rbx = rax_1;
    if (rax_1 >= STATUS_SUCCESS)
    {
        IRP* Irp = IoCsqRemoveNextIrp((*(arg1 + 0x40) + 0x60), pSessionId);
        if (Irp != 0)
        {
            union AssociatedIrp = Irp->AssociatedIrp;
            *AssociatedIrp = arg3;
            *(AssociatedIrp + 4) = arg4;
            *(Irp->IoStatus. + 0) = 0;
            Irp->IoStatus.Information = 8;
            IofCompleteRequest(Irp, 0);
        }
        else
        {
            rbx = STATUS_NOT_FOUND;
        }
        rax_1 = rbx;
    }
    return rax_1;
}

int64_t sub_1c00011b0(void* arg1, IRP* arg2)
{
    FAST_MUTEX* FastMutex = *(arg1 + 0x40);
    ExAcquireFastMutex(FastMutex);
    int32_t temp0 = *(FastMutex + 0x38);
    *(FastMutex + 0x38) = (*(FastMutex + 0x38) - 1);
    if (temp0 == 1)
    {
        MmUnlockPagableImageSection(*(FastMutex + 0x40));
    }
    ExReleaseFastMutex(FastMutex);
    *(arg2->IoStatus. + 0) = 0;
    arg2->IoStatus.Information = 0;
    IofCompleteRequest(arg2, 0);
    return 0;
}

void* sub_1c0001230(void* arg1, void* arg2, int32_t arg3)
{
    pSessionId = 0;
    void** rdi;
    if (arg2 != 0)
    {
        rdi = *(arg2 + 0xa8);
    }
    else
    {
        rdi = *(arg1 - 0x10);
    }
    void* rax_1;
    if (rdi == (arg1 - 0x10))
    {
        rax_1 = nullptr;
    }
    else
    {
        while (true)
        {
            if ((IoGetRequestorSessionId(&rdi[-0x15], &pSessionId) >= STATUS_SUCCESS && (pSessionId != arg3 && arg3 != 0xffffffff)))
            {
                rdi = *rdi;
                if (rdi == (arg1 - 0x10))
                {
                    rax_1 = nullptr;
                    break;
                }
                continue;
            }
            rax_1 = &rdi[-0x15];
            break;
        }
    }
    return rax_1;
}

uint64_t sub_1c0001290(DEVICE_OBJECT* arg1, IRP* arg2)
{
    void* r8 = *(arg2->Tail + 0x40);
    int32_t rax = *(r8 + 0x18);
    int32_t rbx_1;
    if ((rax == 0x10000 && *(r8 + 0x10) >= 8))
    {
        union AssociatedIrp = arg2->AssociatedIrp;
        if ((*AssociatedIrp != 0 && *(AssociatedIrp + 4) == 0))
        {
            rbx_1 = 0;
            goto label_1c000172c;
        }
        *(arg2->IoStatus. + 0) = 0x103;
        arg2->IoStatus.Information = 0;
        *(r8 + 3) = (*(r8 + 3) | 1);
        IoStartPacket(arg1, arg2, nullptr, sub_1c0001790);
    }
    uint64_t rax_2;
    if (((rax == 0x10000 && *(r8 + 0x10) < 8) || (rax != 0x10000 && rax != 0x10004)))
    {
        rbx_1 = -0x3ffffff3;
    label_1c000172c:
        *(arg2->IoStatus. + 0) = rbx_1;
        arg2->IoStatus.Information = 0;
        IofCompleteRequest(arg2, 0);
        rax_2 = rbx_1;
    }
    if (rax == 0x10004)
    {
        if (*(r8 + 8) < 8)
        {
            rbx_1 = -0x3ffffff3;
            goto label_1c000172c;
        }
        *(arg2->IoStatus. + 0) = 0x103;
        arg2->IoStatus.Information = 0;
        *(r8 + 3) = (*(r8 + 3) | 1);
        IoCsqInsertIrp((arg1->DeviceExtension + 0x60), arg2, nullptr);
    }
    if (((rax == 0x10000 && *(r8 + 0x10) >= 8) || rax == 0x10004))
    {
        rax_2 = 0x103;
    }
    return rax_2;
}

int64_t sub_1c0001300(void* arg1, void* arg2)
{
    int64_t* rdx = *(arg1 - 8);
    if (*rdx != (arg1 - 0x10))
    {
        trap(0xd);
    }
    *(arg2 + 0xa8) = (arg1 - 0x10);
    *(arg2 + 0xb0) = rdx;
    *rdx = (arg2 + 0xa8);
    *(arg1 - 8) = (arg2 + 0xa8);
    return 0;
}

int64_t sub_1c0001330(int64_t arg1, char* arg2)
{
    char rax = KeAcquireSpinLockRaiseToDpc((arg1 - 0x18));
    *arg2 = rax;
    return rax;
}

NTSTATUS sub_1c0001360(DRIVER_OBJECT* arg1)
{
    UNICODE_STRING var_18;
    var_18.Length = 0;
    var_18.MaximumLength = 0;
    var_18.Buffer = 0;
    DeviceObject = nullptr;
    RtlInitUnicodeString(&var_18, u"\Device\Beep");
    NTSTATUS rax = IoCreateDevice(arg1, 0xa0, &var_18, 1, 0x100, 0, &DeviceObject);
    if (rax == STATUS_SUCCESS)
    {
        DEVICE_OBJECT* DeviceObject_2 = DeviceObject;
        DeviceObject_2->Flags = (DeviceObject_2->Flags | DO_BUFFERED_IO);
        int32_t* DeviceExtension = DeviceObject->DeviceExtension;
        *DeviceExtension = 1;
        *(DeviceExtension + 8) = 0;
        DeviceExtension[4] = 0;
        KeInitializeEvent(&DeviceExtension[6], SynchronizationEvent, 0);
        DeviceExtension[0xe] = 0;
        *(DeviceExtension + 0x58) = &DeviceExtension[0x14];
        *(DeviceExtension + 0x50) = &DeviceExtension[0x14];
        KeInitializeSpinLock(&DeviceExtension[0x12]);
        rax = IoCsqInitialize(&DeviceExtension[0x18], sub_1c0001300, sub_1c0001010, sub_1c0001230, sub_1c0001330, sub_1c00014f0, sub_1c0001040);
        if (rax == STATUS_SUCCESS)
        {
            DEVICE_OBJECT* DeviceObject_1 = DeviceObject;
            arg1->DriverStartIo = sub_1c0001810;
            arg1->DriverUnload = sub_1c00018e0;
            arg1->MajorFunction[0] = sub_1c0001510;
            arg1->MajorFunction[2] = sub_1c00011b0;
            arg1->MajorFunction[0xe] = sub_1c0001290;
            arg1->MajorFunction[0x12] = sub_1c0001070;
            IoSetStartIoAttributes(DeviceObject_1, 1, 0);
            rax = STATUS_SUCCESS;
        }
    }
    return rax;
}

int64_t sub_1c00014f0(int64_t arg1, uint64_t arg2)
{
    return KeReleaseSpinLock((arg1 - 0x18), arg2);
}

int64_t sub_1c0001510(void* arg1, IRP* arg2)
{
    FAST_MUTEX* FastMutex = *(arg1 + 0x40);
    ExAcquireFastMutex(FastMutex);
    *(FastMutex + 0x38) = (*(FastMutex + 0x38) + 1);
    if (*(FastMutex + 0x38) == 1)
    {
        *(FastMutex + 0x40) = MmLockPagableDataSection(sub_1c0001510);
    }
    ExReleaseFastMutex(FastMutex);
    *(arg2->IoStatus. + 0) = 0;
    arg2->IoStatus.Information = 0;
    IofCompleteRequest(arg2, 0);
    return 0;
}

int64_t sub_1c00015a0(int64_t arg1)
{
    if ((arg1 == __security_cookie && ((ROLQ(arg1, 0x10)) & 0xffff) == 0))
    {
        return;
    }
    /* tailcall */
    return sub_1c00015d0();
}

void sub_1c00015d0() __noreturn
{
    trap(0xd);
}

int64_t _guard_check_icall() __pure
{
    return;
}

int64_t _guard_dispatch_icall_nop(int64_t arg1 @ rax)
{
    /* jump -> arg1 */
}

int64_t sub_1c0001790(void* arg1, IRP* arg2)
{
    BOOLEAN rax_1;
    int64_t rax_2;
    uint8_t CancelIrql;
    if (arg2 != *(arg1 + 0x20))
    {
        rax_1 = KeRemoveEntryDeviceQueue((arg1 + 0xa0), &arg2->Tail.Overlay..DeviceQueueEntry.DeviceListEntry.Flink);
        CancelIrql = arg2->CancelIrql;
        if (rax_1 != 0)
        {
            IoReleaseCancelSpinLock(CancelIrql);
            *(arg2->IoStatus. + 0) = 0xc0000120;
            arg2->IoStatus.Information = 0;
            rax_2 = IofCompleteRequest(arg2, 0);
        }
    }
    else
    {
        CancelIrql = arg2->CancelIrql;
    }
    if ((arg2 == *(arg1 + 0x20) || (arg2 != *(arg1 + 0x20) && rax_1 == 0)))
    {
        rax_2 = IoReleaseCancelSpinLock(CancelIrql);
    }
    return rax_2;
}

int64_t sub_1c0001810(DEVICE_OBJECT* arg1, IRP* arg2)
{
    Irql = 0;
    IoAcquireCancelSpinLock(&Irql);
    int64_t rax;
    if (arg2 == 0)
    {
        rax = IoReleaseCancelSpinLock(Irql);
    }
    else
    {
        arg2->CancelRoutine;
        arg2->CancelRoutine = nullptr;
        IoReleaseCancelSpinLock(Irql);
        NTSTATUS rax_3;
        if (*(*(arg2->Tail + 0x40) + 0x18) == 0x10000)
        {
            union AssociatedIrp = arg2->AssociatedIrp;
            rax_3 = sub_1c0001120(arg1, arg2, *AssociatedIrp, *(AssociatedIrp + 4));
        }
        else
        {
            rax_3 = STATUS_INVALID_PARAMETER;
        }
        *(arg2->IoStatus. + 0) = rax_3;
        arg2->IoStatus.Information = 0;
        IoStartNextPacket(arg1, 1);
        rax = IofCompleteRequest(arg2, 0);
    }
    return rax;
}

int64_t sub_1c00018e0(void* arg1)
{
    DEVICE_OBJECT* DeviceObject = *(arg1 + 8);
    void* DeviceExtension = DeviceObject->DeviceExtension;
    IRP* Irp = IoCsqRemoveNextIrp((DeviceExtension + 0x60), -ffffffffffffffff);
    if (Irp != 0)
    {
        do
        {
            *(Irp->IoStatus. + 0) = 0xc0000120;
            Irp->IoStatus.Information = 0;
            IofCompleteRequest(Irp, 0);
            Irp = IoCsqRemoveNextIrp((DeviceExtension + 0x60), -ffffffffffffffff);
        } while (Irp != 0);
    }
    return IoDeleteDevice(DeviceObject);
}

NTSTATUS _start(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    sub_1c0006044();
    return sub_1c0001360(DriverObject);
}

uint64_t sub_1c0006044()
{
    uint64_t __security_cookie_1 = __security_cookie;
    if ((__security_cookie_1 != 0 && __security_cookie_1 != 0x2b992ddfa232))
    {
        uint64_t rax = !(__security_cookie_1);
        data_1c0003008 = rax;
        return rax;
    }
    trap(0xd);
}


typedef struct struct_1 {
    struct struct_0 *field_0;
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

long long sub_1c0001010(unsigned long a0, unsigned long a1)
{
    struct_1 *v1;  // rdx
    struct_0 *v2;  // rcx
    unsigned long long *v3;  // rax

    v1 = a1 + 168;
    v2 = v1->field_0;
    if (v2->field_8 == v1)
    {
        v3 = v1->field_8;
        if (*(v3) == v1)
        {
            *(v3) = v2;
            v2->field_8 = v3;
            return v3;
        }
    }
}

long long sub_1c0001038(unsigned long a0)
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 7516196920
}

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

long long sub_1c0001040(unsigned long a0, IRP *a1)
{
    *((int *)&a1->IoStatus.Anonymous) = 3221225760;
    a1->IoStatus.Information = 0;
    return (unsigned long long)IofCompleteRequest(a1, 0);
}

typedef struct struct_1 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[4];
    unsigned long long field_38;
} struct_1;

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

long long sub_1c0001070(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp+0x8]
    int tmp_15;  // tmp #15
    int tmp_3;  // tmp #3
    int tmp_0;  // tmp #0
    unsigned long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    IRP *v3;  // rbx
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long v7;  // r14
    unsigned long long v8;  // rax
    IRP *v9;  // rbp

    v0 = 0;
    v3 = a1;
    v5 = KfRaiseIrql(2);
    IoAcquireCancelSpinLock(&v0);
    v6 = a0->field_20;
    a0->field_20 = 0;
    if (!v6)
    {
        IoReleaseCancelSpinLock(v0);
        KeLowerIrql((char)v5);
        sub_1c0001120(a0, v3, 0, 0);
        *((int *)&v3->IoStatus.Anonymous) = 0;
        v3->IoStatus.Information = 0;
        IofCompleteRequest(v3, 0);
        return 0;
    }
    v2 = v7;
    *((int *)&v1) = rbp<8>;
    while (true)
    {
        v8 = KeRemoveDeviceQueue(a0 + 4);
        if (!(v8) || !((v9 = v8 - 120, v9)))
            break;
        v9->CancelRoutine = 0;
        tmp_15 = CasCmpNE(tmp_3, tmp_0);
        if (tmp_15)
            goto LABEL_0x1c0001634;
        *((int *)&v9->IoStatus.Anonymous) = 3221225760;
        v9->IoStatus.Information = 0;
        IoReleaseCancelSpinLock(v0);
        IofCompleteRequest(v9, 0);
        IoAcquireCancelSpinLock(&v0);
    }
}

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[64];
    unsigned long long field_40;
} struct_0;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

int sub_1c0001120(struct_0 *a0, IRP *a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x18]
    unsigned long v2;  // rax
    unsigned int v3;  // ebx
    IRP *v4;  // rax
    unsigned int v5[2];  // rcx

    v0 = 0;
    (unsigned int)v2 = IoGetRequestorSessionId(a1, &v0);
    v3 = v2;
    if ((unsigned int)v2 < 0)
        return v2;
    v4 = IoCsqRemoveNextIrp(a0->field_40 + 96, v0);
    if (!v4)
    {
        v3 = 3221226021;
    }
    else
    {
        v5 = *((long long *)&v4->AssociatedIrp);
        v5[0] = a2;
        v5[1] = a3;
        *((int *)&v4->IoStatus.Anonymous) = 0;
        v4->IoStatus.Information = 8;
        IofCompleteRequest(v4, 0);
    }
    return v3;
}

typedef struct struct_1 {
    char padding_0[64];
    struct struct_0 *field_40;
} struct_1;

typedef struct FAST_MUTEX {
    unsigned int Count;
    char padding_4[4];
    void* Owner;
    unsigned int Contention;
    char padding_14[4];
    KEVENT Event;
    unsigned int OldIrql;
} FAST_MUTEX;

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[56];
    unsigned int field_38;
    char padding_3c[4];
    unsigned long long field_40;
} struct_0;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

long long sub_1c00011b0(struct_1 *a0, IRP *a1)
{
    int tmp_3;  // tmp #3
    FAST_MUTEX *v1;  // rbx

    v1 = a0->field_40;
    ExAcquireFastMutex(v1);
    tmp_3 = v1[1].padding_4;
    v1[1].padding_4 = v1[1].padding_4 - 1;
    if (!tmp_3 + -1)
        MmUnlockPagableImageSection(*((long long *)((char *)&v1[1].Owner + 4)));
    ExReleaseFastMutex(v1);
    *((int *)&a1->IoStatus.Anonymous) = 0;
    a1->IoStatus.Information = 0;
    IofCompleteRequest(a1, 0);
    return 0;
}

typedef struct struct_1 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_1;

long long sub_1c0001230(unsigned long a0, struct_1 *a1, unsigned long a2)
{
    unsigned int v0;  // [bp+0x8]
    unsigned long v1;  // [bp+0x10]
    unsigned long long *v2;  // rbx
    struct struct_0 **v3;  // rdi, Other Possible Types: unsigned long

    v0 = 0;
    v2 = a0 - 16;
    v3 = (!a1 ? a1->field_a8 : *(v2));
    if (v3 == v2)
        return 0;
    *((int *)&v1) = rbp<8>;
    while (IoGetRequestorSessionId(v3 - 168, &v0) >= 0 && v0 != (unsigned int)a2 && (unsigned int)a2 != -1)
    {
        v3 = *((long long *)v3);
        if (v3 == v2)
            return 0;
    }
    return 0;
}

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[3];
    char field_3;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
} struct_0;

typedef struct DEVICE_OBJECT {
    unsigned short Type;
    unsigned short Size;
    unsigned int ReferenceCount;
    struct DRIVER_OBJECT *DriverObject;
    void* NextDevice;
    void* AttachedDevice;
    struct IRP *CurrentIrp;
    unsigned int *Timer;
    unsigned int Flags;
    unsigned int Characteristics;
    struct VPB *Vpb;
    void* DeviceExtension;
    unsigned int DeviceType;
    char StackSize;
    char padding_4d[3];
    char Queue;
    char padding_51[71];
    unsigned int AlignmentRequirement;
    char padding_9c[4];
    KDEVICE_QUEUE DeviceQueue;
    char padding_c1[7];
    KDPC Dpc;
    unsigned int ActiveThreadCount;
    char padding_10c[4];
    void* SecurityDescriptor;
    char DeviceLock;
    char padding_119[23];
    unsigned short SectorSize;
    unsigned short Spare1;
    char padding_134[4];
    struct DEVOBJ_EXTENSION *DeviceObjectExtension;
    void* Reserved;
} DEVICE_OBJECT;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DRIVER_OBJECT {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    void* DeviceObject;
    unsigned int Flags;
    char padding_14[4];
    void* DriverStart;
    unsigned int DriverSize;
    char padding_24[4];
    void* DriverSection;
    struct DRIVER_EXTENSION *DriverExtension;
    char DriverName;
    char padding_39[15];
    void* HardwareDatabase;
    struct FAST_IO_DISPATCH *FastIoDispatch;
    void* *DriverInit;
    void* *DriverStartIo;
    void* *DriverUnload;
    void* *MajorFunction[28];
} DRIVER_OBJECT;

typedef struct VPB {
    unsigned short Type;
    unsigned short Size;
    unsigned short Flags;
    unsigned short VolumeLabelLength;
    void* DeviceObject;
    void* RealDevice;
    unsigned int SerialNumber;
    unsigned int ReferenceCount;
    char VolumeLabel[32];
} VPB;

typedef struct KDEVICE_QUEUE {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    char DeviceListHead;
    char padding_9[15];
    unsigned int *Lock;
    char Busy;
} KDEVICE_QUEUE;

typedef struct KDPC {
    char Anonymous;
    char padding_1[7];
    SINGLE_LIST_ENTRY DpcListEntry;
    unsigned int *ProcessorHistory;
    void* DeferredRoutine;
    void* DeferredContext;
    void* SystemArgument1;
    void* SystemArgument2;
    void* DpcData;
} KDPC;

typedef struct DEVOBJ_EXTENSION {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    void* DeviceObject;
    unsigned int PowerFlags;
    char padding_14[4];
    unsigned int **Dope;
    unsigned int ExtensionFlags;
    char padding_24[4];
    void* DeviceNode;
    void* AttachedTo;
    unsigned int StartIoCount;
    unsigned int StartIoKey;
    unsigned int StartIoFlags;
    char padding_44[4];
    void* Vpb;
    void* DependencyNode;
    void* InterruptContext;
    unsigned int InterruptCount;
    char padding_64[4];
    void* VerifierContext;
} DEVOBJ_EXTENSION;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

typedef struct DRIVER_EXTENSION {
    void* DriverObject;
    void* *AddDevice;
    unsigned int Count;
    char padding_14[4];
    UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION;

typedef struct FAST_IO_DISPATCH {
    unsigned int SizeOfFastIoDispatch;
    char padding_4[4];
    void* *FastIoCheckIfPossible;
    void* *FastIoRead;
    void* *FastIoWrite;
    void* *FastIoQueryBasicInfo;
    void* *FastIoQueryStandardInfo;
    void* *FastIoLock;
    void* *FastIoUnlockSingle;
    void* *FastIoUnlockAll;
    void* *FastIoUnlockAllByKey;
    void* *FastIoDeviceControl;
    void* *AcquireFileForNtCreateSection;
    void* *ReleaseFileForNtCreateSection;
    void* *FastIoDetachDevice;
    void* *FastIoQueryNetworkOpenInfo;
    void* *AcquireForModWrite;
    void* *MdlRead;
    void* *MdlReadComplete;
    void* *PrepareMdlWrite;
    void* *MdlWriteComplete;
    void* *FastIoReadCompressed;
    void* *FastIoWriteCompressed;
    void* *MdlReadCompleteCompressed;
    void* *MdlWriteCompleteCompressed;
    void* *FastIoQueryOpen;
    void* *ReleaseForModWrite;
    void* *AcquireForCcFlush;
    void* *ReleaseForCcFlush;
} FAST_IO_DISPATCH;

typedef struct SINGLE_LIST_ENTRY {
    void* Next;
} SINGLE_LIST_ENTRY;

typedef struct UNICODE_STRING {
    unsigned short Length;
    unsigned short MaximumLength;
    char padding_4[4];
    char *Buffer;
} UNICODE_STRING;

long long sub_1c0001290(DEVICE_OBJECT *a0, IRP *a1)
{
    int tmp_22;  // tmp #22
    struct_0 *v1;  // r8
    unsigned long long v2;  // rax
    unsigned int v5[2];  // rax

    v1 = *((long long *)((char *)&a1[1].IoStatus.Information + 7));
    v2 = v1->field_18;
    tmp_22 = v2;
    if ((int)tmp_22 == 0x10000)
    {
        if (v1->field_10 >= 8)
        {
            v5 = *((long long *)&a1->AssociatedIrp);
            if (v5[0] && !v5[1])
            {
                *((int *)&a1->IoStatus.Anonymous) = 0;
                a1->IoStatus.Information = 0;
                IofCompleteRequest(a1, 0);
                return 0;
            }
            *((int *)&a1->IoStatus.Anonymous) = 259;
            a1->IoStatus.Information = 0;
            v1->field_3 = v1->field_3 | 1;
            IoStartPacket(a0, a1, NULL, sub_1c0001790);
            return 259;
        }
    }
    else
    {
        if ((unsigned int)v2 - 0x10000 == 4)
        {
            if (v1->field_8 >= 8)
            {
                *((int *)&a1->IoStatus.Anonymous) = 259;
                a1->IoStatus.Information = 0;
                v1->field_3 = v1->field_3 | 1;
                IoCsqInsertIrp(a0->DeviceExtension + 96, a1, NULL);
                return 259;
            }
            *((int *)&a1->IoStatus.Anonymous) = 3221225485;
            a1->IoStatus.Information = 0;
            IofCompleteRequest(a1, 0);
            return 3221225485;
        }
    }
    *((int *)&a1->IoStatus.Anonymous) = 3221225485;
    a1->IoStatus.Information = 0;
    IofCompleteRequest(a1, 0);
    return 3221225485;
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

long long sub_1c0001300(unsigned long a0, unsigned long a1)
{
    struct_0 *v1;  // rcx
    unsigned long long v2[2];  // rax
    unsigned long long *v3;  // rdx

    v1 = a0 - 16;
    v2 = a1 + 168;
    v3 = v1->field_8;
    if (*(v3) == v1)
    {
        v2[0] = v1;
        v2[1] = v3;
        *(v3) = v2;
        v1->field_8 = &v2[0];
        return 0;
    }
}

char sub_1c0001330(unsigned long a0, char *a1)
{
    unsigned long long v1;  // rax

    (char)v1 = KeAcquireSpinLockRaiseToDpc(a0 - 24);
    *(a1) = v1;
    return v1;
}

typedef struct UNICODE_STRING {
    unsigned short Length;
    unsigned short MaximumLength;
    char padding_4[4];
    char *Buffer;
} UNICODE_STRING;

typedef struct DRIVER_OBJECT {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct DEVICE_OBJECT *DeviceObject;
    unsigned int Flags;
    char padding_14[4];
    void* DriverStart;
    unsigned int DriverSize;
    char padding_24[4];
    void* DriverSection;
    struct DRIVER_EXTENSION *DriverExtension;
    char DriverName;
    char padding_39[15];
    void* HardwareDatabase;
    struct FAST_IO_DISPATCH *FastIoDispatch;
    void* *DriverInit;
    void* *DriverStartIo;
    void* *DriverUnload;
    void* *MajorFunction[28];
} DRIVER_OBJECT;

typedef struct struct_1 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[12];
    struct struct_0 *field_40;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[36];
    unsigned int field_38;
} struct_0;

typedef struct DEVICE_OBJECT {
    unsigned short Type;
    unsigned short Size;
    unsigned int ReferenceCount;
    void* DriverObject;
    void* NextDevice;
    void* AttachedDevice;
    struct IRP *CurrentIrp;
    unsigned int *Timer;
    unsigned int Flags;
    unsigned int Characteristics;
    struct VPB *Vpb;
    void* DeviceExtension;
    unsigned int DeviceType;
    char StackSize;
    char padding_4d[3];
    char Queue;
    char padding_51[71];
    unsigned int AlignmentRequirement;
    char padding_9c[4];
    KDEVICE_QUEUE DeviceQueue;
    char padding_c1[7];
    KDPC Dpc;
    unsigned int ActiveThreadCount;
    char padding_10c[4];
    void* SecurityDescriptor;
    char DeviceLock;
    char padding_119[23];
    unsigned short SectorSize;
    unsigned short Spare1;
    char padding_134[4];
    struct DEVOBJ_EXTENSION *DeviceObjectExtension;
    void* Reserved;
} DEVICE_OBJECT;

typedef struct DRIVER_EXTENSION {
    void* DriverObject;
    void* *AddDevice;
    unsigned int Count;
    char padding_14[4];
    UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION;

typedef struct FAST_IO_DISPATCH {
    unsigned int SizeOfFastIoDispatch;
    char padding_4[4];
    void* *FastIoCheckIfPossible;
    void* *FastIoRead;
    void* *FastIoWrite;
    void* *FastIoQueryBasicInfo;
    void* *FastIoQueryStandardInfo;
    void* *FastIoLock;
    void* *FastIoUnlockSingle;
    void* *FastIoUnlockAll;
    void* *FastIoUnlockAllByKey;
    void* *FastIoDeviceControl;
    void* *AcquireFileForNtCreateSection;
    void* *ReleaseFileForNtCreateSection;
    void* *FastIoDetachDevice;
    void* *FastIoQueryNetworkOpenInfo;
    void* *AcquireForModWrite;
    void* *MdlRead;
    void* *MdlReadComplete;
    void* *PrepareMdlWrite;
    void* *MdlWriteComplete;
    void* *FastIoReadCompressed;
    void* *FastIoWriteCompressed;
    void* *MdlReadCompleteCompressed;
    void* *MdlWriteCompleteCompressed;
    void* *FastIoQueryOpen;
    void* *ReleaseForModWrite;
    void* *AcquireForCcFlush;
    void* *ReleaseForCcFlush;
} FAST_IO_DISPATCH;

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct VPB {
    unsigned short Type;
    unsigned short Size;
    unsigned short Flags;
    unsigned short VolumeLabelLength;
    void* DeviceObject;
    void* RealDevice;
    unsigned int SerialNumber;
    unsigned int ReferenceCount;
    char VolumeLabel[32];
} VPB;

typedef struct KDEVICE_QUEUE {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    char DeviceListHead;
    char padding_9[15];
    unsigned int *Lock;
    char Busy;
} KDEVICE_QUEUE;

typedef struct KDPC {
    char Anonymous;
    char padding_1[7];
    SINGLE_LIST_ENTRY DpcListEntry;
    unsigned int *ProcessorHistory;
    void* DeferredRoutine;
    void* DeferredContext;
    void* SystemArgument1;
    void* SystemArgument2;
    void* DpcData;
} KDPC;

typedef struct DEVOBJ_EXTENSION {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    void* DeviceObject;
    unsigned int PowerFlags;
    char padding_14[4];
    unsigned int **Dope;
    unsigned int ExtensionFlags;
    char padding_24[4];
    void* DeviceNode;
    void* AttachedTo;
    unsigned int StartIoCount;
    unsigned int StartIoKey;
    unsigned int StartIoFlags;
    char padding_44[4];
    void* Vpb;
    void* DependencyNode;
    void* InterruptContext;
    unsigned int InterruptCount;
    char padding_64[4];
    void* VerifierContext;
} DEVOBJ_EXTENSION;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct SINGLE_LIST_ENTRY {
    void* Next;
} SINGLE_LIST_ENTRY;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

int sub_1c0001360()
{
    UNICODE_STRING v0;  // [bp-0x18]
    unsigned long v1;  // [bp+0x8]
    void* v2;  // [bp+0x18]
    DRIVER_OBJECT *v3;  // rcx
    struct_1 *v4;  // rax
    unsigned long v5;  // rdi
    struct_0 *v6;  // rdi
    unsigned long long v7[2];  // rax

    *((int128_t *)&v0.Length) = 0;
    v2 = 0;
    RtlInitUnicodeString(&v0, L"\\Device\\Beep");
    if (IoCreateDevice(v3, 160, &v0, 1, 0x100, 0, &v2))
        return;
    v4 = v2;
    v1 = v5;
    v4->field_30 = v4->field_30 | 4;
    v6 = (long long)v2[64];
    v6->field_0 = 1;
    v6->field_8 = 0;
    v6->field_10 = 0;
    KeInitializeEvent(&v6->padding_14[4], 1, 0);
    v7 = &v6[1].padding_14;
    v6->field_38 = 0;
    v7[1] = v7;
    v7[0] = v7;
    KeInitializeSpinLock((char *)&v6[1].field_8 + 4);
    if (!IoCsqInitialize(&v6[1].padding_14[16], sub_1c0001300, sub_1c0001010, sub_1c0001230, sub_1c0001330, sub_1c00014f0, sub_1c0001040))
    {
        v3->DriverStartIo = &sub_1c0001810;
        v3->DriverUnload = &sub_1c00018e0;
        v3->MajorFunction[0] = &sub_1c0001510;
        v3->MajorFunction[2] = &sub_1c00011b0;
        v3->MajorFunction[14] = &sub_1c0001290;
        v3->MajorFunction[18] = &sub_1c0001070;
        IoSetStartIoAttributes(v2, 1, 0);
        return;
    }
    return;
}

long long sub_1c00014f0(unsigned long a0)
{
    return (unsigned long long)KeReleaseSpinLock(a0 - 24);
}

typedef struct struct_1 {
    char padding_0[64];
    struct struct_0 *field_40;
} struct_1;

typedef struct FAST_MUTEX {
    unsigned int Count;
    char padding_4[4];
    void* Owner;
    unsigned int Contention;
    char padding_14[4];
    KEVENT Event;
    unsigned int OldIrql;
} FAST_MUTEX;

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[56];
    unsigned int field_38;
    char padding_3c[4];
    unsigned long long field_40;
} struct_0;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

long long sub_1c0001510(struct_1 *a0, IRP *a1)
{
    FAST_MUTEX *v1;  // rbx

    v1 = a0->field_40;
    ExAcquireFastMutex(v1);
    v1[1].padding_4 = v1[1].padding_4 + 1;
    if (v1[1].padding_4 == 1)
        *((void* *)((char *)&v1[1].Owner + 4)) = MmLockPagableDataSection(sub_1c0001510);
    ExReleaseFastMutex(v1);
    *((int *)&a1->IoStatus.Anonymous) = 0;
    a1->IoStatus.Information = 0;
    IofCompleteRequest(a1, 0);
    return 0;
}

extern unsigned long long g_1c0003000;

long long sub_1c00015a0(unsigned long a0)
{
    unsigned long v1;  // rax

    if (a0 == g_1c0003000 && !(unsigned short)(__ROL__(a0, 16)))
        return v1;
}

long long sub_1c00015d6(unsigned long a0)
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 7516198358
}

long long sub_1c00015e0()
{
    unsigned long v1;  // rax

    return v1;
}

long long sub_1c0001600()
{
    goto rax<8>;
}

long long sub_1c0001780(unsigned long a0)
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 7516198784
}

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

char sub_1c0001790(struct_0 *a0, IRP *a1)
{
    char v1;  // cl
    unsigned long v3;  // rax, Other Possible Types: unsigned long long

    if (a1 == a0->field_20)
    {
        v1 = a1->CancelIrql;
    }
    else
    {
        v1 = a1->CancelIrql;
        if (KeRemoveEntryDeviceQueue(a0 + 4, &a1->Tail))
        {
            IoReleaseCancelSpinLock(v1);
            *((int *)&a1->IoStatus.Anonymous) = 3221225760;
            a1->IoStatus.Information = 0;
            (char)v3 = IofCompleteRequest(a1, 0);
            return v3;
        }
    }
    (char)v3 = IoReleaseCancelSpinLock(v1);
    return v3;
}

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
    char padding_20[16];
    unsigned int field_30;
    char padding_34[4];
    unsigned long long field_38;
    char padding_40[40];
    unsigned long long field_68;
    char padding_70[72];
    struct struct_0 *field_b8;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
} struct_2;

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

long long sub_1c0001810(void* a0, struct_1 *a1)
{
    int tmp_22;  // tmp #22
    int tmp_6;  // tmp #6
    int tmp_3;  // tmp #3
    char v1;  // [bp+0x10]
    unsigned long v2;  // rax, Other Possible Types: unsigned long long
    unsigned long v3;  // eax, Other Possible Types: unsigned int
    unsigned int v4[2];  // rax

    v1 = 0;
    IoAcquireCancelSpinLock(&v1);
    if (!a1)
    {
        v2 = IoReleaseCancelSpinLock(v1);
        return v2;
    }
    a1->field_68 = 0;
    tmp_22 = CasCmpNE(tmp_6, tmp_3);
    if (tmp_22)
        goto LABEL_0x1c0001850;
    IoReleaseCancelSpinLock(v1);
    if (a1->field_b8->field_18 != 0x10000)
    {
        v3 = 3221225485;
    }
    else
    {
        v4 = a1->field_18;
        (unsigned int)v3 = sub_1c0001120(a0, a1, v4[0], v4[1]);
    }
    a1->field_30 = v3;
    a1->field_38 = 0;
    IoStartNextPacket(a0, 1);
    v2 = IofCompleteRequest(a1, 0);
    return v2;
}

typedef struct struct_0 {
    char padding_0[8];
    struct DEVICE_OBJECT *field_8;
} struct_0;

typedef struct IRP {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    struct MDL *MdlAddress;
    unsigned int Flags;
    char padding_14[4];
    char AssociatedIrp;
    char padding_19[7];
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    char RequestorMode;
    char PendingReturned;
    char StackCount;
    char CurrentLocation;
    char Cancel;
    char CancelIrql;
    char ApcEnvironment;
    char AllocationFlags;
    char Anonymous;
    char padding_49[7];
    struct KEVENT *UserEvent;
    char Overlay;
    char padding_59[15];
    void* *CancelRoutine;
    void* UserBuffer;
    char Tail;
} IRP;

typedef struct DEVICE_OBJECT {
    unsigned short Type;
    unsigned short Size;
    unsigned int ReferenceCount;
    struct DRIVER_OBJECT *DriverObject;
    void* NextDevice;
    void* AttachedDevice;
    struct IRP *CurrentIrp;
    unsigned int *Timer;
    unsigned int Flags;
    unsigned int Characteristics;
    struct VPB *Vpb;
    void* DeviceExtension;
    unsigned int DeviceType;
    char StackSize;
    char padding_4d[3];
    char Queue;
    char padding_51[71];
    unsigned int AlignmentRequirement;
    char padding_9c[4];
    KDEVICE_QUEUE DeviceQueue;
    char padding_c1[7];
    KDPC Dpc;
    unsigned int ActiveThreadCount;
    char padding_10c[4];
    void* SecurityDescriptor;
    char DeviceLock;
    char padding_119[23];
    unsigned short SectorSize;
    unsigned short Spare1;
    char padding_134[4];
    struct DEVOBJ_EXTENSION *DeviceObjectExtension;
    void* Reserved;
} DEVICE_OBJECT;

typedef struct MDL {
    void* Next;
    unsigned short Size;
    unsigned short MdlFlags;
    char padding_c[4];
    unsigned int **Process;
    void* MappedSystemVa;
    void* StartVa;
    unsigned int ByteCount;
    unsigned int ByteOffset;
} MDL;

typedef struct LIST_ENTRY {
    void* Flink;
    void* Blink;
} LIST_ENTRY;

typedef struct IO_STATUS_BLOCK {
    char Anonymous;
    char padding_1[7];
    unsigned int *Information;
} IO_STATUS_BLOCK;

typedef struct KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT;

typedef struct DRIVER_OBJECT {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    void* DeviceObject;
    unsigned int Flags;
    char padding_14[4];
    void* DriverStart;
    unsigned int DriverSize;
    char padding_24[4];
    void* DriverSection;
    struct DRIVER_EXTENSION *DriverExtension;
    char DriverName;
    char padding_39[15];
    void* HardwareDatabase;
    struct FAST_IO_DISPATCH *FastIoDispatch;
    void* *DriverInit;
    void* *DriverStartIo;
    void* *DriverUnload;
    void* *MajorFunction[28];
} DRIVER_OBJECT;

typedef struct VPB {
    unsigned short Type;
    unsigned short Size;
    unsigned short Flags;
    unsigned short VolumeLabelLength;
    void* DeviceObject;
    void* RealDevice;
    unsigned int SerialNumber;
    unsigned int ReferenceCount;
    char VolumeLabel[32];
} VPB;

typedef struct KDEVICE_QUEUE {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    char DeviceListHead;
    char padding_9[15];
    unsigned int *Lock;
    char Busy;
} KDEVICE_QUEUE;

typedef struct KDPC {
    char Anonymous;
    char padding_1[7];
    SINGLE_LIST_ENTRY DpcListEntry;
    unsigned int *ProcessorHistory;
    void* DeferredRoutine;
    void* DeferredContext;
    void* SystemArgument1;
    void* SystemArgument2;
    void* DpcData;
} KDPC;

typedef struct DEVOBJ_EXTENSION {
    unsigned short Type;
    unsigned short Size;
    char padding_4[4];
    void* DeviceObject;
    unsigned int PowerFlags;
    char padding_14[4];
    unsigned int **Dope;
    unsigned int ExtensionFlags;
    char padding_24[4];
    void* DeviceNode;
    void* AttachedTo;
    unsigned int StartIoCount;
    unsigned int StartIoKey;
    unsigned int StartIoFlags;
    char padding_44[4];
    void* Vpb;
    void* DependencyNode;
    void* InterruptContext;
    unsigned int InterruptCount;
    char padding_64[4];
    void* VerifierContext;
} DEVOBJ_EXTENSION;

typedef struct DISPATCHER_HEADER {
    char Anonymous;
    char padding_1[3];
    unsigned int SignalState;
    char WaitListHead;
} DISPATCHER_HEADER;

typedef struct DRIVER_EXTENSION {
    void* DriverObject;
    void* *AddDevice;
    unsigned int Count;
    char padding_14[4];
    UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION;

typedef struct FAST_IO_DISPATCH {
    unsigned int SizeOfFastIoDispatch;
    char padding_4[4];
    void* *FastIoCheckIfPossible;
    void* *FastIoRead;
    void* *FastIoWrite;
    void* *FastIoQueryBasicInfo;
    void* *FastIoQueryStandardInfo;
    void* *FastIoLock;
    void* *FastIoUnlockSingle;
    void* *FastIoUnlockAll;
    void* *FastIoUnlockAllByKey;
    void* *FastIoDeviceControl;
    void* *AcquireFileForNtCreateSection;
    void* *ReleaseFileForNtCreateSection;
    void* *FastIoDetachDevice;
    void* *FastIoQueryNetworkOpenInfo;
    void* *AcquireForModWrite;
    void* *MdlRead;
    void* *MdlReadComplete;
    void* *PrepareMdlWrite;
    void* *MdlWriteComplete;
    void* *FastIoReadCompressed;
    void* *FastIoWriteCompressed;
    void* *MdlReadCompleteCompressed;
    void* *MdlWriteCompleteCompressed;
    void* *FastIoQueryOpen;
    void* *ReleaseForModWrite;
    void* *AcquireForCcFlush;
    void* *ReleaseForCcFlush;
} FAST_IO_DISPATCH;

typedef struct SINGLE_LIST_ENTRY {
    void* Next;
} SINGLE_LIST_ENTRY;

typedef struct UNICODE_STRING {
    unsigned short Length;
    unsigned short MaximumLength;
    char padding_4[4];
    char *Buffer;
} UNICODE_STRING;

long long sub_1c00018e0(struct_0 *a0)
{
    unsigned long long v1;  // rdi
    IRP *v2;  // rax, Other Possible Types: unsigned long

    v1 = a0->field_8->DeviceExtension;
    v2 = IoCsqRemoveNextIrp(v1 + 96, 0xffffffffffffffff);
    if (!v2)
        return (unsigned long long)IoDeleteDevice(a0->field_8);
    do
    {
        *((int *)(v2 + 48)) = 3221225760;
        *((long long *)(v2 + 56)) = 0;
        IofCompleteRequest(v2, 0);
        v2 = IoCsqRemoveNextIrp(v1 + 96, 0xffffffffffffffff);
    } while (v2);
    return (unsigned long long)IoDeleteDevice(a0->field_8);
}

long long _start(unsigned long long a0, unsigned long long a1)
{
    _security_init_cookie();
    return sub_1c0001360(a0, a1);
}

extern unsigned long long g_1c0003000;
extern unsigned long long g_1c0003008;

void _security_init_cookie()
{
    if (g_1c0003000 && g_1c0003000 != 47936899621426)
    {
        g_1c0003008 = ~(g_1c0003000);
        return;
    }
}


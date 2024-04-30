// VA=0x1c0001010
void __cdecl func_0x1010( int64_t p1, int64_t p2 )
{
    if( p2 + 168 == *(*(p2 + 168) + 8) && p2 + 168 == **(p2 + 176) ) {
        **(p2 + 176) = *(p2 + 168);
        *(*(p2 + 168) + 8) = *(p2 + 176);
        return;
    }
    __asm.int( 41 );
    // Note: Program behavior is undefined if control flow reaches this location.
}

// VA=0x1c0001040
void __cdecl func_0x1040( int64_t p1, int64_t p2 )
{
    *(p2 + 48) = 3221225760;
    *(p2 + 56) = 0;
    IofCompleteRequest( p2, 0 );
}

// VA=0x1c0001070
int32_t __cdecl func_0x1070( int64_t p1, int64_t p2 )
{
    uint64_t shadow_space1; // [rsp+8]
    unsigned char v1; // rax
    struct _KDEVICE_QUEUE_ENTRY * v2; // rax

    shadow_space1 = 0;
    v1 = KfRaiseIrql( p1 & 0xFFFFFFFFFFFFFF00 | 0x2 );
    IoAcquireCancelSpinLock( &shadow_space1 );
    *(p1 + 32) = 0;
    if( *(p1 + 32) != 0 ) {
        while( 1 ) {
            v2 = KeRemoveDeviceQueue( p1 + 160 );
            if( v2 == 0 || &v2[-5].SortKey == 0 ) {
                break;
            }
            v2[0].DeviceListEntry.Flink = 0;
            v2[-3].SortKey = 3221225760;
            v2[-2].DeviceListEntry.Flink = 0;
            IoReleaseCancelSpinLock( (uint32_t)(uint8_t)shadow_space1 );
            IofCompleteRequest( &v2[-5].SortKey, 0 );
            IoAcquireCancelSpinLock( &shadow_space1 );
        }
    }
    IoReleaseCancelSpinLock( (uint32_t)(uint8_t)shadow_space1 );
    KeLowerIrql( (uint32_t)v1 );
    func_0x1120( p1, p2, 0, 0 );
    *(p2 + 48) = 0;
    *(p2 + 56) = 0;
    IofCompleteRequest( p2, 0 );
    return 0;
}

// VA=0x1c0001120
void __cdecl func_0x1120( int64_t p1, int64_t p2, int32_t p3, int32_t p4 )
{
    uint32_t local_0x18; // [rsp-24]
    long v1; // rax
    struct _IRP * Irp; // rax

    local_0x18 = 0;
    v1 = IoGetRequestorSessionId( p2, &local_0x18 );
    if( v1 >= 0 ) {
        Irp = IoCsqRemoveNextIrp( *(p1 + 64) + 96, local_0x18 );
        if( Irp != 0 ) {
            Irp->AssociatedIrp.MasterIrp->Type = (uint32_t)p3;
            *(Irp->AssociatedIrp.MasterIrp + 4) = (uint32_t)p4;
            Irp->IoStatus = 0;
            Irp->IoStatus.Information = 8;
            IofCompleteRequest( Irp, 0 );
        }
    }
}

// VA=0x1c00011b0
int32_t __cdecl func_0x11B0( int64_t p1, int64_t p2 )
{
    struct _FAST_MUTEX * FastMutex;

    FastMutex = *(p1 + 64);
    ExAcquireFastMutex( FastMutex );
    FastMutex[1].Count += -1;
    if( FastMutex[1].Count == 1 ) {
        MmUnlockPagableImageSection( FastMutex[1].Owner );
    }
    ExReleaseFastMutex( FastMutex );
    *(p2 + 48) = 0;
    *(p2 + 56) = 0;
    IofCompleteRequest( p2, 0 );
    return 0;
}

// VA=0x1c0001230
int64_t __cdecl func_0x1230( int64_t p1, int64_t p2, int64_t p3 )
{
    uint64_t shadow_space1; // [rsp+8]
    long v3; // rax
    uint64_t v1; // rdi
    int64_t v2;

    shadow_space1 = 0;
    if( p2 == 0 ) {
        v1 = *(p1 + -16);
    } else {
        v1 = *(p2 + 168);
    }
    if( p1 + -16 == v1 ) {
        v2 = 0;
    } else {
        while( 1 ) {
            v2 = v1 + 18446744073709551448;
            v3 = IoGetRequestorSessionId( v1 + 18446744073709551448, &shadow_space1 );
            if( v3 >= 0 && p3 != (uint32_t)shadow_space1 && p3 != 4294967295 ) {
                if( p1 + -16 == *v1 ) {
                    v2 = 0;
                    break;
                }
                v1 = *v1;
                continue;
            }
            break;
        }
    }
    return v2;
}

// VA=0x1c0001290
int32_t __cdecl func_0x1290( int64_t p1, int64_t p2 )
{
    uint32_t v1; // rbx
    int32_t v2; // rax

    if( *(*(p2 + 184) + 24) == 65536 ) {
        if( *(*(p2 + 184) + 16) < 8 ) {
            goto node_27;
        } else if( **(p2 + 24) != 0 && *(*(p2 + 24) + 4) == 0 ) {
            v1 = 0;
            goto node_38;
        } else {
            *(p2 + 48) = 259;
            *(p2 + 56) = 0;
            *(*(p2 + 184) + 3) |= 0x1;
            IoStartPacket( p1, p2, 0, &func_0x1790 );
        }
    } else if( *(*(p2 + 184) + 24) != 65540 ) {
        goto node_27;
    } else if( *(*(p2 + 184) + 8) > 7 ) {
        *(p2 + 48) = 259;
        *(p2 + 56) = 0;
        *(*(p2 + 184) + 3) |= 0x1;
        IoCsqInsertIrp( *(p1 + 64) + 96, p2, 0 );
    } else {
        v1 = 3221225485;
        goto node_38;
    }
    v2 = 259;
    goto node_56;
    node_38:
    *(p2 + 48) = v1;
    *(p2 + 56) = 0;
    IofCompleteRequest( p2, 0 );
    v2 = v1;
    node_56:
    return v2;
    node_27:
    v1 = 3221225485;
    goto node_38;
}

// VA=0x1c0001300
int32_t __cdecl func_0x1300( int64_t p1, int64_t p2 )
{
    if( p1 + -16 == **(p1 + -8) ) {
        *(p2 + 168) = p1 + -16;
        *(p2 + 176) = *(p1 + -8);
        **(p1 + -8) = p2 + 168;
        *(p1 + -8) = p2 + 168;
        return 0;
    }
    __asm.int( 41 );
    // Note: Program behavior is undefined if control flow reaches this location.
}

// VA=0x1c0001330
void __cdecl func_0x1330( int64_t p1, int64_t p2 )
{
    unsigned char v1; // rax

    v1 = KeAcquireSpinLockRaiseToDpc( p1 + -24 );
    *p2 = v1;
}

// VA=0x1c0001360
void __cdecl func_0x1360( int64_t p1 )
{
    struct _DEVICE_OBJECT * shadow_space3; // [rsp+24]
    uint64_t local_0x18; // [rsp-24]
    int64_t zmm0; // zmm0
    uint64_t locG4294967280; // zmm0
    long v1; // rax
    unsigned char v3; // rdx
    long v2; // rax

    locG4294967280 = __asm.xorps( zmm0 );
    local_0x18 = locG4294967280;
    shadow_space3 = 0;
    RtlInitUnicodeString( &local_0x18, "\\Device\\Beep" );
    v1 = IoCreateDevice( p1, 160, &local_0x18, 1, 256, 0, &shadow_space3 );
    if( (uint32_t)v1 == 0 ) {
        shadow_space3->Flags |= 0x4;
        *shadow_space3->DeviceExtension = 1;
        *(shadow_space3->DeviceExtension + 8) = 0;
        *(shadow_space3->DeviceExtension + 16) = 0;
        KeInitializeEvent( shadow_space3->DeviceExtension + 24, 1, 0 );
        *(shadow_space3->DeviceExtension + 56) = 0;
        *(shadow_space3->DeviceExtension + 88) = shadow_space3->DeviceExtension + 80;
        *(shadow_space3->DeviceExtension + 80) = shadow_space3->DeviceExtension + 80;
        KeInitializeSpinLock( shadow_space3->DeviceExtension + 72 );
        v2 = IoCsqInitialize( shadow_space3->DeviceExtension + 96, &func_0x1300, &func_0x1010, &func_0x1230, &func_0x1330, &func_0x14F0, &func_0x1040 );
        if( (uint32_t)v2 == 0 ) {
            *(p1 + 96) = &func_0x1810;
            *(p1 + 104) = &func_0x18E0;
            *(p1 + 112) = &func_0x1510;
            *(p1 + 128) = &func_0x11B0;
            *(p1 + 224) = &func_0x1290;
            *(p1 + 256) = &func_0x1070;
            IoSetStartIoAttributes( shadow_space3, v3 & 0xFFFFFFFFFFFFFF00 | 0x1, 0 );
        }
    }
}

// VA=0x1c00014f0
void __cdecl func_0x14F0( int64_t p1, int64_t p2 )
{
    KeReleaseSpinLock( p1 + -24, p2 );
}

// VA=0x1c0001510
int32_t __cdecl func_0x1510( int64_t p1, int64_t p2 )
{
    struct _FAST_MUTEX * FastMutex;
    void * v1; // rax

    FastMutex = *(p1 + 64);
    ExAcquireFastMutex( FastMutex );
    FastMutex[1].Count += 1;
    if( FastMutex[1].Count == 1 ) {
        v1 = MmLockPagableDataSection( &func_0x1510 );
        FastMutex[1].Owner = v1;
    }
    ExReleaseFastMutex( FastMutex );
    *(p2 + 48) = 0;
    *(p2 + 56) = 0;
    IofCompleteRequest( p2, 0 );
    return 0;
}

// VA=0x1c00015a0
noclobber void __cdecl __security_check_cookie( uint64_t p1 )
{
    if( __security_cookie == p1 && (uint16_t)((p1 << 16 | p1 >> 48) & 0xFFFF) == 0 ) {
        return;
    }
    __asm.int( 41 );
    // Note: Program behavior is undefined if control flow reaches this location.
}

// VA=0x1c00015e0
inline void __cdecl func_0x15E0( void )
{
}

// VA=0x1c0001790
void __cdecl func_0x1790( int64_t p1, int64_t p2 )
{
    unsigned char v1; // rax
    unsigned char Irql; // rcx

    if( *(p1 + 32) == p2 ) {
        Irql = (uint32_t)*(p2 + 69);
    } else {
        v1 = KeRemoveEntryDeviceQueue( p1 + 160, p2 + 120 );
        if( v1 == 0 ) {
            Irql = (uint32_t)*(p2 + 69);
        } else {
            IoReleaseCancelSpinLock( (uint32_t)*(p2 + 69) );
            *(p2 + 48) = 3221225760;
            *(p2 + 56) = 0;
            IofCompleteRequest( p2, 0 );
            return;
        }
    }
    IoReleaseCancelSpinLock( Irql );
}

// VA=0x1c0001810
void __cdecl func_0x1810( int64_t p1, int64_t p2 )
{
    uint64_t shadow_space2; // [rsp+16]
    unsigned char v2; // rdx
    uint32_t v1; // rax

    shadow_space2 = 0;
    IoAcquireCancelSpinLock( &shadow_space2 );
    if( p2 == 0 ) {
        IoReleaseCancelSpinLock( (uint32_t)(uint8_t)shadow_space2 );
    } else {
        *(p2 + 104) = 0;
        IoReleaseCancelSpinLock( (uint32_t)(uint8_t)shadow_space2 );
        if( *(*(p2 + 184) + 24) == 65536 ) {
            func_0x1120( p1, p2, **(p2 + 24), *(*(p2 + 24) + 4) );
        } else {
            v1 = 3221225485;
        }
        *(p2 + 48) = v1;
        *(p2 + 56) = 0;
        IoStartNextPacket( p1, v2 & 0xFFFFFFFFFFFFFF00 | 0x1 );
        IofCompleteRequest( p2, 0 );
    }
}

// VA=0x1c00018e0
void __cdecl func_0x18E0( int64_t p1 )
{
    struct _DEVICE_OBJECT * DeviceObject;
    struct _IO_CSQ * v1;
    struct _IRP * Irp; // rax

    DeviceObject = *(p1 + 8);
    v1 = DeviceObject->DeviceExtension;
    Irp = IoCsqRemoveNextIrp( (uint8_t *)v1 + 96, 18446744073709551615 );
    if( Irp != 0 ) {
        do {
            Irp->IoStatus = 3221225760;
            Irp->IoStatus.Information = 0;
            IofCompleteRequest( Irp, 0 );
            Irp = IoCsqRemoveNextIrp( (uint8_t *)v1 + 96, 18446744073709551615 );
        } while( Irp != 0 );
    }
    IoDeleteDevice( DeviceObject );
}

// VA=0x1c0006010
void __cdecl func_0x6010( int64_t p1, int64_t p2 )
{
    func_0x6044();
    func_0x1360( p1 );
}

// VA=0x1c0006044
void __cdecl func_0x6044( void )
{
    if( __security_cookie != 0 && __security_cookie != 47936899621426 ) {
        __security_cookie_complement = ~__security_cookie;
        return;
    }
    __asm.int( 41 );
    // Note: Program behavior is undefined if control flow reaches this location.
}



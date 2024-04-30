int main(int argc, char *argv[]);
__size32 proc_0x00006045();
__size32 proc_0x00001361(int param1, __size32 param2);


/** address: 0x00006011 */
int main(int argc, char *argv[])
{
    int eax; 		// r24
    __size32 ecx; 		// r25

    eax = proc_0x00006045();
    eax = proc_0x00001361(eax - 2, ecx);
    return eax - 2;
}

/** address: 0x00006045 */
__size32 proc_0x00006045()
{
    void *eax; 		// r24

    eax = *0xffffcfb5;
    if (eax == 1) {
    }
    eax = eax - *(eax - 2) - 2;
    *(__size8*)(eax + 59) += 50;
    return eax - 0x3061;
}

/** address: 0x00001361 */
__size32 proc_0x00001361(int param1, __size32 param2)
{
    __size8 dh; 		// r14
    __size8 dl; 		// r10
    int eax; 		// r24
    __size32 eax_1; 		// r24{35}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    union { int; void *; } ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    union { int; void *; } esp; 		// r28
    union { int; void *; } esp_1; 		// r28{10}
    void *esp_10; 		// r28{30}
    void *esp_11; 		// r28{35}
    void *esp_12; 		// r28{35}
    void *esp_13; 		// r28{35}
    union { int; void *; } esp_14; 		// r28{2}
    union { int; void *; } esp_15; 		// r28{2}
    union { int; void *; } esp_2; 		// r28{10}
    union { int; void *; } esp_3; 		// r28{10}
    void *esp_4; 		// r28{15}
    void *esp_5; 		// r28{15}
    void *esp_6; 		// r28{15}
    void *esp_7; 		// r28{25}
    void *esp_8; 		// r28{30}
    void *esp_9; 		// r28{30}
    __size32 local0; 		// m[esp + 16]
    int local1; 		// m[esp + 28]
    int local10; 		// m[esp_14 + 28]{25}
    int local11; 		// m[esp_14 + 28]{30}
    int local12; 		// m[esp_14 - 4]{10}
    int local13; 		// m[esp_14 - 4]{15}
    int local14; 		// m[esp_14 - 4]{25}
    int local15; 		// m[esp_14 - 4]{30}
    int local16; 		// m[esp_14 - 88]{10}
    int local17; 		// m[esp_14 - 88]{15}
    int local18; 		// m[esp_14 - 88]{25}
    int local19; 		// m[esp_14 - 88]{30}
    __size32 local2; 		// m[esp - 4]
    int local20; 		// m[esp - 20]
    unsigned int local3; 		// m[esp - 88]
    int local4; 		// m[esp_14 + 16]{10}
    int local5; 		// m[esp_14 + 16]{15}
    int local6; 		// m[esp_14 + 16]{25}
    int local7; 		// m[esp_14 + 16]{30}
    int local8; 		// m[esp_14 + 28]{10}
    int local9; 		// m[esp_14 + 28]{15}

    (*global_0x00003ca1)(0xd00, param1 - 7, (esp_14 - 20), 0xdac, param2, 0, INCDECFLAGS32(param1 - 7), param1 == 7, INCDECFLAGS32(param1 - 7), param1 < 7, 0, dl, ebx, 0, esi, pc);
    *(union { int; void *; }*)(esp_1 + 48) = esp_1 + 111;
    *(__size8*)(esp_1 + 41) = 0;
    *(__size32*)(esp_1 + 32) = 256;
    (*global_0x00003cad)(0, esp_1 + 62, ebx, 160, ebx, esi, <all>, INCDECFLAGS32(esp_1 + 62), esp_1 == -62, INCDECFLAGS32(esp_1 + 62), esp_1 < -62, 0, dl, local4, local8, local12, local16);
    if (eax == 0) {
        *(__size32*)(esp_4 + 96) = edi;
        *(int*)48 = *48 | 4;
        eax = *(esp_4 + 112);
        edi = *(eax + 63);
        *(__size32*)edi = 1;
        *(__size32*)(edi + 8) = esi;
        *(__size32*)(edi + 16) = esi;
        (*global_0x00003c7b)(esi + 1 >> 8 & 0xff, eax - 4, edi + 24, esi + 1, ebx, ebp + 1, esi, edi, <all>, INCDECFLAGS32(eax - 4), eax == 4, INCDECFLAGS32(eax - 4), eax < 4, 0, dl, local5, local9, local13, local17);
        *(__size32*)(edi + 56) = esi;
        *(__size32*)(edi + 86) = edi + 78;
        *(__size32*)(edi + 77) = edi + 77;
        (*global_0x00003c15)(dh, edi + 76, edi + 72, edx, ebx, ebp, esi, edi, <all>, INCDECFLAGS32(edi + 76), edi == -76, INCDECFLAGS32(edi + 76), edi < -76, 0, dl, local6, local10, local14, local18);
        *(__size32*)(esp_8 + 48) = -1008;
        *(__size32*)(esp_8 + 40) = 176;
        *(__size32*)(esp_8 + 30) = -1098;
        (*global_0x00003bec)(0xfe00, -1100, -539, -357, ebx, ebp, esi, edi, <all>, INCDECFLAGS32(-1100), 0, INCDECFLAGS32(-1100), 1, 0, dl, local7, local11, local15, local19);
        eax = eax_1 - 1;
        edi = *(esp_11 + 96);
        if (eax_1 == 1) {
            ecx = *(esp_11 + 112);
            *(__size32*)(ebx + 96) = 905;
            *(__size32*)(ebx + 104) = 1099;
            *(__size32*)(ebx + 112) = 110;
            *(__size32*)(ebx + 128) = -765;
            *(__size32*)(ebx + 224) = -555;
            *(__size32*)(ebx + 256) = -1113;
            (*global_0x00003b52)(1, dh, -1114, ecx, edx, ebx, ebp + 1, esi, edi, <all>, INCDECFLAGS32(-1114), 0, INCDECFLAGS32(-1114), 1, 0, *(esp_14 + 16), *(esp_14 + 28), *(esp_14 - 4), *(esp_14 - 88));
            eax = 0;
        }
    }
    return eax - 2;
}


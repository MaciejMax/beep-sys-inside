/*
Type: PE
Platform: windows-kernel-x86_64
Architecture: x86_64

Libraries: 
  ntoskrnl.exe

Compiler(s) Used: 
  Imported Functions (25 objects)
  VS2017 v15.9.16 build 27034 and VS2019 v16.0.0 build 27508 (15 objects)

Segments:
r--  0x1c0000000-0x1c0000400 
r-x  0x1c0001000-0x1c0001965  {Code}
r--  0x1c0002000-0x1c00024d8  {Data}
rw-  0x1c0003000-0x1c0003090  {Data}
r--  0x1c0004000-0x1c0004150  {Data}
r--  0x1c0005000-0x1c0005410  {Data}
r-x  0x1c0006000-0x1c0006072  {Code}
r--  0x1c0007000-0x1c0007040  {Data}
r--  0x1c0008000-0x1c00083e0  {Data}
r--  0x1c0009000-0x1c0009108  {Data}
---  0x1c0009110-0x1c00091d8 
---  0x1c00091e0-0x1c0009210 

Sections:
0x1c0001000-0x1c0001965  .text  {Code}
0x1c0002000-0x1c00024d8  .rdata  {Read-only data}
0x1c0003000-0x1c0003090  .data  {Writable data}
0x1c0004000-0x1c0004150  .pdata  {Read-only data}
0x1c0005000-0x1c0005410  .idata  {Read-only data}
0x1c0006000-0x1c0006072  INIT  {Code}
0x1c0007000-0x1c0007040  GFIDS  {Read-only data}
0x1c0008000-0x1c00083e0  .rsrc  {Read-only data}
0x1c0009000-0x1c0009108  .reloc  {Read-only data}
0x1c0009110-0x1c00091d8  .extern  {External}
0x1c00091e0-0x1c0009210  .synthetic_builtins  {External}
*/
1c0000000  struct DOS_Header __guard_fids_count = 
1c0000000  {
1c0000000      char e_magic[0x2] = "MZ"
1c0000002      uint16_t e_cblp = 0x90
1c0000004      uint16_t e_cp = 0x3
1c0000006      uint16_t e_crlc = 0x0
1c0000008      uint16_t e_cparhdr = 0x4
1c000000a      uint16_t e_minalloc = 0x0
1c000000c      uint16_t e_maxalloc = 0xffff
1c000000e      uint16_t e_ss = 0x0
1c0000010      uint16_t e_sp = 0xb8
1c0000012      uint16_t e_csum = 0x0
1c0000014      uint16_t e_ip = 0x0
1c0000016      uint16_t e_cs = 0x0
1c0000018      uint16_t e_lfarlc = 0x40
1c000001a      uint16_t e_ovno = 0x0
1c000001c      char e_res1[0x8] = "\x00\x00\x00\x00\x00\x00\x00", 0
1c0000024      uint16_t e_oemid = 0x0
1c0000026      uint16_t e_oeminfo = 0x0
1c0000028      char e_res2[0x14] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0
1c000003c      uint32_t e_lfanew = 0xe8
1c0000040  }

1c0000040  __dos_stub:
1c0000040  0e 1f ba 0e 00 b4 09 cd 21 b8 01 4c cd 21 54 68 69 73 20 70 72 6f 67 72 61 6d 20 63 61 6e 6e 6f  ........!..L.!This program canno
1c0000060  74 20 62 65 20 72 75 6e 20 69 6e 20 44 4f 53 20 6d 6f 64 65 2e 0d 0d 0a 24 00 00 00 00 00 00 00  t be run in DOS mode....$.......

1c0000080  struct Rich_Header __rich_header = 
1c0000080  {
1c0000080      uint32_t e_magic__DanS = 0x920ac3c5
1c0000084      uint32_t e_align[0x3] = 
1c0000084      {
1c0000084          [0x0] =  0xc164a281
1c0000088          [0x1] =  0xc164a281
1c000008c          [0x2] =  0xc164a281
1c0000090      }
1c0000090      uint32_t e_entry_id0__00010000 = 0xc165a281
1c0000094      uint32_t e_entry_count0__25 = 0xc164a298
1c0000098      uint32_t e_entry_id1__01016b14 = 0xc065c995
1c000009c      uint32_t e_entry_count1__3 = 0xc164a282
1c00000a0      uint32_t e_entry_id2__01046b14 = 0xc060c995
1c00000a4      uint32_t e_entry_count2__5 = 0xc164a284
1c00000a8      uint32_t e_entry_id3__01036b14 = 0xc067c995
1c00000ac      uint32_t e_entry_count3__2 = 0xc164a283
1c00000b0      uint32_t e_entry_id4__010d6b14 = 0xc069c995
1c00000b4      uint32_t e_entry_count4__3 = 0xc164a282
1c00000b8      uint32_t e_entry_id5__00ff6b14 = 0xc19bc995
1c00000bc      uint32_t e_entry_count5__1 = 0xc164a280
1c00000c0      uint32_t e_entry_id6__01026b14 = 0xc066c995
1c00000c4      uint32_t e_entry_count6__1 = 0xc164a280
1c00000c8      char e_magic[0x4] = "Rich"
1c00000cc      uint32_t e_checksum = 0xc164a281
1c00000d0  }

1c00000d0                                                  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00                  ................
1c00000e0  00 00 00 00 00 00 00 00                                                                          ........

1c00000e8  struct COFF_Header __coff_header = 
1c00000e8  {
1c00000e8      char magic[0x4] = "PE\x00", 0
1c00000ec      enum coff_machine machine = IMAGE_FILE_MACHINE_AMD64
1c00000ee      uint16_t numberOfSections = 0x9
1c00000f0      uint32_t timeDateStamp = 0xe4ac8238
1c00000f4      uint32_t pointerToSymbolTable = 0x0
1c00000f8      uint32_t numberOfSymbols = 0x0
1c00000fc      uint16_t sizeOfOptionalHeader = 0xf0
1c00000fe      enum coff_characteristics characteristics = IMAGE_FILE_EXECUTABLE_IMAGE | IMAGE_FILE_LARGE_ADDRESS_AWARE
1c0000100  }
1c0000100  struct PE64_Optional_Header __pe64_optional_header = 
1c0000100  {
1c0000100      enum pe_magic magic = PE_64BIT
1c0000102      uint8_t majorLinkerVersion = 0xe
1c0000103      uint8_t minorLinkerVersion = 0x14
1c0000104      uint32_t sizeOfCode = 0xc00
1c0000108      uint32_t sizeOfInitializedData = 0x1800
1c000010c      uint32_t sizeOfUninitializedData = 0x0
1c0000110      uint32_t addressOfEntryPoint = 0x6010
1c0000114      uint32_t baseOfCode = 0x1000
1c0000118      uint64_t imageBase = 0x1c0000000
1c0000120      uint32_t sectionAlignment = 0x1000
1c0000124      uint32_t fileAlignment = 0x200
1c0000128      uint16_t majorOperatingSystemVersion = 0xa
1c000012a      uint16_t minorOperatingSystemVersion = 0x0
1c000012c      uint16_t majorImageVersion = 0xa
1c000012e      uint16_t minorImageVersion = 0x0
1c0000130      uint16_t majorSubsystemVersion = 0xa
1c0000132      uint16_t minorSubsystemVersion = 0x0
1c0000134      uint32_t win32VersionValue = 0x0
1c0000138      uint32_t sizeOfImage = 0xa000
1c000013c      uint32_t sizeOfHeaders = 0x400
1c0000140      uint32_t checkSum = 0x8685
1c0000144      enum pe_subsystem subsystem = IMAGE_SUBSYSTEM_NATIVE
1c0000146      enum pe_dll_characteristics dllCharacteristics = IMAGE_DLLCHARACTERISTICS_HIGH_ENTROPY_VA | IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE | IMAGE_DLLCHARACTERISTICS_NX_COMPAT | IMAGE_DLLCHARACTERISTICS_GUARD_CF
1c0000148      uint64_t sizeOfStackReserve = 0x40000
1c0000150      uint64_t sizeOfStackCommit = 0x1000
1c0000158      uint64_t sizeOfHeapReserve = 0x100000
1c0000160      uint64_t sizeOfHeapCommit = 0x1000
1c0000168      uint32_t loaderFlags = 0x0
1c000016c      uint32_t numberOfRvaAndSizes = 0x10
1c0000170      struct PE_Data_Directory_Entry exportTableEntry = 
1c0000170      {
1c0000170          uint32_t virtualAddress = 0x0
1c0000174          uint32_t size = 0x0
1c0000178      }
1c0000178      struct PE_Data_Directory_Entry importTableEntry = 
1c0000178      {
1c0000178          uint32_t virtualAddress = 0x50e0
1c000017c          uint32_t size = 0x28
1c0000180      }
1c0000180      struct PE_Data_Directory_Entry resourceTableEntry = 
1c0000180      {
1c0000180          uint32_t virtualAddress = 0x8000
1c0000184          uint32_t size = 0x3e0
1c0000188      }
1c0000188      struct PE_Data_Directory_Entry exceptionTableEntry = 
1c0000188      {
1c0000188          uint32_t virtualAddress = 0x4000
1c000018c          uint32_t size = 0x150
1c0000190      }
1c0000190      struct PE_Data_Directory_Entry certificateTableEntry = 
1c0000190      {
1c0000190          uint32_t virtualAddress = 0x0
1c0000194          uint32_t size = 0x0
1c0000198      }
1c0000198      struct PE_Data_Directory_Entry baseRelocationTableEntry = 
1c0000198      {
1c0000198          uint32_t virtualAddress = 0x9000
1c000019c          uint32_t size = 0x1c
1c00001a0      }
1c00001a0      struct PE_Data_Directory_Entry debugEntry = 
1c00001a0      {
1c00001a0          uint32_t virtualAddress = 0x2140
1c00001a4          uint32_t size = 0x54
1c00001a8      }
1c00001a8      struct PE_Data_Directory_Entry architectureEntry = 
1c00001a8      {
1c00001a8          uint32_t virtualAddress = 0x0
1c00001ac          uint32_t size = 0x0
1c00001b0      }
1c00001b0      struct PE_Data_Directory_Entry globalPtrEntry = 
1c00001b0      {
1c00001b0          uint32_t virtualAddress = 0x0
1c00001b4          uint32_t size = 0x0
1c00001b8      }
1c00001b8      struct PE_Data_Directory_Entry tlsTableEntry = 
1c00001b8      {
1c00001b8          uint32_t virtualAddress = 0x0
1c00001bc          uint32_t size = 0x0
1c00001c0      }
1c00001c0      struct PE_Data_Directory_Entry loadConfigTableEntry = 
1c00001c0      {
1c00001c0          uint32_t virtualAddress = 0x2000
1c00001c4          uint32_t size = 0x118
1c00001c8      }
1c00001c8      struct PE_Data_Directory_Entry boundImportEntry = 
1c00001c8      {
1c00001c8          uint32_t virtualAddress = 0x0
1c00001cc          uint32_t size = 0x0
1c00001d0      }
1c00001d0      struct PE_Data_Directory_Entry iatEntry = 
1c00001d0      {
1c00001d0          uint32_t virtualAddress = 0x5000
1c00001d4          uint32_t size = 0xd0
1c00001d8      }
1c00001d8      struct PE_Data_Directory_Entry delayImportDescriptorEntry = 
1c00001d8      {
1c00001d8          uint32_t virtualAddress = 0x0
1c00001dc          uint32_t size = 0x0
1c00001e0      }
1c00001e0      struct PE_Data_Directory_Entry clrRuntimeHeaderEntry = 
1c00001e0      {
1c00001e0          uint32_t virtualAddress = 0x0
1c00001e4          uint32_t size = 0x0
1c00001e8      }
1c00001e8      struct PE_Data_Directory_Entry reservedEntry = 
1c00001e8      {
1c00001e8          uint32_t virtualAddress = 0x0
1c00001ec          uint32_t size = 0x0
1c00001f0      }
1c00001f0  }
1c00001f0  struct Section_Header __section_headers[0x9] = 
1c00001f0  {
1c00001f0      [0x0] = 
1c00001f0      {
1c00001f0          char name[0x8] = ".text\x00\x00", 0
1c00001f8          uint32_t virtualSize = 0x965
1c00001fc          uint32_t virtualAddress = 0x1000
1c0000200          uint32_t sizeOfRawData = 0xa00
1c0000204          uint32_t pointerToRawData = 0x400
1c0000208          uint32_t pointerToRelocations = 0x0
1c000020c          uint32_t pointerToLineNumbers = 0x0
1c0000210          uint16_t numberOfRelocations = 0x0
1c0000212          uint16_t numberOfLineNumbers = 0x0
1c0000214          enum pe_section_flags characteristics = IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ
1c0000218      }
1c0000218      [0x1] = 
1c0000218      {
1c0000218          char name[0x8] = ".rdata\x00", 0
1c0000220          uint32_t virtualSize = 0x4d8
1c0000224          uint32_t virtualAddress = 0x2000
1c0000228          uint32_t sizeOfRawData = 0x600
1c000022c          uint32_t pointerToRawData = 0xe00
1c0000230          uint32_t pointerToRelocations = 0x0
1c0000234          uint32_t pointerToLineNumbers = 0x0
1c0000238          uint16_t numberOfRelocations = 0x0
1c000023a          uint16_t numberOfLineNumbers = 0x0
1c000023c          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ
1c0000240      }
1c0000240      [0x2] = 
1c0000240      {
1c0000240          char name[0x8] = ".data\x00\x00", 0
1c0000248          uint32_t virtualSize = 0x90
1c000024c          uint32_t virtualAddress = 0x3000
1c0000250          uint32_t sizeOfRawData = 0x200
1c0000254          uint32_t pointerToRawData = 0x1400
1c0000258          uint32_t pointerToRelocations = 0x0
1c000025c          uint32_t pointerToLineNumbers = 0x0
1c0000260          uint16_t numberOfRelocations = 0x0
1c0000262          uint16_t numberOfLineNumbers = 0x0
1c0000264          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
1c0000268      }
1c0000268      [0x3] = 
1c0000268      {
1c0000268          char name[0x8] = ".pdata\x00", 0
1c0000270          uint32_t virtualSize = 0x150
1c0000274          uint32_t virtualAddress = 0x4000
1c0000278          uint32_t sizeOfRawData = 0x200
1c000027c          uint32_t pointerToRawData = 0x1600
1c0000280          uint32_t pointerToRelocations = 0x0
1c0000284          uint32_t pointerToLineNumbers = 0x0
1c0000288          uint16_t numberOfRelocations = 0x0
1c000028a          uint16_t numberOfLineNumbers = 0x0
1c000028c          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ
1c0000290      }
1c0000290      [0x4] = 
1c0000290      {
1c0000290          char name[0x8] = ".idata\x00", 0
1c0000298          uint32_t virtualSize = 0x410
1c000029c          uint32_t virtualAddress = 0x5000
1c00002a0          uint32_t sizeOfRawData = 0x600
1c00002a4          uint32_t pointerToRawData = 0x1800
1c00002a8          uint32_t pointerToRelocations = 0x0
1c00002ac          uint32_t pointerToLineNumbers = 0x0
1c00002b0          uint16_t numberOfRelocations = 0x0
1c00002b2          uint16_t numberOfLineNumbers = 0x0
1c00002b4          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ
1c00002b8      }
1c00002b8      [0x5] = 
1c00002b8      {
1c00002b8          char name[0x8] = "INIT\x00\x00\x00", 0
1c00002c0          uint32_t virtualSize = 0x72
1c00002c4          uint32_t virtualAddress = 0x6000
1c00002c8          uint32_t sizeOfRawData = 0x200
1c00002cc          uint32_t pointerToRawData = 0x1e00
1c00002d0          uint32_t pointerToRelocations = 0x0
1c00002d4          uint32_t pointerToLineNumbers = 0x0
1c00002d8          uint16_t numberOfRelocations = 0x0
1c00002da          uint16_t numberOfLineNumbers = 0x0
1c00002dc          enum pe_section_flags characteristics = IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_DISCARDABLE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ
1c00002e0      }
1c00002e0      [0x6] = 
1c00002e0      {
1c00002e0          char name[0x8] = "GFIDS\x00\x00", 0
1c00002e8          uint32_t virtualSize = 0x40
1c00002ec          uint32_t virtualAddress = 0x7000
1c00002f0          uint32_t sizeOfRawData = 0x200
1c00002f4          uint32_t pointerToRawData = 0x2000
1c00002f8          uint32_t pointerToRelocations = 0x0
1c00002fc          uint32_t pointerToLineNumbers = 0x0
1c0000300          uint16_t numberOfRelocations = 0x0
1c0000302          uint16_t numberOfLineNumbers = 0x0
1c0000304          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_DISCARDABLE | IMAGE_SCN_MEM_READ
1c0000308      }
1c0000308      [0x7] = 
1c0000308      {
1c0000308          char name[0x8] = ".rsrc\x00\x00", 0
1c0000310          uint32_t virtualSize = 0x3e0
1c0000314          uint32_t virtualAddress = 0x8000
1c0000318          uint32_t sizeOfRawData = 0x400
1c000031c          uint32_t pointerToRawData = 0x2200
1c0000320          uint32_t pointerToRelocations = 0x0
1c0000324          uint32_t pointerToLineNumbers = 0x0
1c0000328          uint16_t numberOfRelocations = 0x0
1c000032a          uint16_t numberOfLineNumbers = 0x0
1c000032c          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_DISCARDABLE | IMAGE_SCN_MEM_READ
1c0000330      }
1c0000330      [0x8] = 
1c0000330      {
1c0000330          char name[0x8] = ".reloc\x00", 0
1c0000338          uint32_t virtualSize = 0x108
1c000033c          uint32_t virtualAddress = 0x9000
1c0000340          uint32_t sizeOfRawData = 0x200
1c0000344          uint32_t pointerToRawData = 0x2600
1c0000348          uint32_t pointerToRelocations = 0x0
1c000034c          uint32_t pointerToLineNumbers = 0x0
1c0000350          uint16_t numberOfRelocations = 0x0
1c0000352          uint16_t numberOfLineNumbers = 0x0
1c0000354          enum pe_section_flags characteristics = IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_DISCARDABLE | IMAGE_SCN_MEM_READ
1c0000358      }
1c0000358  }

1c0000358                                                                          00 00 00 00 00 00 00 00                          ........
1c0000360  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................................
1c0000380  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................................
1c00003a0  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................................
1c00003c0  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................................
1c00003e0  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................................

.text section started  {0x1c0001000-0x1c0001965}
1c0001000  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c0001010    int64_t* BeepRedirectCsqRemoveIrp(int64_t arg1, void* arg2)

1c0001010  4881c2a8000000     add     rdx, 0xa8
1c0001017  488b0a             mov     rcx, qword [rdx]
1c000101a  48395108           cmp     qword [rcx+0x8], rdx
1c000101e  7512               jne     0x1c0001032

1c0001020  488b4208           mov     rax, qword [rdx+0x8]
1c0001024  483910             cmp     qword [rax], rdx
1c0001027  7509               jne     0x1c0001032

1c0001029  488908             mov     qword [rax], rcx
1c000102c  48894108           mov     qword [rcx+0x8], rax
1c0001030  c3                 retn     {__return_addr}

1c0001031                                                     cc                                                             .

1c0001032  b903000000         mov     ecx, 0x3
1c0001037  cd29               int     0x29
{ Does not return }

1c0001039                                                                             cc cc cc cc cc cc cc                           .......

1c0001040    int64_t BeepRedirectCsqCompleteCanceledIrp(int64_t arg1, IRP* arg2)

1c0001040  4883ec28           sub     rsp, 0x28
1c0001044  488bca             mov     rcx, rdx
1c0001047  c74230200100c0     mov     dword [rdx+0x30], 0xc0000120  {0xc0000120}
1c000104e  48c7423800000000   mov     qword [rdx+0x38], 0x0
1c0001056  33d2               xor     edx, edx  {0x0}
1c0001058  48ff1531400000     call    qword [rel IofCompleteRequest]
1c000105f  0f1f440000         nop     dword [rax+rax]
1c0001064  4883c428           add     rsp, 0x28
1c0001068  c3                 retn     {__return_addr}

1c0001069                             cc cc cc cc cc cc cc                                                           .......

1c0001070    int64_t BeepCleanup(void* arg1, IRP* arg2)

1c0001070  48895c2420         mov     qword [rsp+0x20 {__saved_rbx}], rbx
1c0001075  56                 push    rsi {__saved_rsi}
1c0001076  57                 push    rdi {__saved_rdi}
1c0001077  4157               push    r15 {__saved_r15}
1c0001079  4883ec20           sub     rsp, 0x20
1c000107d  488bf9             mov     rdi, rcx
1c0001080  c644244000         mov     byte [rsp+0x40 {Irql}], 0x0
1c0001085  b102               mov     cl, 0x2
1c0001087  488bda             mov     rbx, rdx
1c000108a  48ff15f73f0000     call    qword [rel KfRaiseIrql]
1c0001091  0f1f440000         nop     dword [rax+rax]
1c0001096  488d4c2440         lea     rcx, [rsp+0x40 {Irql}]
1c000109b  0fb6f0             movzx   esi, al
1c000109e  48ff15d33f0000     call    qword [rel IoAcquireCancelSpinLock]
1c00010a5  0f1f440000         nop     dword [rax+rax]
1c00010aa  488b5720           mov     rdx, qword [rdi+0x20]
1c00010ae  4533ff             xor     r15d, r15d  {0x0}
1c00010b1  4c897f20           mov     qword [rdi+0x20], r15  {0x0}
1c00010b5  4885d2             test    rdx, rdx
1c00010b8  0f8548050000       jne     0x1c0001606

1c00010be  0fb64c2440         movzx   ecx, byte [rsp+0x40 {Irql}]
1c00010c3  48ff15ce3f0000     call    qword [rel IoReleaseCancelSpinLock]
1c00010ca  0f1f440000         nop     dword [rax+rax]
1c00010cf  400fb6ce           movzx   ecx, sil
1c00010d3  48ff15763f0000     call    qword [rel KeLowerIrql]
1c00010da  0f1f440000         nop     dword [rax+rax]
1c00010df  4533c9             xor     r9d, r9d  {0x0}
1c00010e2  4533c0             xor     r8d, r8d  {0x0}
1c00010e5  488bd3             mov     rdx, rbx
1c00010e8  488bcf             mov     rcx, rdi
1c00010eb  e830000000         call    BeepRedirectMakeBeep
1c00010f0  33d2               xor     edx, edx  {0x0}
1c00010f2  44897b30           mov     dword [rbx+0x30], r15d  {0x0}
1c00010f6  488bcb             mov     rcx, rbx
1c00010f9  4c897b38           mov     qword [rbx+0x38], r15  {0x0}
1c00010fd  48ff158c3f0000     call    qword [rel IofCompleteRequest]
1c0001104  0f1f440000         nop     dword [rax+rax]
1c0001109  488b5c2458         mov     rbx, qword [rsp+0x58 {__saved_rbx}]
1c000110e  33c0               xor     eax, eax  {0x0}
1c0001110  4883c420           add     rsp, 0x20
1c0001114  415f               pop     r15 {__saved_r15}
1c0001116  5f                 pop     rdi {__saved_rdi}
1c0001117  5e                 pop     rsi {__saved_rsi}
1c0001118  c3                 retn     {__return_addr}

1c0001119                                                                             cc cc cc cc cc cc cc                           .......

1c0001120    NTSTATUS BeepRedirectMakeBeep(void* arg1, IRP* arg2, int32_t arg3, int32_t arg4)

1c0001120  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c0001125  48896c2410         mov     qword [rsp+0x10 {__saved_rbp}], rbp
1c000112a  4889742418         mov     qword [rsp+0x18 {__saved_rsi}], rsi
1c000112f  57                 push    rdi {__saved_rdi}
1c0001130  4883ec30           sub     rsp, 0x30
1c0001134  488bc2             mov     rax, rdx
1c0001137  c744242000000000   mov     dword [rsp+0x20 {sessionId[0]}], 0x0
1c000113f  488bf9             mov     rdi, rcx
1c0001142  488d542420         lea     rdx, [rsp+0x20 {sessionId}]
1c0001147  488bc8             mov     rcx, rax
1c000114a  418bf1             mov     esi, r9d
1c000114d  418be8             mov     ebp, r8d
1c0001150  48ff15493f0000     call    qword [rel IoGetRequestorSessionId]
1c0001157  0f1f440000         nop     dword [rax+rax]
1c000115c  8bd8               mov     ebx, eax
1c000115e  85c0               test    eax, eax
1c0001160  7828               js      0x1c000118a

1c0001162  488b4f40           mov     rcx, qword [rdi+0x40]
1c0001166  8b542420           mov     edx, dword [rsp+0x20 {sessionId[0]}]
1c000116a  4883c160           add     rcx, 0x60
1c000116e  48ff15433f0000     call    qword [rel IoCsqRemoveNextIrp]
1c0001175  0f1f440000         nop     dword [rax+rax]
1c000117a  4885c0             test    rax, rax
1c000117d  0f8505050000       jne     0x1c0001688

1c0001183  bb250200c0         mov     ebx, 0xc0000225

1c0001188  8bc3               mov     eax, ebx

1c000118a  488b5c2440         mov     rbx, qword [rsp+0x40 {__saved_rbx}]
1c000118f  488b6c2448         mov     rbp, qword [rsp+0x48 {__saved_rbp}]
1c0001194  488b742450         mov     rsi, qword [rsp+0x50 {__saved_rsi}]
1c0001199  4883c430           add     rsp, 0x30
1c000119d  5f                 pop     rdi {__saved_rdi}
1c000119e  c3                 retn     {__return_addr}

1c000119f                                                                                               cc                                 .
1c00011a0  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c00011b0    int64_t BeepClose(void* arg1, IRP* arg2)

1c00011b0  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c00011b5  57                 push    rdi {__saved_rdi}
1c00011b6  4883ec20           sub     rsp, 0x20
1c00011ba  488b5940           mov     rbx, qword [rcx+0x40]
1c00011be  488bfa             mov     rdi, rdx
1c00011c1  488bcb             mov     rcx, rbx
1c00011c4  48ff15953e0000     call    qword [rel ExAcquireFastMutex]
1c00011cb  0f1f440000         nop     dword [rax+rax]
1c00011d0  834338ff           add     dword [rbx+0x38], 0xffffffff
1c00011d4  7510               jne     0x1c00011e6

1c00011d6  488b4b40           mov     rcx, qword [rbx+0x40]
1c00011da  48ff152f3e0000     call    qword [rel MmUnlockPagableImageSection]
1c00011e1  0f1f440000         nop     dword [rax+rax]

1c00011e6  488bcb             mov     rcx, rbx
1c00011e9  48ff15303e0000     call    qword [rel ExReleaseFastMutex]
1c00011f0  0f1f440000         nop     dword [rax+rax]
1c00011f5  33c0               xor     eax, eax  {0x0}
1c00011f7  33d2               xor     edx, edx  {0x0}
1c00011f9  488bcf             mov     rcx, rdi
1c00011fc  894730             mov     dword [rdi+0x30], eax  {0x0}
1c00011ff  48894738           mov     qword [rdi+0x38], rax  {0x0}
1c0001203  48ff15863e0000     call    qword [rel IofCompleteRequest]
1c000120a  0f1f440000         nop     dword [rax+rax]
1c000120f  488b5c2430         mov     rbx, qword [rsp+0x30 {__saved_rbx}]
1c0001214  33c0               xor     eax, eax  {0x0}
1c0001216  4883c420           add     rsp, 0x20
1c000121a  5f                 pop     rdi {__saved_rdi}
1c000121b  c3                 retn     {__return_addr}

1c000121c                                                                                      cc cc cc cc                              ....
1c0001220  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c0001230    void* BeepRedirectCsqPeekNextIrp(void* arg1, void* arg2, int32_t arg3)

1c0001230  48895c2418         mov     qword [rsp+0x18 {__saved_rbx}], rbx
1c0001235  4889742420         mov     qword [rsp+0x20 {__saved_rsi}], rsi
1c000123a  57                 push    rdi {__saved_rdi}
1c000123b  4883ec20           sub     rsp, 0x20
1c000123f  c744243000000000   mov     dword [rsp+0x30 {sessionId}], 0x0
1c0001247  498bf0             mov     rsi, r8
1c000124a  488d59f0           lea     rbx, [rcx-0x10]
1c000124e  4885d2             test    rdx, rdx
1c0001251  751f               jne     0x1c0001272

1c0001253  488b3b             mov     rdi, qword [rbx]

1c0001256  483bfb             cmp     rdi, rbx
1c0001259  0f8559040000       jne     0x1c00016b8

1c000125f  33c0               xor     eax, eax  {0x0}

1c0001261  488b5c2440         mov     rbx, qword [rsp+0x40 {__saved_rbx}]
1c0001266  488b742448         mov     rsi, qword [rsp+0x48 {__saved_rsi}]
1c000126b  4883c420           add     rsp, 0x20
1c000126f  5f                 pop     rdi {__saved_rdi}
1c0001270  c3                 retn     {__return_addr}

1c0001271                                                     cc                                                             .

1c0001272  488bbaa8000000     mov     rdi, qword [rdx+0xa8]
1c0001279  ebdb               jmp     0x1c0001256

1c000127b                                                                                   cc cc cc cc cc                             .....
1c0001280  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c0001290    uint64_t BeepDeviceControl(DEVICE_OBJECT* arg1, IRP* arg2)

1c0001290  4053               push    rbx {__saved_rbx}
1c0001292  4883ec20           sub     rsp, 0x20
1c0001296  4c8b82b8000000     mov     r8, qword [rdx+0xb8]
1c000129d  4c8bd2             mov     r10, rdx
1c00012a0  418b4018           mov     eax, dword [r8+0x18]
1c00012a4  2d00000100         sub     eax, 0x10000
1c00012a9  0f8463040000       je      0x1c0001712

1c00012af  83f804             cmp     eax, 0x4
1c00012b2  0f854a040000       jne     0x1c0001702

1c00012b8  33c0               xor     eax, eax  {0x0}
1c00012ba  4183780808         cmp     dword [r8+0x8], 0x8
1c00012bf  0f8246040000       jb      0x1c000170b

1c00012c5  c7423003010000     mov     dword [rdx+0x30], 0x103
1c00012cc  48894238           mov     qword [rdx+0x38], rax  {0x0}
1c00012d0  4180480301         or      byte [r8+0x3], 0x1
1c00012d5  4533c0             xor     r8d, r8d  {0x0}
1c00012d8  488b4940           mov     rcx, qword [rcx+0x40]
1c00012dc  4883c160           add     rcx, 0x60
1c00012e0  48ff15d93d0000     call    qword [rel IoCsqInsertIrp]
1c00012e7  0f1f440000         nop     dword [rax+rax]

1c00012ec  b803010000         mov     eax, 0x103

1c00012f1  4883c420           add     rsp, 0x20
1c00012f5  5b                 pop     rbx {__saved_rbx}
1c00012f6  c3                 retn     {__return_addr}

1c00012f7                                                                       cc cc cc cc cc cc cc cc cc                         .........

1c0001300    int64_t BeepRedirectCsqInsertIrp(void* arg1, void* arg2)

1c0001300  4883c1f0           add     rcx, 0xfffffffffffffff0
1c0001304  488d82a8000000     lea     rax, [rdx+0xa8]
1c000130b  488b5108           mov     rdx, qword [rcx+0x8]
1c000130f  48390a             cmp     qword [rdx], rcx
1c0001312  0f8562040000       jne     0x1c000177a

1c0001318  488908             mov     qword [rax], rcx
1c000131b  48895008           mov     qword [rax+0x8], rdx
1c000131f  488902             mov     qword [rdx], rax
1c0001322  48894108           mov     qword [rcx+0x8], rax
1c0001326  33c0               xor     eax, eax  {0x0}
1c0001328  c3                 retn     {__return_addr}

1c0001329                             cc cc cc cc cc cc cc                                                           .......

1c0001330    int64_t BeepRedirectCsqAcquireLock(int64_t arg1, char* arg2)

1c0001330  4053               push    rbx {__saved_rbx}
1c0001332  4883ec20           sub     rsp, 0x20
1c0001336  4883c1e8           add     rcx, 0xffffffffffffffe8
1c000133a  488bda             mov     rbx, rdx
1c000133d  48ff15643d0000     call    qword [rel KeAcquireSpinLockRaiseToDpc]
1c0001344  0f1f440000         nop     dword [rax+rax]
1c0001349  8803               mov     byte [rbx], al
1c000134b  4883c420           add     rsp, 0x20
1c000134f  5b                 pop     rbx {__saved_rbx}
1c0001350  c3                 retn     {__return_addr}

1c0001351                                                     cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                   ...............

1c0001360    NTSTATUS DriverEntry(DRIVER_OBJECT* arg1)

1c0001360  48895c2410         mov     qword [rsp+0x10 {__saved_rbx}], rbx
1c0001365  56                 push    rsi {__saved_rsi}
1c0001366  4883ec50           sub     rsp, 0x50
1c000136a  488bd9             mov     rbx, rcx
1c000136d  488d15ac0d0000     lea     rdx, [rel `string'::\\Device\\Beep]  {u"\Device\Beep"}
1c0001374  0f57c0             xorps   xmm0, xmm0
1c0001377  488d4c2440         lea     rcx, [rsp+0x40 {var_18}]
1c000137c  33f6               xor     esi, esi  {0x0}
1c000137e  0f11442440         movups  xmmword [rsp+0x40 {var_18.Length} {var_18.MaximumLength} {var_18.Buffer}], xmm0
1c0001383  4889742470         mov     qword [rsp+0x70 {DeviceObject}], rsi  {0x0}
1c0001388  48ff15a13c0000     call    qword [rel RtlInitUnicodeString]
1c000138f  0f1f440000         nop     dword [rax+rax]
1c0001394  488d442470         lea     rax, [rsp+0x70 {DeviceObject}]
1c0001399  baa0000000         mov     edx, 0xa0
1c000139e  4889442430         mov     qword [rsp+0x30 {var_28}], rax {DeviceObject}
1c00013a3  448d4e01           lea     r9d, [rsi+0x1]
1c00013a7  4088742428         mov     byte [rsp+0x28 {var_30}], sil  {0x0}
1c00013ac  4c8d442440         lea     r8, [rsp+0x40 {var_18}]
1c00013b1  488bcb             mov     rcx, rbx
1c00013b4  c744242000010000   mov     dword [rsp+0x20 {var_38}], 0x100
1c00013bc  48ff15ad3c0000     call    qword [rel IoCreateDevice]
1c00013c3  0f1f440000         nop     dword [rax+rax]
1c00013c8  85c0               test    eax, eax
1c00013ca  0f850d010000       jne     0x1c00014dd

1c00013d0  488b442470         mov     rax, qword [rsp+0x70 {DeviceObject}]
1c00013d5  8d5601             lea     edx, [rsi+0x1]
1c00013d8  48897c2460         mov     qword [rsp+0x60 {__saved_rdi}], rdi
1c00013dd  4533c0             xor     r8d, r8d  {0x0}
1c00013e0  83483004           or      dword [rax+0x30], 0x4
1c00013e4  488b442470         mov     rax, qword [rsp+0x70 {DeviceObject}]
1c00013e9  488b7840           mov     rdi, qword [rax+0x40]
1c00013ed  488d4f18           lea     rcx, [rdi+0x18]
1c00013f1  c70701000000       mov     dword [rdi], 0x1
1c00013f7  48897708           mov     qword [rdi+0x8], rsi  {0x0}
1c00013fb  897710             mov     dword [rdi+0x10], esi  {0x0}
1c00013fe  48ff157b3c0000     call    qword [rel KeInitializeEvent]
1c0001405  0f1f440000         nop     dword [rax+rax]
1c000140a  488d4750           lea     rax, [rdi+0x50]
1c000140e  897738             mov     dword [rdi+0x38], esi  {0x0}
1c0001411  488d4f48           lea     rcx, [rdi+0x48]
1c0001415  48894008           mov     qword [rax+0x8], rax
1c0001419  488900             mov     qword [rax], rax
1c000141c  48ff15153c0000     call    qword [rel KeInitializeSpinLock]
1c0001423  0f1f440000         nop     dword [rax+rax]
1c0001428  488d0511fcffff     lea     rax, [rel BeepRedirectCsqCompleteCanceledIrp]
1c000142f  4889442430         mov     qword [rsp+0x30], rax  {BeepRedirectCsqCompleteCanceledIrp}
1c0001434  488d4f60           lea     rcx, [rdi+0x60]
1c0001438  488d05b1000000     lea     rax, [rel BeepRedirectCsqReleaseLock]
1c000143f  4889442428         mov     qword [rsp+0x28 {var_30}], rax  {BeepRedirectCsqReleaseLock}
1c0001444  4c8d0de5fdffff     lea     r9, [rel BeepRedirectCsqPeekNextIrp]
1c000144b  488d05defeffff     lea     rax, [rel BeepRedirectCsqAcquireLock]
1c0001452  4c8d05b7fbffff     lea     r8, [rel BeepRedirectCsqRemoveIrp]
1c0001459  4889442420         mov     qword [rsp+0x20 {var_38}], rax  {BeepRedirectCsqAcquireLock}
1c000145e  488d159bfeffff     lea     rdx, [rel BeepRedirectCsqInsertIrp]
1c0001465  48ff15ec3b0000     call    qword [rel IoCsqInitialize]
1c000146c  0f1f440000         nop     dword [rax+rax]
1c0001471  488b7c2460         mov     rdi, qword [rsp+0x60 {__saved_rdi}]
1c0001476  85c0               test    eax, eax
1c0001478  7563               jne     0x1c00014dd

1c000147a  488b4c2470         mov     rcx, qword [rsp+0x70 {DeviceObject}]
1c000147f  488d058a030000     lea     rax, [rel BeepStartIo]
1c0001486  48894360           mov     qword [rbx+0x60], rax  {BeepStartIo}
1c000148a  4533c0             xor     r8d, r8d  {0x0}
1c000148d  488d054c040000     lea     rax, [rel BeepUnload]
1c0001494  b201               mov     dl, 0x1
1c0001496  48894368           mov     qword [rbx+0x68], rax  {BeepUnload}
1c000149a  488d056f000000     lea     rax, [rel BeepOpen]
1c00014a1  48894370           mov     qword [rbx+0x70], rax  {BeepOpen}
1c00014a5  488d0504fdffff     lea     rax, [rel BeepClose]
1c00014ac  48898380000000     mov     qword [rbx+0x80], rax  {BeepClose}
1c00014b3  488d05d6fdffff     lea     rax, [rel BeepDeviceControl]
1c00014ba  488983e0000000     mov     qword [rbx+0xe0], rax  {BeepDeviceControl}
1c00014c1  488d05a8fbffff     lea     rax, [rel BeepCleanup]
1c00014c8  48898300010000     mov     qword [rbx+0x100], rax  {BeepCleanup}
1c00014cf  48ff15523b0000     call    qword [rel IoSetStartIoAttributes]
1c00014d6  0f1f440000         nop     dword [rax+rax]
1c00014db  33c0               xor     eax, eax  {0x0}

1c00014dd  488b5c2468         mov     rbx, qword [rsp+0x68 {__saved_rbx}]
1c00014e2  4883c450           add     rsp, 0x50
1c00014e6  5e                 pop     rsi {__saved_rsi}
1c00014e7  c3                 retn     {__return_addr}

1c00014e8                          cc cc cc cc cc cc cc cc                                                          ........

1c00014f0    int64_t BeepRedirectCsqReleaseLock(int64_t arg1, uint64_t arg2)

1c00014f0  4883ec28           sub     rsp, 0x28
1c00014f4  4883c1e8           add     rcx, 0xffffffffffffffe8
1c00014f8  48ff15b13b0000     call    qword [rel KeReleaseSpinLock]
1c00014ff  0f1f440000         nop     dword [rax+rax]
1c0001504  4883c428           add     rsp, 0x28
1c0001508  c3                 retn     {__return_addr}

1c0001509                             cc cc cc cc cc cc cc                                                           .......

1c0001510    int64_t BeepOpen(void* arg1, IRP* arg2)

1c0001510  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c0001515  57                 push    rdi {__saved_rdi}
1c0001516  4883ec20           sub     rsp, 0x20
1c000151a  488b5940           mov     rbx, qword [rcx+0x40]
1c000151e  488bfa             mov     rdi, rdx
1c0001521  488bcb             mov     rcx, rbx
1c0001524  48ff15353b0000     call    qword [rel ExAcquireFastMutex]
1c000152b  0f1f440000         nop     dword [rax+rax]
1c0001530  ff4338             inc     dword [rbx+0x38]
1c0001533  837b3801           cmp     dword [rbx+0x38], 0x1
1c0001537  7517               jne     0x1c0001550

1c0001539  488d0dd0ffffff     lea     rcx, [rel BeepOpen]
1c0001540  48ff15d13a0000     call    qword [rel MmLockPagableDataSection]
1c0001547  0f1f440000         nop     dword [rax+rax]
1c000154c  48894340           mov     qword [rbx+0x40], rax

1c0001550  488bcb             mov     rcx, rbx
1c0001553  48ff15c63a0000     call    qword [rel ExReleaseFastMutex]
1c000155a  0f1f440000         nop     dword [rax+rax]
1c000155f  33c0               xor     eax, eax  {0x0}
1c0001561  33d2               xor     edx, edx  {0x0}
1c0001563  488bcf             mov     rcx, rdi
1c0001566  894730             mov     dword [rdi+0x30], eax  {0x0}
1c0001569  48894738           mov     qword [rdi+0x38], rax  {0x0}
1c000156d  48ff151c3b0000     call    qword [rel IofCompleteRequest]
1c0001574  0f1f440000         nop     dword [rax+rax]
1c0001579  488b5c2430         mov     rbx, qword [rsp+0x30 {__saved_rbx}]
1c000157e  33c0               xor     eax, eax  {0x0}
1c0001580  4883c420           add     rsp, 0x20
1c0001584  5f                 pop     rdi {__saved_rdi}
1c0001585  c3                 retn     {__return_addr}

1c0001586                    cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc 66 66 0f 1f 84 00 00 00 00 00        ................ff........

1c00015a0    int64_t __security_check_cookie(int64_t arg1)

1c00015a0  483b0d591a0000     cmp     rcx, qword [rel __security_cookie]
1c00015a7  7510               jne     0x1c00015b9

1c00015a9  48c1c110           rol     rcx, 0x10
1c00015ad  66f7c1ffff         test    cx, 0xffff
1c00015b2  7501               jne     0x1c00015b5

1c00015b4  c3                 retn     {__return_addr}

1c00015b5  48c1c910           ror     rcx, 0x10

1c00015b9  e912000000         jmp     __report_gsfailure
{ Does not return }

1c00015be                                                                                            cc cc                                ..
1c00015c0  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c00015d0    void __report_gsfailure() __noreturn

1c00015d0  b902000000         mov     ecx, 0x2
1c00015d5  cd29               int     0x29
{ Does not return }

1c00015d7                                                                       cc cc cc cc cc cc cc cc cc                         .........

1c00015e0    void _guard_check_icall_nop(void (* arg1)()) __pure

1c00015e0  c20000             retn    0x0 {__return_addr}

1c00015e3           cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc 66 66 0f 1f 84 00 00 00 00 00     ...................ff........

1c0001600    void _guard_dispatch_icall_nop(void (* arg1)())

1c0001600  ffe0               jmp     rax

1c0001602        cc cc cc cc                                                                                  ....

{ Continuation of function BeepCleanup }

1c0001606  4c89742450         mov     qword [rsp+0x50 {__saved_r14}], r14
1c000160b  48896c2448         mov     qword [rsp+0x48 {__saved_rbp}], rbp

1c0001610  488d8fa0000000     lea     rcx, [rdi+0xa0]
1c0001617  48ff15ea390000     call    qword [rel KeRemoveDeviceQueue]
1c000161e  0f1f440000         nop     dword [rax+rax]
1c0001623  4885c0             test    rax, rax
1c0001626  7450               je      0x1c0001678

1c0001628  488d6888           lea     rbp, [rax-0x78]
1c000162c  4885ed             test    rbp, rbp
1c000162f  7447               je      0x1c0001678

1c0001631  498bc7             mov     rax, r15  {0x0}
1c0001634  48874568           xchg    qword [rbp+0x68], rax  {0x0}
1c0001638  c74530200100c0     mov     dword [rbp+0x30], 0xc0000120  {0xc0000120}
1c000163f  4c897d38           mov     qword [rbp+0x38], r15  {0x0}
1c0001643  0fb64c2440         movzx   ecx, byte [rsp+0x40 {Irql}]
1c0001648  48ff15493a0000     call    qword [rel IoReleaseCancelSpinLock]
1c000164f  0f1f440000         nop     dword [rax+rax]
1c0001654  33d2               xor     edx, edx  {0x0}
1c0001656  488bcd             mov     rcx, rbp
1c0001659  48ff15303a0000     call    qword [rel IofCompleteRequest]
1c0001660  0f1f440000         nop     dword [rax+rax]
1c0001665  488d4c2440         lea     rcx, [rsp+0x40 {Irql}]
1c000166a  48ff15073a0000     call    qword [rel IoAcquireCancelSpinLock]
1c0001671  0f1f440000         nop     dword [rax+rax]
1c0001676  eb98               jmp     0x1c0001610

1c0001678  488b6c2448         mov     rbp, qword [rsp+0x48 {__saved_rbp}]
1c000167d  4c8b742450         mov     r14, qword [rsp+0x50 {__saved_r14}]
1c0001682  e937faffff         jmp     0x1c00010be

1c0001687                       cc                                                                                 .

{ Continuation of function BeepRedirectMakeBeep }

1c0001688  488b4818           mov     rcx, qword [rax+0x18]
1c000168c  33d2               xor     edx, edx  {0x0}
1c000168e  8929               mov     dword [rcx], ebp
1c0001690  897104             mov     dword [rcx+0x4], esi
1c0001693  488bc8             mov     rcx, rax
1c0001696  c7403000000000     mov     dword [rax+0x30], 0x0
1c000169d  48c7403808000000   mov     qword [rax+0x38], 0x8
1c00016a5  48ff15e4390000     call    qword [rel IofCompleteRequest]
1c00016ac  0f1f440000         nop     dword [rax+rax]
1c00016b1  90                 nop     
1c00016b2  e9d1faffff         jmp     0x1c0001188

1c00016b7                                                                       cc                                                 .

{ Continuation of function BeepRedirectCsqPeekNextIrp }

1c00016b8  48896c2438         mov     qword [rsp+0x38 {__saved_rbp}], rbp

1c00016bd  488d542430         lea     rdx, [rsp+0x30 {sessionId}]
1c00016c2  488d8f58ffffff     lea     rcx, [rdi-0xa8]
1c00016c9  48ff15d0390000     call    qword [rel IoGetRequestorSessionId]
1c00016d0  0f1f440000         nop     dword [rax+rax]
1c00016d5  85c0               test    eax, eax
1c00016d7  7817               js      0x1c00016f0

1c00016d9  39742430           cmp     dword [rsp+0x30 {sessionId}], esi
1c00016dd  7411               je      0x1c00016f0

1c00016df  83feff             cmp     esi, 0xffffffff
1c00016e2  740c               je      0x1c00016f0

1c00016e4  488b3f             mov     rdi, qword [rdi]
1c00016e7  483bfb             cmp     rdi, rbx
1c00016ea  75d1               jne     0x1c00016bd

1c00016ec  33c0               xor     eax, eax  {0x0}
1c00016ee  eb07               jmp     0x1c00016f7

1c00016f0  488d8758ffffff     lea     rax, [rdi-0xa8]

1c00016f7  488b6c2438         mov     rbp, qword [rsp+0x38 {__saved_rbp}]
1c00016fc  e960fbffff         jmp     0x1c0001261

1c0001701     cc                                                                                             .

{ Continuation of function BeepDeviceControl }

1c0001702  bb0d0000c0         mov     ebx, 0xc000000d
1c0001707  33c0               xor     eax, eax  {0x0}
1c0001709  eb21               jmp     0x1c000172c

1c000170b  bb0d0000c0         mov     ebx, 0xc000000d
1c0001710  eb1a               jmp     0x1c000172c

1c0001712  4183781008         cmp     dword [r8+0x10], 0x8
1c0001717  72e9               jb      0x1c0001702

1c0001719  488b4218           mov     rax, qword [rdx+0x18]
1c000171d  833800             cmp     dword [rax], 0x0
1c0001720  7429               je      0x1c000174b

1c0001722  83780400           cmp     dword [rax+0x4], 0x0
1c0001726  7523               jne     0x1c000174b

1c0001728  33c0               xor     eax, eax
1c000172a  8bd8               mov     ebx, eax  {0x0}

1c000172c  895a30             mov     dword [rdx+0x30], ebx
1c000172f  498bca             mov     rcx, r10
1c0001732  48894238           mov     qword [rdx+0x38], rax  {0x0}
1c0001736  33d2               xor     edx, edx  {0x0}
1c0001738  48ff1551390000     call    qword [rel IofCompleteRequest]
1c000173f  0f1f440000         nop     dword [rax+rax]
1c0001744  8bc3               mov     eax, ebx
1c0001746  e9a6fbffff         jmp     0x1c00012f1

1c000174b  33c0               xor     eax, eax  {0x0}
1c000174d  c7423003010000     mov     dword [rdx+0x30], 0x103
1c0001754  48894238           mov     qword [rdx+0x38], rax  {0x0}
1c0001758  4c8d0d31000000     lea     r9, [rel BeepCancel]
1c000175f  4180480301         or      byte [r8+0x3], 0x1
1c0001764  4533c0             xor     r8d, r8d  {0x0}
1c0001767  48ff15da380000     call    qword [rel IoStartPacket]
1c000176e  0f1f440000         nop     dword [rax+rax]
1c0001773  90                 nop     
1c0001774  e973fbffff         jmp     0x1c00012ec

1c0001779                                                                             cc                                             .

{ Continuation of function BeepRedirectCsqInsertIrp }

1c000177a  b903000000         mov     ecx, 0x3
1c000177f  cd29               int     0x29
{ Does not return }

1c0001781     cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                   ...............

1c0001790    int64_t BeepCancel(void* arg1, IRP* arg2)

1c0001790  4053               push    rbx {__saved_rbx}
1c0001792  4883ec20           sub     rsp, 0x20
1c0001796  488bda             mov     rbx, rdx
1c0001799  483b5120           cmp     rdx, qword [rcx+0x20]
1c000179d  7512               jne     0x1c00017b1

1c000179f  0fb64a45           movzx   ecx, byte [rdx+0x45]

1c00017a3  48ff15ee380000     call    qword [rel IoReleaseCancelSpinLock]
1c00017aa  0f1f440000         nop     dword [rax+rax]
1c00017af  eb4b               jmp     0x1c00017fc

1c00017b1  4883c278           add     rdx, 0x78
1c00017b5  4881c1a0000000     add     rcx, 0xa0
1c00017bc  48ff15a5380000     call    qword [rel KeRemoveEntryDeviceQueue]
1c00017c3  0f1f440000         nop     dword [rax+rax]
1c00017c8  0fb64b45           movzx   ecx, byte [rbx+0x45]
1c00017cc  84c0               test    al, al
1c00017ce  74d3               je      0x1c00017a3

1c00017d0  48ff15c1380000     call    qword [rel IoReleaseCancelSpinLock]
1c00017d7  0f1f440000         nop     dword [rax+rax]
1c00017dc  33d2               xor     edx, edx  {0x0}
1c00017de  c74330200100c0     mov     dword [rbx+0x30], 0xc0000120  {0xc0000120}
1c00017e5  488bcb             mov     rcx, rbx
1c00017e8  48c7433800000000   mov     qword [rbx+0x38], 0x0
1c00017f0  48ff1599380000     call    qword [rel IofCompleteRequest]
1c00017f7  0f1f440000         nop     dword [rax+rax]

1c00017fc  4883c420           add     rsp, 0x20
1c0001800  5b                 pop     rbx {__saved_rbx}
1c0001801  c3                 retn     {__return_addr}

1c0001802        cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                    ..............

1c0001810    int64_t BeepStartIo(DEVICE_OBJECT* arg1, IRP* arg2)

1c0001810  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c0001815  57                 push    rdi {__saved_rdi}
1c0001816  4883ec20           sub     rsp, 0x20
1c000181a  488bf9             mov     rdi, rcx
1c000181d  c644243800         mov     byte [rsp+0x38 {Irql}], 0x0
1c0001822  488d4c2438         lea     rcx, [rsp+0x38 {Irql}]
1c0001827  488bda             mov     rbx, rdx
1c000182a  48ff1547380000     call    qword [rel IoAcquireCancelSpinLock]
1c0001831  0f1f440000         nop     dword [rax+rax]
1c0001836  4885db             test    rbx, rbx
1c0001839  7513               jne     0x1c000184e

1c000183b  0fb64c2438         movzx   ecx, byte [rsp+0x38 {Irql}]
1c0001840  48ff1551380000     call    qword [rel IoReleaseCancelSpinLock]
1c0001847  0f1f440000         nop     dword [rax+rax]
1c000184c  eb71               jmp     0x1c00018bf

1c000184e  33c0               xor     eax, eax  {0x0}
1c0001850  48874368           xchg    qword [rbx+0x68], rax  {0x0}
1c0001854  0fb64c2438         movzx   ecx, byte [rsp+0x38 {Irql}]
1c0001859  48ff1538380000     call    qword [rel IoReleaseCancelSpinLock]
1c0001860  0f1f440000         nop     dword [rax+rax]
1c0001865  488b83b8000000     mov     rax, qword [rbx+0xb8]
1c000186c  81781800000100     cmp     dword [rax+0x18], 0x10000
1c0001873  7407               je      0x1c000187c

1c0001875  b80d0000c0         mov     eax, 0xc000000d
1c000187a  eb16               jmp     0x1c0001892

1c000187c  488b4318           mov     rax, qword [rbx+0x18]
1c0001880  488bd3             mov     rdx, rbx
1c0001883  488bcf             mov     rcx, rdi
1c0001886  448b4804           mov     r9d, dword [rax+0x4]
1c000188a  448b00             mov     r8d, dword [rax]
1c000188d  e88ef8ffff         call    BeepRedirectMakeBeep

1c0001892  b201               mov     dl, 0x1
1c0001894  894330             mov     dword [rbx+0x30], eax
1c0001897  488bcf             mov     rcx, rdi
1c000189a  48c7433800000000   mov     qword [rbx+0x38], 0x0
1c00018a2  48ff1557370000     call    qword [rel IoStartNextPacket]
1c00018a9  0f1f440000         nop     dword [rax+rax]
1c00018ae  33d2               xor     edx, edx  {0x0}
1c00018b0  488bcb             mov     rcx, rbx
1c00018b3  48ff15d6370000     call    qword [rel IofCompleteRequest]
1c00018ba  0f1f440000         nop     dword [rax+rax]

1c00018bf  488b5c2430         mov     rbx, qword [rsp+0x30 {__saved_rbx}]
1c00018c4  4883c420           add     rsp, 0x20
1c00018c8  5f                 pop     rdi {__saved_rdi}
1c00018c9  c3                 retn     {__return_addr}

1c00018ca                                cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc            ......................

1c00018e0    int64_t BeepUnload(void* arg1)

1c00018e0  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c00018e5  57                 push    rdi {__saved_rdi}
1c00018e6  4883ec20           sub     rsp, 0x20
1c00018ea  488b5908           mov     rbx, qword [rcx+0x8]
1c00018ee  48c7c2ffffffff     mov     rdx, 0xffffffffffffffff
1c00018f5  488b7b40           mov     rdi, qword [rbx+0x40]
1c00018f9  488d4f60           lea     rcx, [rdi+0x60]
1c00018fd  48ff15b4370000     call    qword [rel IoCsqRemoveNextIrp]
1c0001904  0f1f440000         nop     dword [rax+rax]
1c0001909  4885c0             test    rax, rax
1c000190c  743c               je      0x1c000194a

1c000190e  33d2               xor     edx, edx  {0x0}
1c0001910  c74030200100c0     mov     dword [rax+0x30], 0xc0000120  {0xc0000120}
1c0001917  488bc8             mov     rcx, rax
1c000191a  48c7403800000000   mov     qword [rax+0x38], 0x0
1c0001922  48ff1567370000     call    qword [rel IofCompleteRequest]
1c0001929  0f1f440000         nop     dword [rax+rax]
1c000192e  48c7c2ffffffff     mov     rdx, 0xffffffffffffffff
1c0001935  488d4f60           lea     rcx, [rdi+0x60]
1c0001939  48ff1578370000     call    qword [rel IoCsqRemoveNextIrp]
1c0001940  0f1f440000         nop     dword [rax+rax]
1c0001945  4885c0             test    rax, rax
1c0001948  75c4               jne     0x1c000190e

1c000194a  488bcb             mov     rcx, rbx
1c000194d  48ff15ec360000     call    qword [rel IoDeleteDevice]
1c0001954  0f1f440000         nop     dword [rax+rax]
1c0001959  488b5c2430         mov     rbx, qword [rsp+0x30 {__saved_rbx}]
1c000195e  4883c420           add     rsp, 0x20
1c0001962  5f                 pop     rdi {__saved_rdi}
1c0001963  c3                 retn     {__return_addr}

1c0001964              cc                                                                                       .
.text section ended  {0x1c0001000-0x1c0001965}

.rdata section started  {0x1c0002000-0x1c00024d8}
1c0002000  struct Load_Configuration_Directory_Table _load_config_used = 
1c0002000  {
1c0002000      uint32_t characteristics = 0x118
1c0002004      uint32_t timeDateStamp = 0x0
1c0002008      uint16_t majorVersion = 0x0
1c000200a      uint16_t minorVersion = 0x0
1c000200c      uint32_t globalFlagsClear = 0x0
1c0002010      uint32_t globalFlagsSet = 0x0
1c0002014      uint32_t criticalSectionDefaultTimeout = 0x0
1c0002018      uint64_t deCommitFreeBlockThreshold = 0x0
1c0002020      uint64_t deCommitTotalFreeThreshold = 0x0
1c0002028      uint64_t lockPrefixTable = 0x0
1c0002030      uint64_t maximumAllocationSize = 0x0
1c0002038      uint64_t virtualMemoryThreshold = 0x0
1c0002040      uint64_t processAffinityMask = 0x0
1c0002048      uint32_t processHeapFlags = 0x0
1c000204c      uint16_t csdVersion = 0x0
1c000204e      uint16_t reserved = 0x0
1c0002050      uint64_t editList = 0x0
1c0002058      uint64_t securityCookie = 0x1c0003000
1c0002060      uint64_t seHandlerTable = 0x0
1c0002068      uint64_t seHandlerCount = 0x0
1c0002070      uint64_t guardCFCheckFunctionPointer = 0x1c00050d0
1c0002078      uint64_t guardCFDispatchFunctionPointer = 0x1c00050d8
1c0002080      uint64_t guardCFFunctionTable = 0x1c0007000
1c0002088      uint64_t guardCFFunctionCount = 0x10
1c0002090      uint32_t guardFlags = 0x11c500
1c0002094      uint16_t Flags = 0x0
1c0002096      uint16_t Catalog = 0x0
1c0002098      uint32_t CatalogOffset = 0x0
1c000209c      uint32_t Reserved = 0x0
1c00020a0      uint64_t guardAddressTakenIatEntryTable = 0x0
1c00020a8      uint64_t guardAddressTakenIatEntryCount = 0x0
1c00020b0      uint64_t guardLongJumpTargetTable = 0x0
1c00020b8      uint64_t guardLongJumpTargetCount = 0x0
1c00020c0      uint64_t dynamicValueRelocTable = 0x0
1c00020c8      uint64_t CHPEMetadataPointer = 0x0
1c00020d0      uint64_t guardRFFailureRoutine = 0x0
1c00020d8      uint64_t guardRFFailureRoutineFunctionPointer = 0x0
1c00020e0      uint32_t dynamicValueRelocTableOffset = 0x1c
1c00020e4      uint16_t dynamicValueRelocTableSection = 0x9
1c00020e6      uint16_t reserved2 = 0x0
1c00020e8      uint64_t guardRFVerifyStackPointerFunctionPointer = 0x0
1c00020f0      uint32_t hotPatchTableOffset = 0x0
1c00020f4      uint32_t reserved3 = 0x0
1c00020f8      uint64_t enclaveConfigurationPointer = 0x0
1c0002100      uint64_t volatileMetadataPointer = 0x0
1c0002108  }

1c0002108                          00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00          ........................

1c0002120  wchar16 `string'::\\Device\\Beep[0xd] = "\\Device\\Beep", 0

1c000213a                                                                                00 00 00 00 00 00                            ......
1c0002140  struct Debug_Directory_Table __debug_directory_entries[0x3] = 
1c0002140  {
1c0002140      [0x0] = 
1c0002140      {
1c0002140          uint32_t characteristics = 0x0
1c0002144          uint32_t timeDateStamp = 0xe4ac8238
1c0002148          uint16_t majorVersion = 0x0
1c000214a          uint16_t minorVersion = 0x0
1c000214c          enum type = IMAGE_DEBUG_TYPE_CODEVIEW
1c0002150          uint32_t sizeOfData = 0x21
1c0002154          uint32_t addressOfRawData = 0x2194
1c0002158          uint32_t pointerToRawData = 0xf94
1c000215c      }
1c000215c      [0x1] = 
1c000215c      {
1c000215c          uint32_t characteristics = 0x0
1c0002160          uint32_t timeDateStamp = 0xe4ac8238
1c0002164          uint16_t majorVersion = 0x0
1c0002166          uint16_t minorVersion = 0x0
1c0002168          enum type = IMAGE_DEBUG_TYPE_POGO
1c000216c          uint32_t sizeOfData = 0x1e4
1c0002170          uint32_t addressOfRawData = 0x21b8
1c0002174          uint32_t pointerToRawData = 0xfb8
1c0002178      }
1c0002178      [0x2] = 
1c0002178      {
1c0002178          uint32_t characteristics = 0x0
1c000217c          uint32_t timeDateStamp = 0xe4ac8238
1c0002180          uint16_t majorVersion = 0x0
1c0002182          uint16_t minorVersion = 0x0
1c0002184          enum type = 0x10
1c0002188          uint32_t sizeOfData = 0x24
1c000218c          uint32_t addressOfRawData = 0x239c
1c0002190          uint32_t pointerToRawData = 0x119c
1c0002194      }
1c0002194  }
1c0002194  uint32_t debugInfoType = 'RSDS'
1c0002198  uint8_t PDBGuid[0x10] = 
1c0002198  {
1c0002198      [0x0] =  0x30
1c0002199      [0x1] =  0x42
1c000219a      [0x2] =  0x44
1c000219b      [0x3] =  0x01
1c000219c      [0x4] =  0x41
1c000219d      [0x5] =  0x8f
1c000219e      [0x6] =  0x47
1c000219f      [0x7] =  0xb2
1c00021a0      [0x8] =  0x24
1c00021a1      [0x9] =  0xd2
1c00021a2      [0xa] =  0xdb
1c00021a3      [0xb] =  0xcf
1c00021a4      [0xc] =  0x57
1c00021a5      [0xd] =  0x6e
1c00021a6      [0xe] =  0x24
1c00021a7      [0xf] =  0x9d
1c00021a8  }
1c00021a8  uint32_t PDBAge = 0x1
1c00021ac  char PDBFileName[0x9] = "beep.pdb", 0

1c00021b5                                                                 00 00 00                                               ...
1c00021b8  uint8_t debug_type_pogo[0x1e4] = 
1c00021b8  {
1c00021b8      [0x000] =  0x00
1c00021b9      [0x001] =  0x55
1c00021ba      [0x002] =  0x47
1c00021bb      [0x003] =  0x50
1c00021bc      [0x004] =  0x00
1c00021bd      [0x005] =  0x10
1c00021be      [0x006] =  0x00
1c00021bf      [0x007] =  0x00
1c00021c0      [0x008] =  0x80
1c00021c1      [0x009] =  0x02
1c00021c2      [0x00a] =  0x00
1c00021c3      [0x00b] =  0x00
1c00021c4      [0x00c] =  0x2e
1c00021c5      [0x00d] =  0x74
1c00021c6      [0x00e] =  0x65
1c00021c7      [0x00f] =  0x78
1c00021c8      [0x010] =  0x74
1c00021c9      [0x011] =  0x24
1c00021ca      [0x012] =  0x6c
1c00021cb      [0x013] =  0x70
1c00021cc      [0x014] =  0x30
1c00021cd      [0x015] =  0x30
1c00021ce      [0x016] =  0x62
1c00021cf      [0x017] =  0x65
1c00021d0      [0x018] =  0x65
1c00021d1      [0x019] =  0x70
1c00021d2      [0x01a] =  0x2e
1c00021d3      [0x01b] =  0x73
1c00021d4      [0x01c] =  0x79
1c00021d5      [0x01d] =  0x73
1c00021d6      [0x01e] =  0x21
1c00021d7      [0x01f] =  0x33
1c00021d8      [0x020] =  0x35
1c00021d9      [0x021] =  0x5f
1c00021da      [0x022] =  0x68
1c00021db      [0x023] =  0x79
1c00021dc      [0x024] =  0x62
1c00021dd      [0x025] =  0x72
1c00021de      [0x026] =  0x69
1c00021df      [0x027] =  0x64
1c00021e0      [0x028] =  0x62
1c00021e1      [0x029] =  0x6f
1c00021e2      [0x02a] =  0x6f
1c00021e3      [0x02b] =  0x74
1c00021e4      [0x02c] =  0x00
1c00021e5      [0x02d] =  0x00
1c00021e6      [0x02e] =  0x00
1c00021e7      [0x02f] =  0x00
1c00021e8      [0x030] =  0x80
1c00021e9      [0x031] =  0x12
1c00021ea      [0x032] =  0x00
1c00021eb      [0x033] =  0x00
1c00021ec      [0x034] =  0x10
1c00021ed      [0x035] =  0x03
1c00021ee      [0x036] =  0x00
1c00021ef      [0x037] =  0x00
1c00021f0      [0x038] =  0x2e
1c00021f1      [0x039] =  0x74
1c00021f2      [0x03a] =  0x65
1c00021f3      [0x03b] =  0x78
1c00021f4      [0x03c] =  0x74
1c00021f5      [0x03d] =  0x24
1c00021f6      [0x03e] =  0x6c
1c00021f7      [0x03f] =  0x70
1c00021f8      [0x040] =  0x30
1c00021f9      [0x041] =  0x31
1c00021fa      [0x042] =  0x62
1c00021fb      [0x043] =  0x65
1c00021fc      [0x044] =  0x65
1c00021fd      [0x045] =  0x70
1c00021fe      [0x046] =  0x2e
1c00021ff      [0x047] =  0x73
1c0002200      [0x048] =  0x79
1c0002201      [0x049] =  0x73
1c0002202      [0x04a] =  0x21
1c0002203      [0x04b] =  0x33
1c0002204      [0x04c] =  0x35
1c0002205      [0x04d] =  0x5f
1c0002206      [0x04e] =  0x68
1c0002207      [0x04f] =  0x79
1c0002208      [0x050] =  0x62
1c0002209      [0x051] =  0x72
1c000220a      [0x052] =  0x69
1c000220b      [0x053] =  0x64
1c000220c      [0x054] =  0x62
1c000220d      [0x055] =  0x6f
1c000220e      [0x056] =  0x6f
1c000220f      [0x057] =  0x74
1c0002210      [0x058] =  0x00
1c0002211      [0x059] =  0x00
1c0002212      [0x05a] =  0x00
1c0002213      [0x05b] =  0x00
1c0002214      [0x05c] =  0x90
1c0002215      [0x05d] =  0x15
1c0002216      [0x05e] =  0x00
1c0002217      [0x05f] =  0x00
1c0002218      [0x060] =  0x60
1c0002219      [0x061] =  0x00
1c000221a      [0x062] =  0x00
1c000221b      [0x063] =  0x00
1c000221c      [0x064] =  0x2e
1c000221d      [0x065] =  0x74
1c000221e      [0x066] =  0x65
1c000221f      [0x067] =  0x78
1c0002220      [0x068] =  0x74
1c0002221      [0x069] =  0x24
1c0002222      [0x06a] =  0x6d
1c0002223      [0x06b] =  0x6e
1c0002224      [0x06c] =  0x00
1c0002225      [0x06d] =  0x00
1c0002226      [0x06e] =  0x00
1c0002227      [0x06f] =  0x00
1c0002228      [0x070] =  0xf0
1c0002229      [0x071] =  0x15
1c000222a      [0x072] =  0x00
1c000222b      [0x073] =  0x00
1c000222c      [0x074] =  0x16
1c000222d      [0x075] =  0x00
1c000222e      [0x076] =  0x00
1c000222f      [0x077] =  0x00
1c0002230      [0x078] =  0x2e
1c0002231      [0x079] =  0x74
1c0002232      [0x07a] =  0x65
1c0002233      [0x07b] =  0x78
1c0002234      [0x07c] =  0x74
1c0002235      [0x07d] =  0x24
1c0002236      [0x07e] =  0x6d
1c0002237      [0x07f] =  0x6e
1c0002238      [0x080] =  0x24
1c0002239      [0x081] =  0x30
1c000223a      [0x082] =  0x30
1c000223b      [0x083] =  0x00
1c000223c      [0x084] =  0x06
1c000223d      [0x085] =  0x16
1c000223e      [0x086] =  0x00
1c000223f      [0x087] =  0x00
1c0002240      [0x088] =  0x8a
1c0002241      [0x089] =  0x01
1c0002242      [0x08a] =  0x00
1c0002243      [0x08b] =  0x00
1c0002244      [0x08c] =  0x2e
1c0002245      [0x08d] =  0x74
1c0002246      [0x08e] =  0x65
1c0002247      [0x08f] =  0x78
1c0002248      [0x090] =  0x74
1c0002249      [0x091] =  0x24
1c000224a      [0x092] =  0x7a
1c000224b      [0x093] =  0x79
1c000224c      [0x094] =  0x00
1c000224d      [0x095] =  0x00
1c000224e      [0x096] =  0x00
1c000224f      [0x097] =  0x00
1c0002250      [0x098] =  0x90
1c0002251      [0x099] =  0x17
1c0002252      [0x09a] =  0x00
1c0002253      [0x09b] =  0x00
1c0002254      [0x09c] =  0xd5
1c0002255      [0x09d] =  0x01
1c0002256      [0x09e] =  0x00
1c0002257      [0x09f] =  0x00
1c0002258      [0x0a0] =  0x2e
1c0002259      [0x0a1] =  0x74
1c000225a      [0x0a2] =  0x65
1c000225b      [0x0a3] =  0x78
1c000225c      [0x0a4] =  0x74
1c000225d      [0x0a5] =  0x24
1c000225e      [0x0a6] =  0x7a
1c000225f      [0x0a7] =  0x7a
1c0002260      [0x0a8] =  0x00
1c0002261      [0x0a9] =  0x00
1c0002262      [0x0aa] =  0x00
1c0002263      [0x0ab] =  0x00
1c0002264      [0x0ac] =  0x00
1c0002265      [0x0ad] =  0x20
1c0002266      [0x0ae] =  0x00
1c0002267      [0x0af] =  0x00
1c0002268      [0x0b0] =  0x20
1c0002269      [0x0b1] =  0x01
1c000226a      [0x0b2] =  0x00
1c000226b      [0x0b3] =  0x00
1c000226c      [0x0b4] =  0x2e
1c000226d      [0x0b5] =  0x72
1c000226e      [0x0b6] =  0x64
1c000226f      [0x0b7] =  0x61
1c0002270      [0x0b8] =  0x74
1c0002271      [0x0b9] =  0x61
1c0002272      [0x0ba] =  0x24
1c0002273      [0x0bb] =  0x62
1c0002274      [0x0bc] =  0x72
1c0002275      [0x0bd] =  0x63
1c0002276      [0x0be] =  0x00
1c0002277      [0x0bf] =  0x00
1c0002278      [0x0c0] =  0x20
1c0002279      [0x0c1] =  0x21
1c000227a      [0x0c2] =  0x00
1c000227b      [0x0c3] =  0x00
1c000227c      [0x0c4] =  0x74
1c000227d      [0x0c5] =  0x00
1c000227e      [0x0c6] =  0x00
1c000227f      [0x0c7] =  0x00
1c0002280      [0x0c8] =  0x2e
1c0002281      [0x0c9] =  0x72
1c0002282      [0x0ca] =  0x64
1c0002283      [0x0cb] =  0x61
1c0002284      [0x0cc] =  0x74
1c0002285      [0x0cd] =  0x61
1c0002286      [0x0ce] =  0x00
1c0002287      [0x0cf] =  0x00
1c0002288      [0x0d0] =  0x94
1c0002289      [0x0d1] =  0x21
1c000228a      [0x0d2] =  0x00
1c000228b      [0x0d3] =  0x00
1c000228c      [0x0d4] =  0x2c
1c000228d      [0x0d5] =  0x02
1c000228e      [0x0d6] =  0x00
1c000228f      [0x0d7] =  0x00
1c0002290      [0x0d8] =  0x2e
1c0002291      [0x0d9] =  0x72
1c0002292      [0x0da] =  0x64
1c0002293      [0x0db] =  0x61
1c0002294      [0x0dc] =  0x74
1c0002295      [0x0dd] =  0x61
1c0002296      [0x0de] =  0x24
1c0002297      [0x0df] =  0x7a
1c0002298      [0x0e0] =  0x7a
1c0002299      [0x0e1] =  0x7a
1c000229a      [0x0e2] =  0x64
1c000229b      [0x0e3] =  0x62
1c000229c      [0x0e4] =  0x67
1c000229d      [0x0e5] =  0x00
1c000229e      [0x0e6] =  0x00
1c000229f      [0x0e7] =  0x00
1c00022a0      [0x0e8] =  0xc0
1c00022a1      [0x0e9] =  0x23
1c00022a2      [0x0ea] =  0x00
1c00022a3      [0x0eb] =  0x00
1c00022a4      [0x0ec] =  0x18
1c00022a5      [0x0ed] =  0x01
1c00022a6      [0x0ee] =  0x00
1c00022a7      [0x0ef] =  0x00
1c00022a8      [0x0f0] =  0x2e
1c00022a9      [0x0f1] =  0x78
1c00022aa      [0x0f2] =  0x64
1c00022ab      [0x0f3] =  0x61
1c00022ac      [0x0f4] =  0x74
1c00022ad      [0x0f5] =  0x61
1c00022ae      [0x0f6] =  0x00
1c00022af      [0x0f7] =  0x00
1c00022b0      [0x0f8] =  0x00
1c00022b1      [0x0f9] =  0x30
1c00022b2      [0x0fa] =  0x00
1c00022b3      [0x0fb] =  0x00
1c00022b4      [0x0fc] =  0x10
1c00022b5      [0x0fd] =  0x00
1c00022b6      [0x0fe] =  0x00
1c00022b7      [0x0ff] =  0x00
1c00022b8      [0x100] =  0x2e
1c00022b9      [0x101] =  0x64
1c00022ba      [0x102] =  0x61
1c00022bb      [0x103] =  0x74
1c00022bc      [0x104] =  0x61
1c00022bd      [0x105] =  0x00
1c00022be      [0x106] =  0x00
1c00022bf      [0x107] =  0x00
1c00022c0      [0x108] =  0x10
1c00022c1      [0x109] =  0x30
1c00022c2      [0x10a] =  0x00
1c00022c3      [0x10b] =  0x00
1c00022c4      [0x10c] =  0x80
1c00022c5      [0x10d] =  0x00
1c00022c6      [0x10e] =  0x00
1c00022c7      [0x10f] =  0x00
1c00022c8      [0x110] =  0x2e
1c00022c9      [0x111] =  0x62
1c00022ca      [0x112] =  0x73
1c00022cb      [0x113] =  0x73
1c00022cc      [0x114] =  0x00
1c00022cd      [0x115] =  0x00
1c00022ce      [0x116] =  0x00
1c00022cf      [0x117] =  0x00
1c00022d0      [0x118] =  0x00
1c00022d1      [0x119] =  0x40
1c00022d2      [0x11a] =  0x00
1c00022d3      [0x11b] =  0x00
1c00022d4      [0x11c] =  0x50
1c00022d5      [0x11d] =  0x01
1c00022d6      [0x11e] =  0x00
1c00022d7      [0x11f] =  0x00
1c00022d8      [0x120] =  0x2e
1c00022d9      [0x121] =  0x70
1c00022da      [0x122] =  0x64
1c00022db      [0x123] =  0x61
1c00022dc      [0x124] =  0x74
1c00022dd      [0x125] =  0x61
1c00022de      [0x126] =  0x00
1c00022df      [0x127] =  0x00
1c00022e0      [0x128] =  0x00
1c00022e1      [0x129] =  0x50
1c00022e2      [0x12a] =  0x00
1c00022e3      [0x12b] =  0x00
1c00022e4      [0x12c] =  0xd0
1c00022e5      [0x12d] =  0x00
1c00022e6      [0x12e] =  0x00
1c00022e7      [0x12f] =  0x00
1c00022e8      [0x130] =  0x2e
1c00022e9      [0x131] =  0x69
1c00022ea      [0x132] =  0x64
1c00022eb      [0x133] =  0x61
1c00022ec      [0x134] =  0x74
1c00022ed      [0x135] =  0x61
1c00022ee      [0x136] =  0x24
1c00022ef      [0x137] =  0x35
1c00022f0      [0x138] =  0x00
1c00022f1      [0x139] =  0x00
1c00022f2      [0x13a] =  0x00
1c00022f3      [0x13b] =  0x00
1c00022f4      [0x13c] =  0xd0
1c00022f5      [0x13d] =  0x50
1c00022f6      [0x13e] =  0x00
1c00022f7      [0x13f] =  0x00
1c00022f8      [0x140] =  0x10
1c00022f9      [0x141] =  0x00
1c00022fa      [0x142] =  0x00
1c00022fb      [0x143] =  0x00
1c00022fc      [0x144] =  0x2e
1c00022fd      [0x145] =  0x30
1c00022fe      [0x146] =  0x30
1c00022ff      [0x147] =  0x63
1c0002300      [0x148] =  0x66
1c0002301      [0x149] =  0x67
1c0002302      [0x14a] =  0x00
1c0002303      [0x14b] =  0x00
1c0002304      [0x14c] =  0xe0
1c0002305      [0x14d] =  0x50
1c0002306      [0x14e] =  0x00
1c0002307      [0x14f] =  0x00
1c0002308      [0x150] =  0x14
1c0002309      [0x151] =  0x00
1c000230a      [0x152] =  0x00
1c000230b      [0x153] =  0x00
1c000230c      [0x154] =  0x2e
1c000230d      [0x155] =  0x69
1c000230e      [0x156] =  0x64
1c000230f      [0x157] =  0x61
1c0002310      [0x158] =  0x74
1c0002311      [0x159] =  0x61
1c0002312      [0x15a] =  0x24
1c0002313      [0x15b] =  0x32
1c0002314      [0x15c] =  0x00
1c0002315      [0x15d] =  0x00
1c0002316      [0x15e] =  0x00
1c0002317      [0x15f] =  0x00
1c0002318      [0x160] =  0xf4
1c0002319      [0x161] =  0x50
1c000231a      [0x162] =  0x00
1c000231b      [0x163] =  0x00
1c000231c      [0x164] =  0x14
1c000231d      [0x165] =  0x00
1c000231e      [0x166] =  0x00
1c000231f      [0x167] =  0x00
1c0002320      [0x168] =  0x2e
1c0002321      [0x169] =  0x69
1c0002322      [0x16a] =  0x64
1c0002323      [0x16b] =  0x61
1c0002324      [0x16c] =  0x74
1c0002325      [0x16d] =  0x61
1c0002326      [0x16e] =  0x24
1c0002327      [0x16f] =  0x33
1c0002328      [0x170] =  0x00
1c0002329      [0x171] =  0x00
1c000232a      [0x172] =  0x00
1c000232b      [0x173] =  0x00
1c000232c      [0x174] =  0x08
1c000232d      [0x175] =  0x51
1c000232e      [0x176] =  0x00
1c000232f      [0x177] =  0x00
1c0002330      [0x178] =  0xd0
1c0002331      [0x179] =  0x00
1c0002332      [0x17a] =  0x00
1c0002333      [0x17b] =  0x00
1c0002334      [0x17c] =  0x2e
1c0002335      [0x17d] =  0x69
1c0002336      [0x17e] =  0x64
1c0002337      [0x17f] =  0x61
1c0002338      [0x180] =  0x74
1c0002339      [0x181] =  0x61
1c000233a      [0x182] =  0x24
1c000233b      [0x183] =  0x34
1c000233c      [0x184] =  0x00
1c000233d      [0x185] =  0x00
1c000233e      [0x186] =  0x00
1c000233f      [0x187] =  0x00
1c0002340      [0x188] =  0xd8
1c0002341      [0x189] =  0x51
1c0002342      [0x18a] =  0x00
1c0002343      [0x18b] =  0x00
1c0002344      [0x18c] =  0x38
1c0002345      [0x18d] =  0x02
1c0002346      [0x18e] =  0x00
1c0002347      [0x18f] =  0x00
1c0002348      [0x190] =  0x2e
1c0002349      [0x191] =  0x69
1c000234a      [0x192] =  0x64
1c000234b      [0x193] =  0x61
1c000234c      [0x194] =  0x74
1c000234d      [0x195] =  0x61
1c000234e      [0x196] =  0x24
1c000234f      [0x197] =  0x36
1c0002350      [0x198] =  0x00
1c0002351      [0x199] =  0x00
1c0002352      [0x19a] =  0x00
1c0002353      [0x19b] =  0x00
1c0002354      [0x19c] =  0x00
1c0002355      [0x19d] =  0x60
1c0002356      [0x19e] =  0x00
1c0002357      [0x19f] =  0x00
1c0002358      [0x1a0] =  0x72
1c0002359      [0x1a1] =  0x00
1c000235a      [0x1a2] =  0x00
1c000235b      [0x1a3] =  0x00
1c000235c      [0x1a4] =  0x49
1c000235d      [0x1a5] =  0x4e
1c000235e      [0x1a6] =  0x49
1c000235f      [0x1a7] =  0x54
1c0002360      [0x1a8] =  0x00
1c0002361      [0x1a9] =  0x00
1c0002362      [0x1aa] =  0x00
1c0002363      [0x1ab] =  0x00
1c0002364      [0x1ac] =  0x00
1c0002365      [0x1ad] =  0x70
1c0002366      [0x1ae] =  0x00
1c0002367      [0x1af] =  0x00
1c0002368      [0x1b0] =  0x40
1c0002369      [0x1b1] =  0x00
1c000236a      [0x1b2] =  0x00
1c000236b      [0x1b3] =  0x00
1c000236c      [0x1b4] =  0x2e
1c000236d      [0x1b5] =  0x67
1c000236e      [0x1b6] =  0x66
1c000236f      [0x1b7] =  0x69
1c0002370      [0x1b8] =  0x64
1c0002371      [0x1b9] =  0x73
1c0002372      [0x1ba] =  0x00
1c0002373      [0x1bb] =  0x00
1c0002374      [0x1bc] =  0x00
1c0002375      [0x1bd] =  0x80
1c0002376      [0x1be] =  0x00
1c0002377      [0x1bf] =  0x00
1c0002378      [0x1c0] =  0x60
1c0002379      [0x1c1] =  0x00
1c000237a      [0x1c2] =  0x00
1c000237b      [0x1c3] =  0x00
1c000237c      [0x1c4] =  0x2e
1c000237d      [0x1c5] =  0x72
1c000237e      [0x1c6] =  0x73
1c000237f      [0x1c7] =  0x72
1c0002380      [0x1c8] =  0x63
1c0002381      [0x1c9] =  0x24
1c0002382      [0x1ca] =  0x30
1c0002383      [0x1cb] =  0x31
1c0002384      [0x1cc] =  0x00
1c0002385      [0x1cd] =  0x00
1c0002386      [0x1ce] =  0x00
1c0002387      [0x1cf] =  0x00
1c0002388      [0x1d0] =  0x60
1c0002389      [0x1d1] =  0x80
1c000238a      [0x1d2] =  0x00
1c000238b      [0x1d3] =  0x00
1c000238c      [0x1d4] =  0x80
1c000238d      [0x1d5] =  0x03
1c000238e      [0x1d6] =  0x00
1c000238f      [0x1d7] =  0x00
1c0002390      [0x1d8] =  0x2e
1c0002391      [0x1d9] =  0x72
1c0002392      [0x1da] =  0x73
1c0002393      [0x1db] =  0x72
1c0002394      [0x1dc] =  0x63
1c0002395      [0x1dd] =  0x24
1c0002396      [0x1de] =  0x30
1c0002397      [0x1df] =  0x32
1c0002398      [0x1e0] =  0x00
1c0002399      [0x1e1] =  0x00
1c000239a      [0x1e2] =  0x00
1c000239b      [0x1e3] =  0x00
1c000239c  }
1c000239c  uint8_t debug_type_repro[0x24] = 
1c000239c  {
1c000239c      [0x00] =  0x20
1c000239d      [0x01] =  0x00
1c000239e      [0x02] =  0x00
1c000239f      [0x03] =  0x00
1c00023a0      [0x04] =  0x30
1c00023a1      [0x05] =  0x42
1c00023a2      [0x06] =  0x44
1c00023a3      [0x07] =  0x01
1c00023a4      [0x08] =  0x41
1c00023a5      [0x09] =  0x8f
1c00023a6      [0x0a] =  0x47
1c00023a7      [0x0b] =  0xb2
1c00023a8      [0x0c] =  0x24
1c00023a9      [0x0d] =  0xd2
1c00023aa      [0x0e] =  0xdb
1c00023ab      [0x0f] =  0xcf
1c00023ac      [0x10] =  0x57
1c00023ad      [0x11] =  0x6e
1c00023ae      [0x12] =  0x24
1c00023af      [0x13] =  0x9d
1c00023b0      [0x14] =  0x22
1c00023b1      [0x15] =  0x03
1c00023b2      [0x16] =  0x04
1c00023b3      [0x17] =  0x5f
1c00023b4      [0x18] =  0x17
1c00023b5      [0x19] =  0x2c
1c00023b6      [0x1a] =  0x81
1c00023b7      [0x1b] =  0x67
1c00023b8      [0x1c] =  0x7f
1c00023b9      [0x1d] =  0x26
1c00023ba      [0x1e] =  0x17
1c00023bb      [0x1f] =  0xd0
1c00023bc      [0x20] =  0x38
1c00023bd      [0x21] =  0x82
1c00023be      [0x22] =  0xac
1c00023bf      [0x23] =  0xe4
1c00023c0  }
1c00023c0  struct UNWIND_INFO data_1c00023c0 = 
1c00023c0  {
1c00023c0      uint8_t VersionAndFlag = 0x2
1c00023c1      uint8_t SizeOfProlog = 0x4
1c00023c2      uint8_t CountOfUnwindCodes = 0x3
1c00023c3      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00023c4  }
1c00023c4  uint16_t data_1c00023c4[0x3] = 
1c00023c4  {
1c00023c4      [0x0] =  0x0601
1c00023c6      [0x1] =  0x0602
1c00023c8      [0x2] =  0x4204
1c00023ca  }

1c00023ca                                00 00                                                                        ..

1c00023cc  struct UNWIND_INFO data_1c00023cc = 
1c00023cc  {
1c00023cc      uint8_t VersionAndFlag = 0x2
1c00023cd      uint8_t SizeOfProlog = 0xd
1c00023ce      uint8_t CountOfUnwindCodes = 0x8
1c00023cf      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00023d0  }
1c00023d0  uint16_t data_1c00023d0[0x8] = 
1c00023d0  {
1c00023d0      [0x0] =  0x0605
1c00023d2      [0x1] =  0x0606
1c00023d4      [0x2] =  0x340d
1c00023d6      [0x3] =  0x000b
1c00023d8      [0x4] =  0x320d
1c00023da      [0x5] =  0xf009
1c00023dc      [0x6] =  0x7007
1c00023de      [0x7] =  0x6006
1c00023e0  }
1c00023e0  struct UNWIND_INFO data_1c00023e0 = 
1c00023e0  {
1c00023e0      uint8_t VersionAndFlag = 0x22
1c00023e1      uint8_t SizeOfProlog = 0x5
1c00023e2      uint8_t CountOfUnwindCodes = 0x2
1c00023e3      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00023e4  }
1c00023e4  uint16_t data_1c00023e4[0x2] = 
1c00023e4  {
1c00023e4      [0x0] =  0xe405
1c00023e6      [0x1] =  0x000a
1c00023e8  }
1c00023e8  struct Exception_Directory_Entry data_1c00023e8 = 
1c00023e8  {
1c00023e8      uint32_t beginAddress = 0x1070
1c00023ec      uint32_t endAddress = 0x111a
1c00023f0      uint32_t unwindInformation = 0x23cc
1c00023f4  }
1c00023f4  struct UNWIND_INFO data_1c00023f4 = 
1c00023f4  {
1c00023f4      uint8_t VersionAndFlag = 0x22
1c00023f5      uint8_t SizeOfProlog = 0x5
1c00023f6      uint8_t CountOfUnwindCodes = 0x2
1c00023f7      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00023f8  }
1c00023f8  uint16_t data_1c00023f8[0x2] = 
1c00023f8  {
1c00023f8      [0x0] =  0x5405
1c00023fa      [0x1] =  0x0009
1c00023fc  }
1c00023fc  struct Exception_Directory_Entry data_1c00023fc = 
1c00023fc  {
1c00023fc      uint32_t beginAddress = 0x1606
1c0002400      uint32_t endAddress = 0x160b
1c0002404      uint32_t unwindInformation = 0x23e0
1c0002408  }
1c0002408  struct UNWIND_INFO data_1c0002408 = 
1c0002408  {
1c0002408      uint8_t VersionAndFlag = 0x2
1c0002409      uint8_t SizeOfProlog = 0x14
1c000240a      uint8_t CountOfUnwindCodes = 0xa
1c000240b      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c000240c  }
1c000240c  uint16_t data_1c000240c[0xa] = 
1c000240c  {
1c000240c      [0x0] =  0x0602
1c000240e      [0x1] =  0x0603
1c0002410      [0x2] =  0x6414
1c0002412      [0x3] =  0x000a
1c0002414      [0x4] =  0x5414
1c0002416      [0x5] =  0x0009
1c0002418      [0x6] =  0x3414
1c000241a      [0x7] =  0x0008
1c000241c      [0x8] =  0x5214
1c000241e      [0x9] =  0x7010
1c0002420  }
1c0002420  struct UNWIND_INFO data_1c0002420 = 
1c0002420  {
1c0002420      uint8_t VersionAndFlag = 0x22
1c0002421      uint8_t SizeOfProlog = 0x0
1c0002422      uint8_t CountOfUnwindCodes = 0x0
1c0002423      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002424  }
1c0002424  struct Exception_Directory_Entry data_1c0002424 = 
1c0002424  {
1c0002424      uint32_t beginAddress = 0x1120
1c0002428      uint32_t endAddress = 0x11a0
1c000242c      uint32_t unwindInformation = 0x2408
1c0002430  }
1c0002430  struct UNWIND_INFO data_1c0002430 = 
1c0002430  {
1c0002430      uint8_t VersionAndFlag = 0x2
1c0002431      uint8_t SizeOfProlog = 0xa
1c0002432      uint8_t CountOfUnwindCodes = 0x6
1c0002433      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002434  }
1c0002434  uint16_t data_1c0002434[0x6] = 
1c0002434  {
1c0002434      [0x0] =  0x0602
1c0002436      [0x1] =  0x0603
1c0002438      [0x2] =  0x340a
1c000243a      [0x3] =  0x0006
1c000243c      [0x4] =  0x320a
1c000243e      [0x5] =  0x7006
1c0002440  }
1c0002440  struct UNWIND_INFO data_1c0002440 = 
1c0002440  {
1c0002440      uint8_t VersionAndFlag = 0x2
1c0002441      uint8_t SizeOfProlog = 0xf
1c0002442      uint8_t CountOfUnwindCodes = 0x8
1c0002443      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002444  }
1c0002444  uint16_t data_1c0002444[0x8] = 
1c0002444  {
1c0002444      [0x0] =  0x0602
1c0002446      [0x1] =  0x060c
1c0002448      [0x2] =  0x640f
1c000244a      [0x3] =  0x0009
1c000244c      [0x4] =  0x340f
1c000244e      [0x5] =  0x0008
1c0002450      [0x6] =  0x320f
1c0002452      [0x7] =  0x700b
1c0002454  }
1c0002454  struct UNWIND_INFO data_1c0002454 = 
1c0002454  {
1c0002454      uint8_t VersionAndFlag = 0x22
1c0002455      uint8_t SizeOfProlog = 0x5
1c0002456      uint8_t CountOfUnwindCodes = 0x2
1c0002457      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002458  }
1c0002458  uint16_t data_1c0002458[0x2] = 
1c0002458  {
1c0002458      [0x0] =  0x5405
1c000245a      [0x1] =  0x0007
1c000245c  }
1c000245c  struct Exception_Directory_Entry data_1c000245c = 
1c000245c  {
1c000245c      uint32_t beginAddress = 0x1230
1c0002460      uint32_t endAddress = 0x127b
1c0002464      uint32_t unwindInformation = 0x2440
1c0002468  }
1c0002468  struct UNWIND_INFO data_1c0002468 = 
1c0002468  {
1c0002468      uint8_t VersionAndFlag = 0x2
1c0002469      uint8_t SizeOfProlog = 0x6
1c000246a      uint8_t CountOfUnwindCodes = 0x4
1c000246b      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c000246c  }
1c000246c  uint16_t data_1c000246c[0x4] = 
1c000246c  {
1c000246c      [0x0] =  0x0602
1c000246e      [0x1] =  0x0603
1c0002470      [0x2] =  0x3206
1c0002472      [0x3] =  0x3002
1c0002474  }
1c0002474  struct UNWIND_INFO data_1c0002474 = 
1c0002474  {
1c0002474      uint8_t VersionAndFlag = 0x22
1c0002475      uint8_t SizeOfProlog = 0x0
1c0002476      uint8_t CountOfUnwindCodes = 0x0
1c0002477      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002478  }
1c0002478  struct Exception_Directory_Entry data_1c0002478 = 
1c0002478  {
1c0002478      uint32_t beginAddress = 0x1290
1c000247c      uint32_t endAddress = 0x12f8
1c0002480      uint32_t unwindInformation = 0x2468
1c0002484  }
1c0002484  struct UNWIND_INFO data_1c0002484 = 
1c0002484  {
1c0002484      uint8_t VersionAndFlag = 0x2
1c0002485      uint8_t SizeOfProlog = 0x6
1c0002486      uint8_t CountOfUnwindCodes = 0x4
1c0002487      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002488  }
1c0002488  uint16_t data_1c0002488[0x4] = 
1c0002488  {
1c0002488      [0x0] =  0x0602
1c000248a      [0x1] =  0x0603
1c000248c      [0x2] =  0x3206
1c000248e      [0x3] =  0x3002
1c0002490  }
1c0002490  struct UNWIND_INFO data_1c0002490 = 
1c0002490  {
1c0002490      uint8_t VersionAndFlag = 0x2
1c0002491      uint8_t SizeOfProlog = 0xa
1c0002492      uint8_t CountOfUnwindCodes = 0x4
1c0002493      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c0002494  }
1c0002494  uint16_t data_1c0002494[0x4] = 
1c0002494  {
1c0002494      [0x0] =  0x340a
1c0002496      [0x1] =  0x000d
1c0002498      [0x2] =  0x920a
1c000249a      [0x3] =  0x6006
1c000249c  }
1c000249c  struct UNWIND_INFO data_1c000249c = 
1c000249c  {
1c000249c      uint8_t VersionAndFlag = 0x22
1c000249d      uint8_t SizeOfProlog = 0x5
1c000249e      uint8_t CountOfUnwindCodes = 0x2
1c000249f      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00024a0  }
1c00024a0  uint16_t data_1c00024a0[0x2] = 
1c00024a0  {
1c00024a0      [0x0] =  0x7405
1c00024a2      [0x1] =  0x000c
1c00024a4  }
1c00024a4  struct Exception_Directory_Entry data_1c00024a4 = 
1c00024a4  {
1c00024a4      uint32_t beginAddress = 0x1360
1c00024a8      uint32_t endAddress = 0x13d8
1c00024ac      uint32_t unwindInformation = 0x2490
1c00024b0  }
1c00024b0  struct UNWIND_INFO data_1c00024b0 = 
1c00024b0  {
1c00024b0      uint8_t VersionAndFlag = 0x22
1c00024b1      uint8_t SizeOfProlog = 0x0
1c00024b2      uint8_t CountOfUnwindCodes = 0x2
1c00024b3      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00024b4  }
1c00024b4  uint16_t data_1c00024b4[0x2] = 
1c00024b4  {
1c00024b4      [0x0] =  0x0602
1c00024b6      [0x1] =  0x0603
1c00024b8  }
1c00024b8  struct Exception_Directory_Entry data_1c00024b8 = 
1c00024b8  {
1c00024b8      uint32_t beginAddress = 0x1360
1c00024bc      uint32_t endAddress = 0x13d8
1c00024c0      uint32_t unwindInformation = 0x2490
1c00024c4  }

1c00024c4              00 00 00 00                                                                              ....

1c00024c8  struct UNWIND_INFO data_1c00024c8 = 
1c00024c8  {
1c00024c8      uint8_t VersionAndFlag = 0x1
1c00024c9      uint8_t SizeOfProlog = 0x0
1c00024ca      uint8_t CountOfUnwindCodes = 0x0
1c00024cb      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00024cc  }

1c00024cc                                      00 00 00 00                                                              ....

1c00024d0  struct UNWIND_INFO data_1c00024d0 = 
1c00024d0  {
1c00024d0      uint8_t VersionAndFlag = 0x1
1c00024d1      uint8_t SizeOfProlog = 0x0
1c00024d2      uint8_t CountOfUnwindCodes = 0x0
1c00024d3      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00024d4  }
1c00024d4  struct UNWIND_INFO data_1c00024d4 = 
1c00024d4  {
1c00024d4      uint8_t VersionAndFlag = 0x1
1c00024d5      uint8_t SizeOfProlog = 0x0
1c00024d6      uint8_t CountOfUnwindCodes = 0x0
1c00024d7      uint8_t FrameRegisterAndFrameRegisterOffset = 0x0
1c00024d8  }
.rdata section ended  {0x1c0002000-0x1c00024d8}

.data section started  {0x1c0003000-0x1c0003090}
1c0003000  uint64_t __security_cookie = 0x2b992ddfa232
1c0003008  int64_t __security_cookie_complement = -0x2b992ddfa233

1c0003010  HotPatchSpareGlobal2:
1c0003010                                                  00 00 00 00 00 00 00 00                                          ........
1c0003018  HotPatchSpareGlobal4:
1c0003018                                                                          00 00 00 00 00 00 00 00                          ........
1c0003020  HotPatchSpareGlobal14:
1c0003020  00 00 00 00 00 00 00 00                                                                          ........
1c0003028  HotPatchSpareGlobal12:
1c0003028                          00 00 00 00 00 00 00 00                                                          ........
1c0003030  HotPatchSpareGlobal1:
1c0003030                                                  00 00 00 00 00 00 00 00                                          ........
1c0003038  HotPatchSpareGlobal3:
1c0003038                                                                          00 00 00 00 00 00 00 00                          ........
1c0003040  HotPatchSpareGlobal8:
1c0003040  00 00 00 00 00 00 00 00                                                                          ........
1c0003048  HotPatchSpareGlobal15:
1c0003048                          00 00 00 00 00 00 00 00                                                          ........
1c0003050  HotPatchSpareGlobal9:
1c0003050                                                  00 00 00 00 00 00 00 00                                          ........
1c0003058  HotPatchSpareGlobal6:
1c0003058                                                                          00 00 00 00 00 00 00 00                          ........
1c0003060  HotPatchSpareGlobal13:
1c0003060  00 00 00 00 00 00 00 00                                                                          ........
1c0003068  HotPatchSpareGlobal10:
1c0003068                          00 00 00 00 00 00 00 00                                                          ........
1c0003070  HotPatchSpareGlobal5:
1c0003070                                                  00 00 00 00 00 00 00 00                                          ........
1c0003078  HotPatchSpareGlobal16:
1c0003078                                                                          00 00 00 00 00 00 00 00                          ........
1c0003080  HotPatchSpareGlobal11:
1c0003080  00 00 00 00 00 00 00 00                                                                          ........
1c0003088  HotPatchSpareGlobal7:
1c0003088                          00 00 00 00 00 00 00 00                                                          ........
.data section ended  {0x1c0003000-0x1c0003090}

.pdata section started  {0x1c0004000-0x1c0004150}
1c0004000  struct Exception_Directory_Entry __exception_directory_entries(0) = 
1c0004000  {
1c0004000      uint32_t beginAddress = 0x1010
1c0004004      uint32_t endAddress = 0x1039
1c0004008      uint32_t unwindInformation = 0x24d4
1c000400c  }
1c000400c  struct Exception_Directory_Entry __exception_directory_entries(1) = 
1c000400c  {
1c000400c      uint32_t beginAddress = 0x1040
1c0004010      uint32_t endAddress = 0x106a
1c0004014      uint32_t unwindInformation = 0x23c0
1c0004018  }
1c0004018  struct Exception_Directory_Entry __exception_directory_entries(2) = 
1c0004018  {
1c0004018      uint32_t beginAddress = 0x1070
1c000401c      uint32_t endAddress = 0x111a
1c0004020      uint32_t unwindInformation = 0x23cc
1c0004024  }
1c0004024  struct Exception_Directory_Entry __exception_directory_entries(3) = 
1c0004024  {
1c0004024      uint32_t beginAddress = 0x1120
1c0004028      uint32_t endAddress = 0x11a0
1c000402c      uint32_t unwindInformation = 0x2408
1c0004030  }
1c0004030  struct Exception_Directory_Entry __exception_directory_entries(4) = 
1c0004030  {
1c0004030      uint32_t beginAddress = 0x11b0
1c0004034      uint32_t endAddress = 0x121d
1c0004038      uint32_t unwindInformation = 0x2430
1c000403c  }
1c000403c  struct Exception_Directory_Entry __exception_directory_entries(5) = 
1c000403c  {
1c000403c      uint32_t beginAddress = 0x1230
1c0004040      uint32_t endAddress = 0x127b
1c0004044      uint32_t unwindInformation = 0x2440
1c0004048  }
1c0004048  struct Exception_Directory_Entry __exception_directory_entries(6) = 
1c0004048  {
1c0004048      uint32_t beginAddress = 0x1290
1c000404c      uint32_t endAddress = 0x12f8
1c0004050      uint32_t unwindInformation = 0x2468
1c0004054  }
1c0004054  struct Exception_Directory_Entry __exception_directory_entries(7) = 
1c0004054  {
1c0004054      uint32_t beginAddress = 0x1300
1c0004058      uint32_t endAddress = 0x132a
1c000405c      uint32_t unwindInformation = 0x24d4
1c0004060  }
1c0004060  struct Exception_Directory_Entry __exception_directory_entries(8) = 
1c0004060  {
1c0004060      uint32_t beginAddress = 0x1330
1c0004064      uint32_t endAddress = 0x1352
1c0004068      uint32_t unwindInformation = 0x2484
1c000406c  }
1c000406c  struct Exception_Directory_Entry __exception_directory_entries(9) = 
1c000406c  {
1c000406c      uint32_t beginAddress = 0x1360
1c0004070      uint32_t endAddress = 0x13d8
1c0004074      uint32_t unwindInformation = 0x2490
1c0004078  }
1c0004078  struct Exception_Directory_Entry __exception_directory_entries(10) = 
1c0004078  {
1c0004078      uint32_t beginAddress = 0x13d8
1c000407c      uint32_t endAddress = 0x147a
1c0004080      uint32_t unwindInformation = 0x249c
1c0004084  }
1c0004084  struct Exception_Directory_Entry __exception_directory_entries(11) = 
1c0004084  {
1c0004084      uint32_t beginAddress = 0x147a
1c0004088      uint32_t endAddress = 0x14e9
1c000408c      uint32_t unwindInformation = 0x24b0
1c0004090  }
1c0004090  struct Exception_Directory_Entry __exception_directory_entries(12) = 
1c0004090  {
1c0004090      uint32_t beginAddress = 0x14f0
1c0004094      uint32_t endAddress = 0x150a
1c0004098      uint32_t unwindInformation = 0x23c0
1c000409c  }
1c000409c  struct Exception_Directory_Entry __exception_directory_entries(13) = 
1c000409c  {
1c000409c      uint32_t beginAddress = 0x1510
1c00040a0      uint32_t endAddress = 0x1587
1c00040a4      uint32_t unwindInformation = 0x2430
1c00040a8  }
1c00040a8  struct Exception_Directory_Entry __exception_directory_entries(14) = 
1c00040a8  {
1c00040a8      uint32_t beginAddress = 0x15a0
1c00040ac      uint32_t endAddress = 0x15be
1c00040b0      uint32_t unwindInformation = 0x24c8
1c00040b4  }
1c00040b4  struct Exception_Directory_Entry __exception_directory_entries(15) = 
1c00040b4  {
1c00040b4      uint32_t beginAddress = 0x15d0
1c00040b8      uint32_t endAddress = 0x15d7
1c00040bc      uint32_t unwindInformation = 0x24d4
1c00040c0  }
1c00040c0  struct Exception_Directory_Entry __exception_directory_entries(16) = 
1c00040c0  {
1c00040c0      uint32_t beginAddress = 0x15e0
1c00040c4      uint32_t endAddress = 0x15e4
1c00040c8      uint32_t unwindInformation = 0x24d4
1c00040cc  }
1c00040cc  struct Exception_Directory_Entry __exception_directory_entries(17) = 
1c00040cc  {
1c00040cc      uint32_t beginAddress = 0x1600
1c00040d0      uint32_t endAddress = 0x1605
1c00040d4      uint32_t unwindInformation = 0x24d0
1c00040d8  }
1c00040d8  struct Exception_Directory_Entry __exception_directory_entries(18) = 
1c00040d8  {
1c00040d8      uint32_t beginAddress = 0x1606
1c00040dc      uint32_t endAddress = 0x160b
1c00040e0      uint32_t unwindInformation = 0x23e0
1c00040e4  }
1c00040e4  struct Exception_Directory_Entry __exception_directory_entries(19) = 
1c00040e4  {
1c00040e4      uint32_t beginAddress = 0x160b
1c00040e8      uint32_t endAddress = 0x1687
1c00040ec      uint32_t unwindInformation = 0x23f4
1c00040f0  }
1c00040f0  struct Exception_Directory_Entry __exception_directory_entries(20) = 
1c00040f0  {
1c00040f0      uint32_t beginAddress = 0x1688
1c00040f4      uint32_t endAddress = 0x16b7
1c00040f8      uint32_t unwindInformation = 0x2420
1c00040fc  }
1c00040fc  struct Exception_Directory_Entry __exception_directory_entries(21) = 
1c00040fc  {
1c00040fc      uint32_t beginAddress = 0x16b8
1c0004100      uint32_t endAddress = 0x1701
1c0004104      uint32_t unwindInformation = 0x2454
1c0004108  }
1c0004108  struct Exception_Directory_Entry __exception_directory_entries(22) = 
1c0004108  {
1c0004108      uint32_t beginAddress = 0x1702
1c000410c      uint32_t endAddress = 0x1779
1c0004110      uint32_t unwindInformation = 0x2474
1c0004114  }
1c0004114  struct Exception_Directory_Entry __exception_directory_entries(23) = 
1c0004114  {
1c0004114      uint32_t beginAddress = 0x1790
1c0004118      uint32_t endAddress = 0x1803
1c000411c      uint32_t unwindInformation = 0x2484
1c0004120  }
1c0004120  struct Exception_Directory_Entry __exception_directory_entries(24) = 
1c0004120  {
1c0004120      uint32_t beginAddress = 0x1810
1c0004124      uint32_t endAddress = 0x18cb
1c0004128      uint32_t unwindInformation = 0x2430
1c000412c  }
1c000412c  struct Exception_Directory_Entry __exception_directory_entries(25) = 
1c000412c  {
1c000412c      uint32_t beginAddress = 0x18e0
1c0004130      uint32_t endAddress = 0x1965
1c0004134      uint32_t unwindInformation = 0x2430
1c0004138  }
1c0004138  struct Exception_Directory_Entry __exception_directory_entries(26) = 
1c0004138  {
1c0004138      uint32_t beginAddress = 0x6010
1c000413c      uint32_t endAddress = 0x603c
1c0004140      uint32_t unwindInformation = 0x2430
1c0004144  }
1c0004144  struct Exception_Directory_Entry __exception_directory_entries(27) = 
1c0004144  {
1c0004144      uint32_t beginAddress = 0x6044
1c0004148      uint32_t endAddress = 0x6072
1c000414c      uint32_t unwindInformation = 0x24d4
1c0004150  }
.pdata section ended  {0x1c0004000-0x1c0004150}

.idata section started  {0x1c0005000-0x1c0005410}
1c0005000  void (* const ntoskrnl:IoStartNextPacket)(DEVICE_OBJECT* DeviceObject, BOOLEAN Cancelable) = IoStartNextPacket
1c0005008  KDEVICE_QUEUE_ENTRY* (* const ntoskrnl:KeRemoveDeviceQueue)(KDEVICE_QUEUE* DeviceQueue) = KeRemoveDeviceQueue
1c0005010  void (* const ntoskrnl:MmUnlockPagableImageSection)(void* ImageSectionHandle) = MmUnlockPagableImageSection
1c0005018  void* (* const ntoskrnl:MmLockPagableDataSection)(void* AddressWithinSection) = MmLockPagableDataSection
1c0005020  void (* const ntoskrnl:ExReleaseFastMutex)(FAST_MUTEX* FastMutex) = ExReleaseFastMutex
1c0005028  void (* const ntoskrnl:IoSetStartIoAttributes)(DEVICE_OBJECT* DeviceObject, BOOLEAN DeferredStartIo, BOOLEAN NonCancelable) = IoSetStartIoAttributes
1c0005030  void (* const ntoskrnl:RtlInitUnicodeString)(UNICODE_STRING* DestinationString, wchar16* SourceString) = RtlInitUnicodeString
1c0005038  void (* const ntoskrnl:KeInitializeSpinLock)(uint64_t* SpinLock) = KeInitializeSpinLock
1c0005040  void (* const ntoskrnl:IoDeleteDevice)(DEVICE_OBJECT* DeviceObject) = IoDeleteDevice
1c0005048  void (* const ntoskrnl:IoStartPacket)(DEVICE_OBJECT* DeviceObject, IRP* Irp, uint32_t* Key, DRIVER_CANCEL* CancelFunction) = IoStartPacket
1c0005050  void (* const ntoskrnl:KeLowerIrql)(uint64_t NewIrql) = KeLowerIrql
1c0005058  NTSTATUS (* const ntoskrnl:IoCsqInitialize)(IO_CSQ* Csq, PIO_CSQ_INSERT_IRP CsqInsertIrp, PIO_CSQ_REMOVE_IRP CsqRemoveIrp, PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp, PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock, PIO_CSQ_RELEASE_LOCK CsqReleaseLock, PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp) = IoCsqInitialize
1c0005060  void (* const ntoskrnl:ExAcquireFastMutex)(FAST_MUTEX* FastMutex) = ExAcquireFastMutex
1c0005068  BOOLEAN (* const ntoskrnl:KeRemoveEntryDeviceQueue)(KDEVICE_QUEUE* DeviceQueue, KDEVICE_QUEUE_ENTRY* DeviceQueueEntry) = KeRemoveEntryDeviceQueue
1c0005070  NTSTATUS (* const ntoskrnl:IoCreateDevice)(DRIVER_OBJECT* DriverObject, uint32_t DeviceExtensionSize, UNICODE_STRING* DeviceName, uint32_t DeviceType, uint32_t DeviceCharacteristics, BOOLEAN Exclusive, DEVICE_OBJECT** DeviceObject) = IoCreateDevice
1c0005078  void (* const ntoskrnl:IoAcquireCancelSpinLock)(uint8_t* Irql) = IoAcquireCancelSpinLock
1c0005080  void (* const ntoskrnl:KeInitializeEvent)(KEVENT* Event, EVENT_TYPE Type, BOOLEAN State) = KeInitializeEvent
1c0005088  uint8_t (* const ntoskrnl:KfRaiseIrql)(uint8_t NewIrql) = KfRaiseIrql
1c0005090  void (* const ntoskrnl:IofCompleteRequest)(IRP* Irp, char PriorityBoost) = IofCompleteRequest
1c0005098  void (* const ntoskrnl:IoReleaseCancelSpinLock)(uint8_t Irql) = IoReleaseCancelSpinLock
1c00050a0  NTSTATUS (* const ntoskrnl:IoGetRequestorSessionId)(IRP* Irp, uint32_t* pSessionId) = IoGetRequestorSessionId
1c00050a8  uint64_t (* const ntoskrnl:KeAcquireSpinLockRaiseToDpc)(void* SpinLock) = KeAcquireSpinLockRaiseToDpc
1c00050b0  void (* const ntoskrnl:KeReleaseSpinLock)(void* SpinLock, uint64_t NewIrql) = KeReleaseSpinLock
1c00050b8  IRP* (* const ntoskrnl:IoCsqRemoveNextIrp)(IO_CSQ* Csq, void* PeekContext) = IoCsqRemoveNextIrp
1c00050c0  void (* const ntoskrnl:IoCsqInsertIrp)(IO_CSQ* Csq, IRP* Irp, IO_CSQ_IRP_CONTEXT* Context) = IoCsqInsertIrp

1c00050c8  ntoskrnl_NULL_THUNK_DATA:
1c00050c8                          00 00 00 00 00 00 00 00                                                          ........

1c00050d0  void (* __guard_check_icall_fptr)(void (*)()) = _guard_check_icall_nop
1c00050d8  void (* __guard_dispatch_icall_fptr)(void (*)()) = _guard_dispatch_icall_nop
1c00050e0  struct Import_Directory_Table __IMPORT_DESCRIPTOR_ntoskrnl[0x2] = 
1c00050e0  {
1c00050e0      [0x0] = 
1c00050e0      {
1c00050e0          uint32_t importLookupTableRva = 0x5108
1c00050e4          uint32_t timeDateStamp = 0x0
1c00050e8          uint32_t forwarderChain = 0x0
1c00050ec          uint32_t nameRva = 0x5402
1c00050f0          uint32_t importAddressTableRva = 0x5000
1c00050f4      }
1c00050f4      [0x1] = 
1c00050f4      {
1c00050f4          uint32_t importLookupTableRva = 0x0
1c00050f8          uint32_t timeDateStamp = 0x0
1c00050fc          uint32_t forwarderChain = 0x0
1c0005100          uint32_t nameRva = 0x0
1c0005104          uint32_t importAddressTableRva = 0x0
1c0005108      }
1c0005108  }
1c0005108  uint64_t __import_lookup_table_0(ntoskrnl:IoStartNextPacket) = 0x51d8
1c0005110  uint64_t __import_lookup_table_0(ntoskrnl:KeRemoveDeviceQueue) = 0x51ec
1c0005118  uint64_t __import_lookup_table_0(ntoskrnl:MmUnlockPagableImageSection) = 0x5202
1c0005120  uint64_t __import_lookup_table_0(ntoskrnl:MmLockPagableDataSection) = 0x5220
1c0005128  uint64_t __import_lookup_table_0(ntoskrnl:ExReleaseFastMutex) = 0x523c
1c0005130  uint64_t __import_lookup_table_0(ntoskrnl:IoSetStartIoAttributes) = 0x5252
1c0005138  uint64_t __import_lookup_table_0(ntoskrnl:RtlInitUnicodeString) = 0x526c
1c0005140  uint64_t __import_lookup_table_0(ntoskrnl:KeInitializeSpinLock) = 0x5284
1c0005148  uint64_t __import_lookup_table_0(ntoskrnl:IoDeleteDevice) = 0x529c
1c0005150  uint64_t __import_lookup_table_0(ntoskrnl:IoStartPacket) = 0x52ae
1c0005158  uint64_t __import_lookup_table_0(ntoskrnl:KeLowerIrql) = 0x52be
1c0005160  uint64_t __import_lookup_table_0(ntoskrnl:IoCsqInitialize) = 0x52cc
1c0005168  uint64_t __import_lookup_table_0(ntoskrnl:ExAcquireFastMutex) = 0x52de
1c0005170  uint64_t __import_lookup_table_0(ntoskrnl:KeRemoveEntryDeviceQueue) = 0x52f4
1c0005178  uint64_t __import_lookup_table_0(ntoskrnl:IoCreateDevice) = 0x5310
1c0005180  uint64_t __import_lookup_table_0(ntoskrnl:IoAcquireCancelSpinLock) = 0x5322
1c0005188  uint64_t __import_lookup_table_0(ntoskrnl:KeInitializeEvent) = 0x533c
1c0005190  uint64_t __import_lookup_table_0(ntoskrnl:KfRaiseIrql) = 0x5350
1c0005198  uint64_t __import_lookup_table_0(ntoskrnl:IofCompleteRequest) = 0x535e
1c00051a0  uint64_t __import_lookup_table_0(ntoskrnl:IoReleaseCancelSpinLock) = 0x5374
1c00051a8  uint64_t __import_lookup_table_0(ntoskrnl:IoGetRequestorSessionId) = 0x538e
1c00051b0  uint64_t __import_lookup_table_0(ntoskrnl:KeAcquireSpinLockRaiseToDpc) = 0x53a8
1c00051b8  uint64_t __import_lookup_table_0(ntoskrnl:KeReleaseSpinLock) = 0x53c6
1c00051c0  uint64_t __import_lookup_table_0(ntoskrnl:IoCsqRemoveNextIrp) = 0x53da
1c00051c8  uint64_t __import_lookup_table_0(ntoskrnl:IoCsqInsertIrp) = 0x53f0
1c00051d0  uint64_t data_1c00051d0 = 0x0
1c00051d8  uint16_t __export_name_ptr_table_0(ntoskrnl:IoStartNextPacket) = 0x3d3
1c00051da  char __import_name_0(ntoskrnl:IoStartNextPacket)[0x12] = "IoStartNextPacket", 0
1c00051ec  uint16_t __export_name_ptr_table_0(ntoskrnl:KeRemoveDeviceQueue) = 0x4eb
1c00051ee  char __import_name_0(ntoskrnl:KeRemoveDeviceQueue)[0x14] = "KeRemoveDeviceQueue", 0
1c0005202  uint16_t __export_name_ptr_table_0(ntoskrnl:MmUnlockPagableImageSection) = 0x5c3
1c0005204  char __import_name_0(ntoskrnl:MmUnlockPagableImageSection)[0x1c] = "MmUnlockPagableImageSection", 0
1c0005220  uint16_t __export_name_ptr_table_0(ntoskrnl:MmLockPagableDataSection) = 0x592
1c0005222  char __import_name_0(ntoskrnl:MmLockPagableDataSection)[0x19] = "MmLockPagableDataSection", 0

1c000523b                                                                                   00                                         .

1c000523c  uint16_t __export_name_ptr_table_0(ntoskrnl:ExReleaseFastMutex) = 0x10f
1c000523e  char __import_name_0(ntoskrnl:ExReleaseFastMutex)[0x13] = "ExReleaseFastMutex", 0

1c0005251                                                     00                                                             .

1c0005252  uint16_t __export_name_ptr_table_0(ntoskrnl:IoSetStartIoAttributes) = 0x3cc
1c0005254  char __import_name_0(ntoskrnl:IoSetStartIoAttributes)[0x17] = "IoSetStartIoAttributes", 0

1c000526b                                   00                                                                         .

1c000526c  uint16_t __export_name_ptr_table_0(ntoskrnl:RtlInitUnicodeString) = 0x87e
1c000526e  char __import_name_0(ntoskrnl:RtlInitUnicodeString)[0x15] = "RtlInitUnicodeString", 0

1c0005283           00                                                                                         .

1c0005284  uint16_t __export_name_ptr_table_0(ntoskrnl:KeInitializeSpinLock) = 0x48b
1c0005286  char __import_name_0(ntoskrnl:KeInitializeSpinLock)[0x15] = "KeInitializeSpinLock", 0

1c000529b                                                                                   00                                         .

1c000529c  uint16_t __export_name_ptr_table_0(ntoskrnl:IoDeleteDevice) = 0x304
1c000529e  char __import_name_0(ntoskrnl:IoDeleteDevice)[0xf] = "IoDeleteDevice", 0

1c00052ad                                         00                                                                     .

1c00052ae  uint16_t __export_name_ptr_table_0(ntoskrnl:IoStartPacket) = 0x3d5
1c00052b0  char __import_name_0(ntoskrnl:IoStartPacket)[0xe] = "IoStartPacket", 0
1c00052be  uint16_t __export_name_ptr_table_0(ntoskrnl:KeLowerIrql) = 0x4a9
1c00052c0  char __import_name_0(ntoskrnl:KeLowerIrql)[0xc] = "KeLowerIrql", 0
1c00052cc  uint16_t __export_name_ptr_table_0(ntoskrnl:IoCsqInitialize) = 0x2fc
1c00052ce  char __import_name_0(ntoskrnl:IoCsqInitialize)[0x10] = "IoCsqInitialize", 0
1c00052de  uint16_t __export_name_ptr_table_0(ntoskrnl:ExAcquireFastMutex) = 0x87
1c00052e0  char __import_name_0(ntoskrnl:ExAcquireFastMutex)[0x13] = "ExAcquireFastMutex", 0

1c00052f3                                                           00                                                         .

1c00052f4  uint16_t __export_name_ptr_table_0(ntoskrnl:KeRemoveEntryDeviceQueue) = 0x4ec
1c00052f6  char __import_name_0(ntoskrnl:KeRemoveEntryDeviceQueue)[0x19] = "KeRemoveEntryDeviceQueue", 0

1c000530f                                               00                                                                 .

1c0005310  uint16_t __export_name_ptr_table_0(ntoskrnl:IoCreateDevice) = 0x2ec
1c0005312  char __import_name_0(ntoskrnl:IoCreateDevice)[0xf] = "IoCreateDevice", 0

1c0005321     00                                                                                             .

1c0005322  uint16_t __export_name_ptr_table_0(ntoskrnl:IoAcquireCancelSpinLock) = 0x2b8
1c0005324  char __import_name_0(ntoskrnl:IoAcquireCancelSpinLock)[0x18] = "IoAcquireCancelSpinLock", 0
1c000533c  uint16_t __export_name_ptr_table_0(ntoskrnl:KeInitializeEvent) = 0x483
1c000533e  char __import_name_0(ntoskrnl:KeInitializeEvent)[0x12] = "KeInitializeEvent", 0
1c0005350  uint16_t __export_name_ptr_table_0(ntoskrnl:KfRaiseIrql) = 0x532
1c0005352  char __import_name_0(ntoskrnl:KfRaiseIrql)[0xc] = "KfRaiseIrql", 0
1c000535e  uint16_t __export_name_ptr_table_0(ntoskrnl:IofCompleteRequest) = 0x40e
1c0005360  char __import_name_0(ntoskrnl:IofCompleteRequest)[0x13] = "IofCompleteRequest", 0

1c0005373                                                           00                                                         .

1c0005374  uint16_t __export_name_ptr_table_0(ntoskrnl:IoReleaseCancelSpinLock) = 0x394
1c0005376  char __import_name_0(ntoskrnl:IoReleaseCancelSpinLock)[0x18] = "IoReleaseCancelSpinLock", 0
1c000538e  uint16_t __export_name_ptr_table_0(ntoskrnl:IoGetRequestorSessionId) = 0x34c
1c0005390  char __import_name_0(ntoskrnl:IoGetRequestorSessionId)[0x18] = "IoGetRequestorSessionId", 0
1c00053a8  uint16_t __export_name_ptr_table_0(ntoskrnl:KeAcquireSpinLockRaiseToDpc) = 0x42f
1c00053aa  char __import_name_0(ntoskrnl:KeAcquireSpinLockRaiseToDpc)[0x1c] = "KeAcquireSpinLockRaiseToDpc", 0
1c00053c6  uint16_t __export_name_ptr_table_0(ntoskrnl:KeReleaseSpinLock) = 0x4e6
1c00053c8  char __import_name_0(ntoskrnl:KeReleaseSpinLock)[0x12] = "KeReleaseSpinLock", 0
1c00053da  uint16_t __export_name_ptr_table_0(ntoskrnl:IoCsqRemoveNextIrp) = 0x301
1c00053dc  char __import_name_0(ntoskrnl:IoCsqRemoveNextIrp)[0x13] = "IoCsqRemoveNextIrp", 0

1c00053ef                                               00                                                                 .

1c00053f0  uint16_t __export_name_ptr_table_0(ntoskrnl:IoCsqInsertIrp) = 0x2fe
1c00053f2  char __import_name_0(ntoskrnl:IoCsqInsertIrp)[0xf] = "IoCsqInsertIrp", 0

1c0005401     00                                                                                             .

1c0005402  char __import_dll_name(ntoskrnl)[0xd] = "ntoskrnl.exe", 0

1c000540f                                               00                                                                 .
.idata section ended  {0x1c0005000-0x1c0005410}

INIT section started  {0x1c0006000-0x1c0006072}
1c0006000  cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc cc                                                  ................

1c0006010    NTSTATUS GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)

1c0006010  48895c2408         mov     qword [rsp+0x8 {__saved_rbx}], rbx
1c0006015  57                 push    rdi {__saved_rdi}
1c0006016  4883ec20           sub     rsp, 0x20
1c000601a  488bda             mov     rbx, rdx
1c000601d  488bf9             mov     rdi, rcx
1c0006020  e81f000000         call    __security_init_cookie
1c0006025  488bd3             mov     rdx, rbx
1c0006028  488bcf             mov     rcx, rdi
1c000602b  e830b3ffff         call    DriverEntry
1c0006030  488b5c2430         mov     rbx, qword [rsp+0x30 {__saved_rbx}]
1c0006035  4883c420           add     rsp, 0x20
1c0006039  5f                 pop     rdi {__saved_rdi}
1c000603a  c3                 retn     {__return_addr}

1c000603b                                                                                   cc cc cc cc cc                             .....
1c0006040  cc cc cc cc                                                                                      ....

1c0006044    uint64_t __security_init_cookie()

1c0006044  488b05b5cfffff     mov     rax, qword [rel __security_cookie]
1c000604b  4885c0             test    rax, rax
1c000604e  741b               je      0x1c000606b

1c0006050  48b932a2df2d992b…  mov     rcx, 0x2b992ddfa232
1c000605a  483bc1             cmp     rax, rcx
1c000605d  740c               je      0x1c000606b

1c000605f  48f7d0             not     rax
1c0006062  4889059fcfffff     mov     qword [rel __security_cookie_complement], rax
1c0006069  c3                 retn     {__return_addr}

1c000606a                                cc                                                                           .

1c000606b  b906000000         mov     ecx, 0x6
1c0006070  cd29               int     0x29
{ Does not return }

INIT section ended  {0x1c0006000-0x1c0006072}

GFIDS section started  {0x1c0007000-0x1c0007040}
1c0007000  uint32_t __guard_fids_table[0x10] = 
1c0007000  {
1c0007000      [0x0] =  0x00001010
1c0007004      [0x1] =  0x00001040
1c0007008      [0x2] =  0x00001070
1c000700c      [0x3] =  0x000011b0
1c0007010      [0x4] =  0x00001230
1c0007014      [0x5] =  0x00001290
1c0007018      [0x6] =  0x00001300
1c000701c      [0x7] =  0x00001330
1c0007020      [0x8] =  0x000014f0
1c0007024      [0x9] =  0x00001510
1c0007028      [0xa] =  0x000015d0
1c000702c      [0xb] =  0x000015e0
1c0007030      [0xc] =  0x00001790
1c0007034      [0xd] =  0x00001810
1c0007038      [0xe] =  0x000018e0
1c000703c      [0xf] =  0x00006010
1c0007040  }
GFIDS section ended  {0x1c0007000-0x1c0007040}

.rsrc section started  {0x1c0008000-0x1c00083e0}
1c0008000  struct Resource_Directory_Table __resource_directory_table_0 = 
1c0008000  {
1c0008000      uint32_t characteristics = 0x0
1c0008004      uint32_t timeDateStamp = 0x0
1c0008008      uint16_t majorVersion = 0x0
1c000800a      uint16_t minorVersion = 0x0
1c000800c      uint16_t numNameEntries = 0x0
1c000800e      uint16_t numIdEntries = 0x1
1c0008010  }
1c0008010  struct Resource_Directory_Table_Entry __resource_directory_table_0_entries[0x1] = 
1c0008010  {
1c0008010      [0x0] = 
1c0008010      {
1c0008010          uint32_t id = 0x10
1c0008014          uint32_t offset = 0x80000018
1c0008018      }
1c0008018  }
1c0008018  struct Resource_Directory_Table __resource_directory_table_1 = 
1c0008018  {
1c0008018      uint32_t characteristics = 0x0
1c000801c      uint32_t timeDateStamp = 0x0
1c0008020      uint16_t majorVersion = 0x0
1c0008022      uint16_t minorVersion = 0x0
1c0008024      uint16_t numNameEntries = 0x0
1c0008026      uint16_t numIdEntries = 0x1
1c0008028  }
1c0008028  struct Resource_Directory_Table_Entry __resource_directory_table_1_entries[0x1] = 
1c0008028  {
1c0008028      [0x0] = 
1c0008028      {
1c0008028          uint32_t id = 0x1
1c000802c          uint32_t offset = 0x80000030
1c0008030      }
1c0008030  }
1c0008030  struct Resource_Directory_Table __resource_directory_table_2 = 
1c0008030  {
1c0008030      uint32_t characteristics = 0x0
1c0008034      uint32_t timeDateStamp = 0x0
1c0008038      uint16_t majorVersion = 0x0
1c000803a      uint16_t minorVersion = 0x0
1c000803c      uint16_t numNameEntries = 0x0
1c000803e      uint16_t numIdEntries = 0x1
1c0008040  }
1c0008040  struct Resource_Directory_Table_Entry __resource_directory_table_2_entries[0x1] = 
1c0008040  {
1c0008040      [0x0] = 
1c0008040      {
1c0008040          uint32_t id = 0x409
1c0008044          uint32_t offset = 0x48
1c0008048      }
1c0008048  }
1c0008048  struct Resource_Data_Entry __resource_directory_table_2_data_entry_0 = 
1c0008048  {
1c0008048      uint32_t dataRva = 0x8060
1c000804c      uint32_t dataSize = 0x37c
1c0008050      uint32_t codepage = 0x0
1c0008054      uint32_t reserved = 0x0
1c0008058  }

1c0008058                                                                          00 00 00 00 00 00 00 00                          ........

1c0008060  char data_1c0008060[0x37c] = "l\x034\x00\x00\x00V\x00S\x00_\x00V\x00E\x00R\x00S\x00I\x00O\x00N\x00_\x00I\x00N\x00F\x00O\x00\x00\x00\x00\x00\xbd\x04\xef\xfe\x00\x00\x01\x00\x00\x00\n"
1c0008060      "\x00\x01\x00aJ\x00\x00\n"
1c0008060      "\x00\x01\x00aJ?\x00\x00\x00\x00\x00\x00\x00\x04\x00\x04\x00\x03\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xca\x02\x00\x00\x01\x00S\x00t\x00r\x00i\x00n\x00g\x00F\x00i\x00l\x00e\x00I\x00n\x00f\x00o\x00\x00\x00\xa6\x02\x00\x00\x01\x000\x004\x000\x009\x000\x004\x00B\x000\x00\x00\x00L\x00\x16\x00\x01\x00C\x00o\x00m\x00p\x00a\x00n\x00y\x00N\x00a\x00m\x00e\x00\x00\x00\x00\x00M\x00i\x00c\x00r\x00o\x00s\x00o\x00f\x00t\x00 \x00C\x00o\x00r\x00p\x00o\x00r\x00a\x00t\x00i\x00o\x00n\x00\x00\x00@\x00\x0c\x00\x01\x00F\x00i\x00l\x00e\x00D\x00e\x00s\x00c\x00r\x00i\x00p\x00t\x00i\x00o\x00n\x00\x00\x00\x00\x00B\x00E\x00E\x00P\x00 \x00D\x00r\x00i\x00v\x00e\x00r\x00\x00\x00h\x00$\x00\x01\x00F\x00i\x00l\x00e\x00V\x00e\x00r\x00s\x00i\x00o\x00n\x00\x00\x00\x00\x001\x000\x00.\x000\x00.\x001\x009\x000\x004\x001\x00.\x001\x00 \x00(\x00W\x00i\x00n\x00B\x00u\x00i\x00l\x00d\x00.\x001\x006\x000\x001\x000\x001\x00.\x000\x008\x000\x000\x00)\x00\x00\x002\x00\t\x00\x01\x00I\x00n\x00t\x00e\x00r\x00n\x00a\x00l\x00N\x00a\x00m\x00e\x00\x00\x00b\x00e\x00e\x00p\x00.\x00s\x00y\x00s\x00\x00\x00\x00\x00\x80\x00.\x00\x01\x00L\x00e\x00g\x00a\x00l\x00C\x00o\x00p\x00y\x00r\x00i\x00g\x00h\x00t\x00\x00\x00\xa9\x00 \x00M\x00i\x00c\x00r\x00o\x00s\x00o\x00f\x00t\x00 \x00C\x00o\x00r\x00p\x00o\x00r\x00a\x00t\x00i\x00o\x00n\x00.\x00 \x00A\x00l\x00l\x00 \x00r\x00i\x00g\x00h\x00t\x00s\x00 \x00r\x00e\x00s\x00e\x00r\x00v\x00e\x00d\x00.\x00\x00\x00:\x00\t\x00\x01\x00O\x00r\x00i\x00g\x00i\x00n\x00a\x00l\x00F\x00i\x00l\x00e\x00n\x00a\x00m\x00e\x00\x00\x00b\x00e\x00e\x00p\x00.\x00s\x00y\x00s\x00\x00\x00\x00\x00j\x00%\x00\x01\x00P\x00r\x00o\x00d\x00u\x00c\x00t\x00N\x00a\x00m\x00e\x00\x00\x00\x00\x00M\x00i\x00c\x00r\x00o\x00s\x00o\x00f\x00t\x00\xae\x00 \x00W\x00i\x00n\x00d\x00o\x00w\x00s\x00\xae\x00 \x00O\x00p\x00e\x00r\x00a\x00t\x00i\x00n\x00g\x00 \x00S\x00y\x00s\x00t\x00e\x00m\x00\x00\x00\x00\x00>\x00\r"
1c0008060      "\x00\x01\x00P\x00r\x00o\x00d\x00u\x00c\x00t\x00V\x00e\x00r\x00s\x00i\x00o\x00n\x00\x00\x001\x000\x00.\x000\x00.\x001\x009\x000\x004\x001\x00.\x001\x00\x00\x00\x00\x00D\x00\x00\x00\x01\x00V\x00a\x00r\x00F\x00i\x00l\x00e\x00I\x00n\x00f\x00o\x00\x00\x00\x00\x00$\x00\x04\x00\x00\x00T\x00r\x00a\x00n\x00s\x00l\x00a\x00t\x00i\x00o\x00n\x00\x00\x00\x00\x00\t\x04\xb0\x04\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0

1c00083dc                                                                                      00 00 00 00                              ....
.rsrc section ended  {0x1c0008000-0x1c00083e0}

.reloc section started  {0x1c0009000-0x1c0009108}
1c0009000  00 20 00 00 10 00 00 00 58 a0 70 a0 78 a0 80 a0 00 50 00 00 0c 00 00 00 d0 a0 d8 a0 01 00 00 00  . ......X.p.x....P..............
1c0009020  e4 00 00 00 03 00 00 00 00 00 00 00 c0 00 00 00 00 10 00 00 c0 00 00 00 58 50 02 00 8a 30 02 00  ........................XP...0..
1c0009040  9e f0 01 00 c3 70 02 00 d3 50 01 00 fd 50 02 00 50 91 02 00 6e f1 02 00 c4 91 01 00 da 51 00 00  .....p...P...P..P...n........Q..
1c0009060  e9 91 00 00 03 52 02 00 e0 12 03 00 3d b3 02 00 88 d3 00 00 bc d3 01 00 fe 13 02 00 1c f4 00 00  .....R......=...................
1c0009080  65 74 01 00 cf b4 00 00 f8 d4 02 00 24 95 01 00 40 75 00 00 53 95 00 00 6d 55 02 00 17 36 00 00  et..........$...@u..S...mU...6..
1c00090a0  48 76 02 00 59 56 02 00 6a f6 01 00 a5 56 02 00 c9 96 02 00 38 57 02 00 67 37 01 00 a3 77 02 00  Hv..YV..j....V......8W..g7...w..
1c00090c0  bc b7 01 00 d0 77 02 00 f0 57 02 00 2a f8 01 00 40 78 02 00 59 78 02 00 a2 18 00 00 b3 58 02 00  .....w...W..*...@x..Yx.......X..
1c00090e0  fd f8 02 00 22 59 02 00 39 f9 02 00 4d 19 01 00 04 00 00 00 00 00 00 00 0c 00 00 00 00 10 00 00  ...."Y..9...M...................
1c0009100  0c 00 00 00 00 06 00 00                                                                          ........
.reloc section ended  {0x1c0009000-0x1c0009108}

.extern section started  {0x1c0009110-0x1c00091d8}
1c0009110  extern void ExAcquireFastMutex(FAST_MUTEX* FastMutex)
1c0009118  extern void ExReleaseFastMutex(FAST_MUTEX* FastMutex)
1c0009120  extern void IoAcquireCancelSpinLock(uint8_t* Irql)
1c0009128  extern NTSTATUS IoCreateDevice(DRIVER_OBJECT* DriverObject, uint32_t DeviceExtensionSize, UNICODE_STRING* DeviceName, uint32_t DeviceType, uint32_t DeviceCharacteristics, BOOLEAN Exclusive, DEVICE_OBJECT** DeviceObject)
1c0009130  extern NTSTATUS IoCsqInitialize(IO_CSQ* Csq, PIO_CSQ_INSERT_IRP CsqInsertIrp, PIO_CSQ_REMOVE_IRP CsqRemoveIrp, PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp, PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock, PIO_CSQ_RELEASE_LOCK CsqReleaseLock, PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp)
1c0009138  extern void IoCsqInsertIrp(IO_CSQ* Csq, IRP* Irp, IO_CSQ_IRP_CONTEXT* Context)
1c0009140  extern IRP* IoCsqRemoveNextIrp(IO_CSQ* Csq, void* PeekContext)
1c0009148  extern void IoDeleteDevice(DEVICE_OBJECT* DeviceObject)
1c0009150  extern NTSTATUS IoGetRequestorSessionId(IRP* Irp, uint32_t* pSessionId)
1c0009158  extern void IoReleaseCancelSpinLock(uint8_t Irql)
1c0009160  extern void IoSetStartIoAttributes(DEVICE_OBJECT* DeviceObject, BOOLEAN DeferredStartIo, BOOLEAN NonCancelable)
1c0009168  extern void IoStartNextPacket(DEVICE_OBJECT* DeviceObject, BOOLEAN Cancelable)
1c0009170  extern void IoStartPacket(DEVICE_OBJECT* DeviceObject, IRP* Irp, uint32_t* Key, DRIVER_CANCEL* CancelFunction)
1c0009178  extern void IofCompleteRequest(IRP* Irp, char PriorityBoost)
1c0009180  extern uint64_t KeAcquireSpinLockRaiseToDpc(void* SpinLock)
1c0009188  extern void KeInitializeEvent(KEVENT* Event, EVENT_TYPE Type, BOOLEAN State)
1c0009190  extern void KeInitializeSpinLock(uint64_t* SpinLock)
1c0009198  extern void KeLowerIrql(uint64_t NewIrql)
1c00091a0  extern void KeReleaseSpinLock(void* SpinLock, uint64_t NewIrql)
1c00091a8  extern KDEVICE_QUEUE_ENTRY* KeRemoveDeviceQueue(KDEVICE_QUEUE* DeviceQueue)
1c00091b0  extern BOOLEAN KeRemoveEntryDeviceQueue(KDEVICE_QUEUE* DeviceQueue, KDEVICE_QUEUE_ENTRY* DeviceQueueEntry)
1c00091b8  extern uint8_t KfRaiseIrql(uint8_t NewIrql)
1c00091c0  extern void* MmLockPagableDataSection(void* AddressWithinSection)
1c00091c8  extern void MmUnlockPagableImageSection(void* ImageSectionHandle)
1c00091d0  extern void RtlInitUnicodeString(UNICODE_STRING* DestinationString, wchar16* SourceString)
.extern section ended  {0x1c0009110-0x1c00091d8}

.synthetic_builtins section started  {0x1c00091e0-0x1c0009210}
1c00091e0  extern void* __builtin_memcpy(void* dest, void const* src, uint64_t count)
1c00091e8  extern void* __builtin_memset(void* dest, int32_t ch, uint64_t count)
1c00091f0  extern char* __builtin_strcpy(char* dest, char const* src)
1c00091f8  extern char* __builtin_strncpy(char* dest, char const* src, uint64_t count)
1c0009200  extern wchar16* __builtin_wcscpy(wchar16* dest, wchar16 const* src)
1c0009208  extern wchar16* __builtin_wmemcpy(wchar16* dest, wchar16 const* src, uint64_t count)
.synthetic_builtins section ended  {0x1c00091e0-0x1c0009210}


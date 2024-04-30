
struct s0 {
    signed char[32] pad32;
    int64_t f20;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1 {
    signed char[24] pad24;
    struct s2* f18;
    signed char[16] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
    signed char[40] pad104;
    int64_t f68;
    signed char[72] pad184;
    struct s3* fb8;
};

int64_t IoGetRequestorSessionId = 0x538e;

int64_t IoCsqRemoveNextIrp = 0x53da;

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    signed char[24] pad24;
    struct s5* f18;
    signed char[16] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
};

int64_t IofCompleteRequest = 0x535e;

int32_t fun_1c0001120(struct s0* rcx, struct s1* rdx, int32_t r8d, int32_t r9d) {
    int32_t eax5;
    int32_t ebx6;
    struct s4* rax7;
    struct s5* rcx8;

    eax5 = reinterpret_cast<int32_t>(IoGetRequestorSessionId(rdx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 32));
    ebx6 = eax5;
    if (eax5 >= 0) {
        rax7 = reinterpret_cast<struct s4*>(IoCsqRemoveNextIrp());
        if (rax7) {
            rcx8 = rax7->f18;
            rcx8->f0 = r8d;
            rcx8->f4 = r9d;
            rax7->f30 = 0;
            rax7->f38 = 8;
            IofCompleteRequest(rax7);
        } else {
            ebx6 = 0xc0000225;
        }
        eax5 = ebx6;
    }
    return eax5;
}

signed char* g1c0003000 = reinterpret_cast<signed char*>(0x2b992ddfa232);

int64_t g1c0003008 = 0xffffd466d2205dcd;

void fun_1c0006044() {
    signed char* rax1;

    rax1 = g1c0003000;
    if (!rax1 || rax1 == 0x2b992ddfa232) {
        __asm__("int 0x29");
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
    } else {
        g1c0003008 = ~reinterpret_cast<int64_t>(rax1);
        return;
    }
}

struct s6 {
    signed char[96] pad96;
    int64_t f60;
    int64_t f68;
    int64_t f70;
    signed char[8] pad128;
    int64_t f80;
    signed char[88] pad224;
    int64_t fe0;
    signed char[24] pad256;
    int64_t f100;
};

int64_t RtlInitUnicodeString = 0x526c;

int64_t IoCreateDevice = 0x5310;

uint32_t g30;

struct s8 {
    struct s8* f0;
    struct s8* f8;
};

struct s7 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    signed char[36] pad56;
    int32_t f38;
    signed char[20] pad80;
    struct s8* f50;
};

struct s7* g40;

int64_t KeInitializeEvent = 0x533c;

int64_t KeInitializeSpinLock = 0x5284;

int64_t IoCsqInitialize = 0x52cc;

struct s10 {
    struct s10* f0;
    struct s10* f8;
    signed char[32] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
    signed char[5] pad69;
    unsigned char f45;
};

struct s9 {
    signed char[168] pad168;
    struct s10* fa8;
};

int64_t fun_1c0001300(int64_t rcx, struct s9* rdx);

void fun_1c0001010();

struct s11 {
    signed char[168] pad168;
    void** fa8;
};

int64_t fun_1c0001230(int64_t rcx, struct s11* rdx, int64_t r8);

void fun_1c0001810(struct s0* rcx, struct s1* rdx);

struct s13 {
    signed char[64] pad64;
    int64_t f40;
};

struct s12 {
    signed char[8] pad8;
    struct s13* f8;
};

void fun_1c00018e0(struct s12* rcx);

struct s15 {
    signed char[56] pad56;
    int32_t f38;
    signed char[4] pad64;
    int64_t f40;
};

struct s14 {
    signed char[64] pad64;
    struct s15* f40;
};

struct s16 {
    signed char[48] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
};

int64_t fun_1c0001510(struct s14* rcx, struct s16* rdx);

struct s18 {
    signed char[56] pad56;
    int32_t f38;
    signed char[4] pad64;
    int64_t f40;
};

struct s17 {
    signed char[64] pad64;
    struct s18* f40;
};

struct s19 {
    signed char[48] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
};

int64_t fun_1c00011b0(struct s17* rcx, struct s19* rdx);

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    signed char[3] pad3;
    unsigned char f3;
    signed char[4] pad8;
    uint32_t f8;
    signed char[4] pad16;
    uint32_t f10;
    signed char[4] pad24;
    int32_t f18;
};

struct s20 {
    signed char[24] pad24;
    struct s21* f18;
    signed char[16] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
    signed char[120] pad184;
    struct s22* fb8;
};

void fun_1c0001290(int64_t rcx, struct s20* rdx);

int64_t fun_1c0001070(struct s0* rcx, struct s1* rdx);

int64_t IoSetStartIoAttributes = 0x5252;

int64_t fun_1c0001360(struct s6* rcx, int64_t rdx) {
    void* rsp3;
    int64_t rax4;
    struct s7* rdi5;
    struct s8* rax6;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 80);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [rsp+0x40], xmm0");
    RtlInitUnicodeString(reinterpret_cast<int64_t>(rsp3) + 64, "\\");
    rax4 = reinterpret_cast<int64_t>(IoCreateDevice(rcx, 0xa0, reinterpret_cast<int64_t>(rsp3) - 8 + 8 + 64, 1));
    if (!*reinterpret_cast<int32_t*>(&rax4) && (g30 = g30 | 4, rdi5 = g40, rdi5->f0 = 1, rdi5->f8 = 0, rdi5->f10 = 0, KeInitializeEvent(reinterpret_cast<int64_t>(rdi5) + 24, 1), rax6 = reinterpret_cast<struct s8*>(&rdi5->f50), rdi5->f38 = 0, rax6->f8 = rax6, rax6->f0 = rax6, KeInitializeSpinLock(reinterpret_cast<int64_t>(rdi5) + 72, 1), rax4 = reinterpret_cast<int64_t>(IoCsqInitialize(reinterpret_cast<int64_t>(rdi5) + 96, fun_1c0001300, fun_1c0001010, fun_1c0001230)), !*reinterpret_cast<int32_t*>(&rax4))) {
        rcx->f60 = reinterpret_cast<int64_t>(fun_1c0001810);
        rcx->f68 = reinterpret_cast<int64_t>(fun_1c00018e0);
        rcx->f70 = reinterpret_cast<int64_t>(fun_1c0001510);
        rcx->f80 = reinterpret_cast<int64_t>(fun_1c00011b0);
        rcx->fe0 = reinterpret_cast<int64_t>(fun_1c0001290);
        rcx->f100 = reinterpret_cast<int64_t>(fun_1c0001070);
        IoSetStartIoAttributes(0, 0x1c0001301);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    }
    return rax4;
}

struct s23 {
    struct s23* f0;
    struct s23* f8;
    signed char[32] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
};

struct s24 {
    signed char[168] pad168;
    struct s23* fa8;
};

void fun_1c0001010() {
    struct s23* rdx1;
    struct s24* rdx2;
    struct s23* rcx3;
    struct s23* rax4;

    rdx1 = reinterpret_cast<struct s23*>(&rdx2->fa8);
    rcx3 = rdx1->f0;
    if (rcx3->f8 != rdx1 || (rax4 = rdx1->f8, rax4->f0 != rdx1)) {
        __asm__("int 0x29");
        rdx1->f30 = 0xc0000120;
        rdx1->f38 = 0;
        IofCompleteRequest(rdx1);
        return;
    } else {
        rax4->f0 = rcx3;
        rcx3->f8 = rax4;
        return;
    }
}

int64_t fun_1c0006010(struct s6* rcx, int64_t rdx) {
    int64_t rax3;

    fun_1c0006044();
    rax3 = fun_1c0001360(rcx, rdx);
    return rax3;
}

int64_t ExAcquireFastMutex = 0x52de;

int64_t MmUnlockPagableImageSection = 0x5202;

int64_t ExReleaseFastMutex = 0x523c;

int64_t fun_1c00011b0(struct s17* rcx, struct s19* rdx) {
    struct s18* rbx3;
    int64_t rcx4;

    rbx3 = rcx->f40;
    ExAcquireFastMutex(rbx3);
    rbx3->f38 = rbx3->f38 - 1;
    if (!rbx3->f38) {
        rcx4 = rbx3->f40;
        MmUnlockPagableImageSection(rcx4);
    }
    ExReleaseFastMutex(rbx3);
    rdx->f30 = 0;
    rdx->f38 = 0;
    IofCompleteRequest(rdx);
    return 0;
}

int64_t fun_1c0001230(int64_t rcx, struct s11* rdx, int64_t r8) {
    void* rsp4;
    int64_t rsi5;
    void** rbx6;
    void** rdi7;
    int32_t eax8;
    int64_t rax9;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    rsi5 = r8;
    rbx6 = reinterpret_cast<void**>(rcx - 16);
    if (rdx) {
        rdi7 = rdx->fa8;
    } else {
        rdi7 = *reinterpret_cast<void***>(rbx6);
    }
    if (rdi7 != rbx6) {
        do {
            eax8 = reinterpret_cast<int32_t>(IoGetRequestorSessionId(rdi7 - 21, reinterpret_cast<int64_t>(rsp4) + 48));
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            if (eax8 < 0) 
                break;
            if (!*reinterpret_cast<int32_t*>(&rsi5)) 
                break;
            if (*reinterpret_cast<int32_t*>(&rsi5) == -1) 
                break;
            rdi7 = *reinterpret_cast<void***>(rdi7);
        } while (rdi7 != rbx6);
        goto addr_1c00016ec_10;
    } else {
        *reinterpret_cast<int32_t*>(&rax9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        goto addr_1c0001261_12;
    }
    rax9 = reinterpret_cast<int64_t>(rdi7 - 21);
    addr_1c00016f7_14:
    addr_1c0001261_12:
    return rax9;
    addr_1c00016ec_10:
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    goto addr_1c00016f7_14;
}

struct s10* g23;

int64_t KeRemoveEntryDeviceQueue = 0x52f4;

int64_t IoReleaseCancelSpinLock = 0x5374;

int64_t fun_1c0001300(int64_t rcx, struct s9* rdx) {
    struct s10* rcx3;
    struct s10* rax4;
    struct s10* rdx5;
    int1_t zf6;
    signed char al7;
    int64_t rcx8;
    int64_t rax9;

    rcx3 = reinterpret_cast<struct s10*>(rcx - 16);
    rax4 = reinterpret_cast<struct s10*>(&rdx->fa8);
    rdx5 = rcx3->f8;
    if (rdx5->f0 == rcx3) {
        rax4->f0 = rcx3;
        rax4->f8 = rdx5;
        rdx5->f0 = rax4;
        rcx3->f8 = rax4;
        return 0;
    }
    __asm__("int 0x29");
    zf6 = rdx5 == g23;
    if (!zf6) {
        al7 = reinterpret_cast<signed char>(KeRemoveEntryDeviceQueue());
        *reinterpret_cast<uint32_t*>(&rcx8) = rdx5->f45;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
        if (!al7) {
            addr_1c00017a3_5:
            rax9 = reinterpret_cast<int64_t>(IoReleaseCancelSpinLock(rcx8));
        } else {
            IoReleaseCancelSpinLock(rcx8);
            rdx5->f30 = 0xc0000120;
            rdx5->f38 = 0;
            rax9 = reinterpret_cast<int64_t>(IofCompleteRequest(rdx5));
        }
        return rax9;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx8) = rdx5->f45;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
        goto addr_1c00017a3_5;
    }
}

int64_t KeAcquireSpinLockRaiseToDpc = 0x53a8;

void fun_1c0001330(int64_t rcx, signed char* rdx) {
    signed char al3;

    al3 = reinterpret_cast<signed char>(KeAcquireSpinLockRaiseToDpc());
    *rdx = al3;
    return;
}

void fun_1c00015a0(signed char* rcx) {
    int1_t zf2;

    zf2 = rcx == g1c0003000;
    if (zf2) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return;
        }
    }
    __asm__("int 0x29");
    return;
}

void fun_1c0001965() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;
    signed char* rax19;
    signed char* rax20;
    signed char al21;
    signed char* rax22;
    signed char* rax23;
    signed char al24;
    signed char* rax25;
    signed char* rax26;
    signed char al27;
    signed char* rax28;
    signed char* rax29;
    signed char al30;
    signed char* rax31;
    signed char* rax32;
    signed char al33;
    signed char* rax34;
    signed char* rax35;
    signed char al36;
    signed char* rax37;
    signed char* rax38;
    signed char al39;
    signed char* rax40;
    signed char* rax41;
    signed char al42;
    signed char* rax43;
    signed char* rax44;
    signed char al45;
    signed char* rax46;
    signed char* rax47;
    signed char al48;
    signed char* rax49;
    signed char* rax50;
    signed char al51;
    signed char* rax52;
    signed char* rax53;
    signed char al54;
    signed char* rax55;
    signed char* rax56;
    signed char al57;
    signed char* rax58;
    signed char* rax59;
    signed char al60;
    signed char* rax61;
    signed char* rax62;
    signed char al63;
    signed char* rax64;
    signed char* rax65;
    signed char al66;
    signed char* rax67;
    signed char* rax68;
    signed char al69;
    signed char* rax70;
    signed char* rax71;
    signed char al72;
    signed char* rax73;
    signed char* rax74;
    signed char al75;
    signed char* rax76;
    signed char* rax77;
    signed char al78;
    signed char* rax79;
    signed char* rax80;
    signed char al81;
    signed char* rax82;
    signed char* rax83;
    signed char al84;
    signed char* rax85;
    signed char* rax86;
    signed char al87;
    signed char* rax88;
    signed char* rax89;
    signed char al90;
    signed char* rax91;
    signed char* rax92;
    signed char al93;
    signed char* rax94;
    signed char* rax95;
    signed char al96;
    signed char* rax97;
    signed char* rax98;
    signed char al99;
    signed char* rax100;
    signed char* rax101;
    signed char al102;
    signed char* rax103;
    signed char* rax104;
    signed char al105;
    signed char* rax106;
    signed char* rax107;
    signed char al108;
    signed char* rax109;
    signed char* rax110;
    signed char al111;
    signed char* rax112;
    signed char* rax113;
    signed char al114;
    signed char* rax115;
    signed char* rax116;
    signed char al117;
    signed char* rax118;
    signed char* rax119;
    signed char al120;
    signed char* rax121;
    signed char* rax122;
    signed char al123;
    signed char* rax124;
    signed char* rax125;
    signed char al126;
    signed char* rax127;
    signed char* rax128;
    signed char al129;
    signed char* rax130;
    signed char* rax131;
    signed char al132;
    signed char* rax133;
    signed char* rax134;
    signed char al135;
    signed char* rax136;
    signed char* rax137;
    signed char al138;
    signed char* rax139;
    signed char* rax140;
    signed char al141;
    signed char* rax142;
    signed char* rax143;
    signed char al144;
    signed char* rax145;
    signed char* rax146;
    signed char al147;
    signed char* rax148;
    signed char* rax149;
    signed char al150;
    signed char* rax151;
    signed char* rax152;
    signed char al153;
    signed char* rax154;
    signed char* rax155;
    signed char al156;
    signed char* rax157;
    signed char* rax158;
    signed char al159;
    signed char* rax160;
    signed char* rax161;
    signed char al162;
    signed char* rax163;
    signed char* rax164;
    signed char al165;
    signed char* rax166;
    signed char* rax167;
    signed char al168;
    signed char* rax169;
    signed char* rax170;
    signed char al171;
    signed char* rax172;
    signed char* rax173;
    signed char al174;
    signed char* rax175;
    signed char* rax176;
    signed char al177;
    signed char* rax178;
    signed char* rax179;
    signed char al180;
    signed char* rax181;
    signed char* rax182;
    signed char al183;
    signed char* rax184;
    signed char* rax185;
    signed char al186;
    signed char* rax187;
    signed char* rax188;
    signed char al189;
    signed char* rax190;
    signed char* rax191;
    signed char al192;
    signed char* rax193;
    signed char* rax194;
    signed char al195;
    signed char* rax196;
    signed char* rax197;
    signed char al198;
    signed char* rax199;
    signed char* rax200;
    signed char al201;
    signed char* rax202;
    signed char* rax203;
    signed char al204;
    signed char* rax205;
    signed char* rax206;
    signed char al207;
    signed char* rax208;
    signed char* rax209;
    signed char al210;
    signed char* rax211;
    signed char* rax212;
    signed char al213;
    signed char* rax214;
    signed char* rax215;
    signed char al216;
    signed char* rax217;
    signed char* rax218;
    signed char al219;
    signed char* rax220;
    signed char* rax221;
    signed char al222;
    signed char* rax223;
    signed char* rax224;
    signed char al225;
    signed char* rax226;
    signed char* rax227;
    signed char al228;
    signed char* rax229;
    signed char* rax230;
    signed char al231;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    *rax19 = reinterpret_cast<signed char>(*rax20 + al21);
    *rax22 = reinterpret_cast<signed char>(*rax23 + al24);
    *rax25 = reinterpret_cast<signed char>(*rax26 + al27);
    *rax28 = reinterpret_cast<signed char>(*rax29 + al30);
    *rax31 = reinterpret_cast<signed char>(*rax32 + al33);
    *rax34 = reinterpret_cast<signed char>(*rax35 + al36);
    *rax37 = reinterpret_cast<signed char>(*rax38 + al39);
    *rax40 = reinterpret_cast<signed char>(*rax41 + al42);
    *rax43 = reinterpret_cast<signed char>(*rax44 + al45);
    *rax46 = reinterpret_cast<signed char>(*rax47 + al48);
    *rax49 = reinterpret_cast<signed char>(*rax50 + al51);
    *rax52 = reinterpret_cast<signed char>(*rax53 + al54);
    *rax55 = reinterpret_cast<signed char>(*rax56 + al57);
    *rax58 = reinterpret_cast<signed char>(*rax59 + al60);
    *rax61 = reinterpret_cast<signed char>(*rax62 + al63);
    *rax64 = reinterpret_cast<signed char>(*rax65 + al66);
    *rax67 = reinterpret_cast<signed char>(*rax68 + al69);
    *rax70 = reinterpret_cast<signed char>(*rax71 + al72);
    *rax73 = reinterpret_cast<signed char>(*rax74 + al75);
    *rax76 = reinterpret_cast<signed char>(*rax77 + al78);
    *rax79 = reinterpret_cast<signed char>(*rax80 + al81);
    *rax82 = reinterpret_cast<signed char>(*rax83 + al84);
    *rax85 = reinterpret_cast<signed char>(*rax86 + al87);
    *rax88 = reinterpret_cast<signed char>(*rax89 + al90);
    *rax91 = reinterpret_cast<signed char>(*rax92 + al93);
    *rax94 = reinterpret_cast<signed char>(*rax95 + al96);
    *rax97 = reinterpret_cast<signed char>(*rax98 + al99);
    *rax100 = reinterpret_cast<signed char>(*rax101 + al102);
    *rax103 = reinterpret_cast<signed char>(*rax104 + al105);
    *rax106 = reinterpret_cast<signed char>(*rax107 + al108);
    *rax109 = reinterpret_cast<signed char>(*rax110 + al111);
    *rax112 = reinterpret_cast<signed char>(*rax113 + al114);
    *rax115 = reinterpret_cast<signed char>(*rax116 + al117);
    *rax118 = reinterpret_cast<signed char>(*rax119 + al120);
    *rax121 = reinterpret_cast<signed char>(*rax122 + al123);
    *rax124 = reinterpret_cast<signed char>(*rax125 + al126);
    *rax127 = reinterpret_cast<signed char>(*rax128 + al129);
    *rax130 = reinterpret_cast<signed char>(*rax131 + al132);
    *rax133 = reinterpret_cast<signed char>(*rax134 + al135);
    *rax136 = reinterpret_cast<signed char>(*rax137 + al138);
    *rax139 = reinterpret_cast<signed char>(*rax140 + al141);
    *rax142 = reinterpret_cast<signed char>(*rax143 + al144);
    *rax145 = reinterpret_cast<signed char>(*rax146 + al147);
    *rax148 = reinterpret_cast<signed char>(*rax149 + al150);
    *rax151 = reinterpret_cast<signed char>(*rax152 + al153);
    *rax154 = reinterpret_cast<signed char>(*rax155 + al156);
    *rax157 = reinterpret_cast<signed char>(*rax158 + al159);
    *rax160 = reinterpret_cast<signed char>(*rax161 + al162);
    *rax163 = reinterpret_cast<signed char>(*rax164 + al165);
    *rax166 = reinterpret_cast<signed char>(*rax167 + al168);
    *rax169 = reinterpret_cast<signed char>(*rax170 + al171);
    *rax172 = reinterpret_cast<signed char>(*rax173 + al174);
    *rax175 = reinterpret_cast<signed char>(*rax176 + al177);
    *rax178 = reinterpret_cast<signed char>(*rax179 + al180);
    *rax181 = reinterpret_cast<signed char>(*rax182 + al183);
    *rax184 = reinterpret_cast<signed char>(*rax185 + al186);
    *rax187 = reinterpret_cast<signed char>(*rax188 + al189);
    *rax190 = reinterpret_cast<signed char>(*rax191 + al192);
    *rax193 = reinterpret_cast<signed char>(*rax194 + al195);
    *rax196 = reinterpret_cast<signed char>(*rax197 + al198);
    *rax199 = reinterpret_cast<signed char>(*rax200 + al201);
    *rax202 = reinterpret_cast<signed char>(*rax203 + al204);
    *rax205 = reinterpret_cast<signed char>(*rax206 + al207);
    *rax208 = reinterpret_cast<signed char>(*rax209 + al210);
    *rax211 = reinterpret_cast<signed char>(*rax212 + al213);
    *rax214 = reinterpret_cast<signed char>(*rax215 + al216);
    *rax217 = reinterpret_cast<signed char>(*rax218 + al219);
    *rax220 = reinterpret_cast<signed char>(*rax221 + al222);
    *rax223 = reinterpret_cast<signed char>(*rax224 + al225);
    *rax226 = reinterpret_cast<signed char>(*rax227 + al228);
    *rax229 = reinterpret_cast<signed char>(*rax230 + al231);
}

int64_t KfRaiseIrql = 0x5350;

int64_t IoAcquireCancelSpinLock = 0x5322;

int64_t KeRemoveDeviceQueue = 0x51ec;

struct s25 {
    signed char[48] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
    signed char[40] pad104;
    int64_t f68;
};

int64_t KeLowerIrql = 0x52be;

int64_t fun_1c0001070(struct s0* rcx, struct s1* rdx) {
    struct s0* rdi3;
    struct s1* rbx4;
    unsigned char al5;
    void* rsp6;
    uint32_t esi7;
    void* rsp8;
    int64_t rdx9;
    int64_t rax10;
    struct s25* rbp11;
    void* rsp12;
    int64_t rcx13;

    rdi3 = rcx;
    rbx4 = rdx;
    al5 = reinterpret_cast<unsigned char>(KfRaiseIrql(2));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 32 - 8 + 8);
    esi7 = al5;
    IoAcquireCancelSpinLock(reinterpret_cast<int64_t>(rsp6) + 64);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    rdx9 = rdi3->f20;
    rdi3->f20 = 0;
    if (rdx9) {
        while ((rax10 = reinterpret_cast<int64_t>(KeRemoveDeviceQueue(rdi3 + 4)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8), !!rax10) && (rbp11 = reinterpret_cast<struct s25*>(rax10 - 0x78), !!rbp11)) {
            rbp11->f68 = 0;
            rbp11->f30 = 0xc0000120;
            rbp11->f38 = 0;
            IoReleaseCancelSpinLock(0);
            IofCompleteRequest(rbp11);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8 - 8 + 8);
            IoAcquireCancelSpinLock(reinterpret_cast<int64_t>(rsp12) + 64);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        }
    }
    IoReleaseCancelSpinLock(0);
    *reinterpret_cast<uint32_t*>(&rcx13) = *reinterpret_cast<unsigned char*>(&esi7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    KeLowerIrql(rcx13);
    fun_1c0001120(rdi3, rbx4, 0, 0);
    rbx4->f30 = 0;
    rbx4->f38 = 0;
    IofCompleteRequest(rbx4);
    return 0;
}

int64_t KeReleaseSpinLock = 0x53c6;

void fun_1c00014f0(int64_t rcx) {
    KeReleaseSpinLock();
    return;
}

struct s26 {
    signed char[48] pad48;
    int32_t f30;
};

struct s27 {
    signed char[56] pad56;
    int64_t f38;
};

void fun_1c0001701() {
    struct s26* rdx1;
    struct s27* rdx2;
    int64_t r10_3;
    int64_t v4;

    rdx1->f30 = 0xc000000d;
    rdx2->f38 = 0;
    IofCompleteRequest(r10_3);
    goto v4;
}

int64_t IoStartNextPacket = 0x51d8;

void fun_1c0001810(struct s0* rcx, struct s1* rdx) {
    struct s1* rbx3;
    int64_t r9_4;
    int64_t r8_5;
    int32_t eax6;

    rbx3 = rdx;
    IoAcquireCancelSpinLock(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 + 56);
    if (rbx3) {
        rbx3->f68 = 0;
        IoReleaseCancelSpinLock(0);
        if (rbx3->fb8->f18 == 0x10000) {
            rdx = rbx3;
            *reinterpret_cast<int32_t*>(&r9_4) = rbx3->f18->f4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_4) + 4) = 0;
            *reinterpret_cast<int32_t*>(&r8_5) = rbx3->f18->f0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0;
            eax6 = fun_1c0001120(rcx, rdx, *reinterpret_cast<int32_t*>(&r8_5), *reinterpret_cast<int32_t*>(&r9_4));
        } else {
            eax6 = 0xc000000d;
        }
        *reinterpret_cast<signed char*>(&rdx) = 1;
        rbx3->f30 = eax6;
        rbx3->f38 = 0;
        IoStartNextPacket(rcx, rdx, r8_5, r9_4);
        IofCompleteRequest(rbx3);
    } else {
        IoReleaseCancelSpinLock(0);
    }
    return;
}

struct s28 {
    signed char[48] pad48;
    int32_t f30;
    signed char[4] pad56;
    int64_t f38;
};

int64_t IoDeleteDevice = 0x529c;

void fun_1c00018e0(struct s12* rcx) {
    struct s13* rbx2;
    int64_t rdi3;
    struct s28* rax4;

    rbx2 = rcx->f8;
    rdi3 = rbx2->f40;
    rax4 = reinterpret_cast<struct s28*>(IoCsqRemoveNextIrp(rdi3 + 96, -1));
    if (rax4) {
        do {
            rax4->f30 = 0xc0000120;
            rax4->f38 = 0;
            IofCompleteRequest(rax4);
            rax4 = reinterpret_cast<struct s28*>(IoCsqRemoveNextIrp(rdi3 + 96, -1));
        } while (rax4);
    }
    IoDeleteDevice(rbx2, -1);
    return;
}

int64_t IoStartPacket = 0x52ae;

int64_t IoCsqInsertIrp = 0x53f0;

void fun_1c0001290(int64_t rcx, struct s20* rdx) {
    struct s22* r8_3;
    int32_t eax4;

    r8_3 = rdx->fb8;
    eax4 = r8_3->f18 - 0x10000;
    if (!eax4) {
        if (r8_3->f10 < 8) 
            goto 0x1c0001702;
        if (!rdx->f18->f0) 
            goto addr_1c000174b_4;
        if (!rdx->f18->f4) 
            goto addr_1c0001728_6;
    } else {
        if (eax4 != 4) 
            goto 0x1c0001702;
        if (r8_3->f8 < 8) 
            goto addr_1c000170b_9; else 
            goto addr_1c00012c5_10;
    }
    addr_1c000174b_4:
    rdx->f30 = 0x103;
    rdx->f38 = 0;
    r8_3->f3 = reinterpret_cast<unsigned char>(r8_3->f3 | 1);
    IoStartPacket();
    addr_1c00012ec_11:
    addr_1c0001728_6:
    addr_1c000170b_9:
    goto 0x1c000172c;
    addr_1c00012c5_10:
    rdx->f30 = 0x103;
    rdx->f38 = 0;
    r8_3->f3 = reinterpret_cast<unsigned char>(r8_3->f3 | 1);
    IoCsqInsertIrp();
    goto addr_1c00012ec_11;
}

int64_t MmLockPagableDataSection = 0x5220;

int64_t fun_1c0001510(struct s14* rcx, struct s16* rdx) {
    struct s15* rbx3;
    int64_t rax4;

    rbx3 = rcx->f40;
    ExAcquireFastMutex(rbx3);
    rbx3->f38 = rbx3->f38 + 1;
    if (rbx3->f38 == 1) {
        rax4 = reinterpret_cast<int64_t>(MmLockPagableDataSection(fun_1c0001510));
        rbx3->f40 = rax4;
    }
    ExReleaseFastMutex(rbx3);
    rdx->f30 = 0;
    rdx->f38 = 0;
    IofCompleteRequest(rdx);
    return 0;
}

void fun_1c0001600() {
    int64_t rax1;

    goto rax1;
}

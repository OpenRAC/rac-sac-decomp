/* sceGsResetGraph -- 400 bytes.
 *
 * A function of the boot executable at 0x001765B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceGsResetGraph.c.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef void VOID;
#define NULL ((void *)0)

typedef struct {
    s16 sceGsInterMode;
    s16 sceGsOutMode;
    s16 sceGsFFMode;
    s16 sceGsVersion;
    volatile s32 (*sceGsVSCfunc)(s32);
    s32 sceGsVSCid;
} sceGsGParam;

extern sceGsGParam *func_00176740(void);
extern s32 func_001910A0();
extern s32 func_00190A60();
extern s32 func_00191840();
extern void func_00190960(s32, s32, s32);

void sceGsResetGraph(s16 mode, s16 inter, s16 out, s16 ff) {
    sceGsGParam *gp;

    switch (mode) {
    case 0:
        gp = func_00176740();
        *(volatile u64 *)0x12001000 = 0x200;
        gp->sceGsInterMode = inter;
        gp->sceGsOutMode = out;
        gp->sceGsVersion = (s16)((*(volatile u64 *)0x12001000 >> 16) & 0xFF);
        func_001910A0(0xFF00);
        gp->sceGsFFMode = (ff != 0);
        if (gp->sceGsVSCfunc != 0) {
            func_00191840(2);
            func_00190A60(2, gp->sceGsVSCid);
            gp->sceGsVSCfunc = 0;
            gp->sceGsVSCid = 0;
        }
        func_00190960(inter & 1, out & 0xFF, ff & 1);
        break;
    case 1:
        *(volatile u64 *)0x12001000 = 0x100;
        break;
    case 5:
        gp = func_00176740();
        gp->sceGsFFMode = (ff != 0);
        gp->sceGsInterMode = inter;
        gp->sceGsOutMode = out;
        gp->sceGsVersion = (s16)((*(volatile u64 *)0x12001000 >> 16) & 0xFF);
        func_00190960(inter & 1, out & 0xFF, ff & 1);
        break;
    }
}

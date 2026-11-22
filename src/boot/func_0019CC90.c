/* func_0019CC90 -- 64 bytes.
 *
 * A function of the boot executable at 0x0019CC90; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body InitTLB.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/InitTLB.c.
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


extern s32 func_001911C0();
extern s32 func_001911D0();
extern s32 func_0019CCD0();

s32 func_0019CC90(void) {
    s32 result;

    if (func_001911C0() == 0x2000000) {
        result = func_0019CCD0();
    } else {
        result = func_001911D0();
    }
    return result;
}

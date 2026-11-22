/* func_001911F0 -- 144 bytes.
 *
 * A function of the boot executable at 0x001911F0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body VSync.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/VSync.c.
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


extern s32 func_0019A4F0();
extern s32 func_0019A540();

void func_001911F0(void) {
    s32 old;

    old = func_0019A4F0();
    *(volatile u32 *)0x1000F000 = 4;
    __builtin_rac5_sync();
    if (old != 0) {
        func_0019A540();
    }
    while ((*(volatile u32 *)0x1000F000 & 4) == 0) {
    }
    old = func_0019A4F0();
    *(volatile u32 *)0x1000F000 = 4;
    __builtin_rac5_sync();
    if (old != 0) {
        func_0019A540();
    }
}

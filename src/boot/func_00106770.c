/* func_00106770 -- 32 bytes.
 *
 * A function of the boot executable at 0x00106770; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body GLOBAL_I_SYSTEMS_memcard_ps2.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa.c.
 */

extern void func_00106730(int initialize, unsigned int priority);

void func_00106770(void) __asm__("_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa");

void func_00106770(void) {
    func_00106730(1, 0xFFFF);
}

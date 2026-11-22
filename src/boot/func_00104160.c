/* func_00104160 -- 32 bytes.
 *
 * A function of the boot executable at 0x00104160; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body GLOBAL_I_SYSTEMS_memcard_ps2.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa.c.
 */

extern void func_00104100(int initialize, unsigned int priority);

void func_00104160(void) __asm__("_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa");

void func_00104160(void) {
    func_00104100(1, 0xFFFF);
}

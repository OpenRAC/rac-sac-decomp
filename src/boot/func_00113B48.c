/* func_00113B48 -- 32 bytes.
 *
 * A function of the boot executable at 0x00113B48; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body GLOBAL_I_SYSTEMS_memcard_ps2.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa.c.
 */

extern void func_00113B08(int initialize, unsigned int priority);

void func_00113B48(void) __asm__("_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa");

void func_00113B48(void) {
    func_00113B08(1, 0xFFFF);
}

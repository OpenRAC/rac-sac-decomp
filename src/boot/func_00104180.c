/* func_00104180 -- 32 bytes.
 *
 * A function of the boot executable at 0x00104180; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body GLOBAL_D_CORE_mcpclient.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_GLOBAL_$D$CORE_mcpclient.cppmQeaaa.c.
 */

extern void func_00104100(int initialize, unsigned int priority);

void func_00104180(void) __asm__("_GLOBAL_$D$CORE_mcpclient.cppmQeaaa");

void func_00104180(void) {
    func_00104100(0, 0xFFFF);
}

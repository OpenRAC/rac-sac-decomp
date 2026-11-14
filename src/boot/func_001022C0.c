/* func_001022C0 -- 16 bytes.
 *
 * A function of the boot executable at 0x001022C0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Loads a global float and stores it through the pointer given as first
 * argument.
 */

extern float g_boot_001AAC1C;

void func_001022C0(float *out)
{
    *out = g_boot_001AAC1C;
}

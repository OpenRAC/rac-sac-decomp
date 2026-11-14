/* func_001022A0 -- 28 bytes.
 *
 * A function of the boot executable at 0x001022A0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores three float arguments into three consecutive global floats.
 */

extern float g_boot_001AAC10;
extern float g_boot_001AAC14;
extern float g_boot_001AAC18;

void func_001022A0(float a, float b, float c)
{
    g_boot_001AAC10 = a;
    g_boot_001AAC14 = b;
    g_boot_001AAC18 = c;
}

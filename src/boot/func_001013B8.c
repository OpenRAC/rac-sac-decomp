/* func_001013B8 -- 32 bytes.
 *
 * A function of the boot executable at 0x001013B8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern void func_00101330(int first, unsigned int second);

void func_001013B8(void)
{
    func_00101330(1, 0xFFFFu);
}

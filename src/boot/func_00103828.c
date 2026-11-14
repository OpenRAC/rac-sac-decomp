/* func_00103828 -- 32 bytes.
 *
 * A function of the boot executable at 0x00103828; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Calls func_001036D0(1, 0xFFFF). Built with gnu-ee with sibling calls off;
 * sdk991111 would emit a plain jump instead.
 */

extern void func_001036D0(int first, unsigned int second);

void func_00103828(void)
{
    func_001036D0(1, 0xFFFFu);
}

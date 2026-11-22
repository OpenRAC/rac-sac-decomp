/* func_L01_16C3F8 -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls three sub-initialisers on fixed offsets, and a fourth only when the
 * flag argument is non-zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0210.c.
 */

void func_L01_16C390(unsigned char *p);
void func_L01_16C3A8(unsigned char *p);
void func_L01_16C3C0(unsigned char *p);
void func_L01_16C3D8(unsigned char *p);

void func_L01_16C3F8(unsigned char *o, int flag)
{
    func_L01_16C390(o + 0x04);
    func_L01_16C3A8(o + 0x44);
    func_L01_16C3C0(o + 0x88);
    if (flag) {
        func_L01_16C3D8(o + 0xF0);
    }
}

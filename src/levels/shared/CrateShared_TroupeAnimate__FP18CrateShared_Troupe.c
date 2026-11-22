/* CrateShared_TroupeAnimate__FP18CrateShared_Troupe -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CCF10.c.
 */

extern void func_L01_11B0A8(int owner);
extern void func_L01_119728(void);
extern int D_L01_003B18EC;

void CrateShared_TroupeAnimate__FP18CrateShared_Troupe(int value)
{
    func_L01_11B0A8(value);
    if (value == D_L01_003B18EC) func_L01_119728();
}

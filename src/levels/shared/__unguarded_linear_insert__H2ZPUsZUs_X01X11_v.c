/* __unguarded_linear_insert__H2ZPUsZUs_X01X11_v -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shifts earlier entries up while the value is below them, then stores the
 * value.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_037238.c.
 */

void __unguarded_linear_insert__H2ZPUsZUs_X01X11_v(unsigned short *place, unsigned short value)
{
    unsigned short *prev = place - 1;

    while (value < place[-1]) {
        *place = *prev;
        place = prev;
        prev = place - 1;
    }
    *place = value;
}

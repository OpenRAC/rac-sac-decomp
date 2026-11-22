/* Push__t5Stack2Z18ePAUSEMODE_SCREENSUi818ePAUSEMODE_SCREENS -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_06_0B7520.c.
 */

struct lvl_stack { int items[8]; int count; };

int Push__t5Stack2Z18ePAUSEMODE_SCREENSUi818ePAUSEMODE_SCREENS(struct lvl_stack *record, int value)
{
    int count = record->count;

    if ((count ^ 8) == 0)
        return 0;
    record->items[count] = value;
    record->count = count + 1;
    return 1;
}

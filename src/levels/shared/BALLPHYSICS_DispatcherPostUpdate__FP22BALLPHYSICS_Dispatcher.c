/* BALLPHYSICS_DispatcherPostUpdate__FP22BALLPHYSICS_Dispatcher -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Counts a field down to zero and masks a second field after adding a delta.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_02E568.c.
 */

struct Obj_02E568 {
    int pad0;
    int pad4;
    unsigned int mask8;
    int padc;
    unsigned int field10;
    int field14;
    int pad18[3];
    int delta24;
};

void BALLPHYSICS_DispatcherPostUpdate__FP22BALLPHYSICS_Dispatcher(struct Obj_02E568 *o)
{
    int delta = o->delta24;
    int remaining;

    o->field10 = (o->field10 + delta) & o->mask8;
    remaining = o->field14 - delta;
    if (remaining < 1)
        remaining = 0;
    o->field14 = remaining;
}

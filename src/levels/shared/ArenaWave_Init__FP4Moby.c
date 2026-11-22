/* ArenaWave_Init__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a word of the object and returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_168208.c.
 */

struct Obj {
    char pad00[0x70];
    int w70;
};

int ArenaWave_Init__FP4Moby(struct Obj *o)
{
    o->w70 = 0;
    return 1;
}

/* Arena4WaveTube_IsReady__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the object's state byte is zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_19B7D0.c.
 */

struct Obj {
    char pad00[0x45];
    unsigned char b45;
};

int Arena4WaveTube_IsReady__FP4Moby(struct Obj *o)
{
    return o->b45 == 0;
}

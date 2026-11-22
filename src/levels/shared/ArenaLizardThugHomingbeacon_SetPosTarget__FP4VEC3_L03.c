/* ArenaLizardThugHomingbeacon_SetPosTarget__FP4VEC3 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copy a three-float vector into a global vector.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_091EA8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_L03_003DC780;

void ArenaLizardThugHomingbeacon_SetPosTarget__FP4VEC3(Vec3 *src)
{
    D_L03_003DC780.x = src->x;
    D_L03_003DC780.y = src->y;
    D_L03_003DC780.z = src->z;
}

/* SwarmManager_ProxMobyColl__FP4Mobyf -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1649F0.c.
 */

extern void MOBYCOLL_FindMobysWithSphere__FPP4MobyiPC4VEC3fiii25MobyFormCollisionCategory(void *, int, void *, int, int, int, int);

void SwarmManager_ProxMobyColl__FP4Mobyf(char *record)
{
    char scratch[128];
    MOBYCOLL_FindMobysWithSphere__FPP4MobyiPC4VEC3fiii25MobyFormCollisionCategory(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}

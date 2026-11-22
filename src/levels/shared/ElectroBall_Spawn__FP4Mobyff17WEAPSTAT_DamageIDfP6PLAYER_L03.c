/* ElectroBall_Spawn__FP4Mobyff17WEAPSTAT_DamageIDfP6PLAYER -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16AF80.c.
 */

/* LEVEL_01.REL:0x16AF80: prepare a vector, create a record, preserve its owner.
   The measured callee ABI carries two integer and three float values. */
extern void MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(int owner, void *scratch, int a2, int a3);
extern char *ElectroBall_Spawn__FP4VEC3ff17WEAPSTAT_DamageIDfP6PLAYER(void *scratch, float x, float y,
                         int a1, float z, int a2);

char *ElectroBall_Spawn__FP4Mobyff17WEAPSTAT_DamageIDfP6PLAYER(int owner, int a1, int a2, float x, float y, float z)
{
    char scratch[16];
    char *result;
    MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(owner, scratch, 0, 0);
    result = ElectroBall_Spawn__FP4VEC3ff17WEAPSTAT_DamageIDfP6PLAYER(scratch, x, y, a1, z, a2);
    if (result != 0)
        *(int *)(*(char **)(result + 0x58) + 0x14) = owner;
    return result;
}

/* ENEMYSTATS_DamageInSphere__FUiUiP4VEC3fP4MobyUiUiUi -- 176 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Looks up the attack data of the moby type with ENEMYSTATS_GetAttackData. The
 * data is a table of four-byte words: the float used as damage is taken at
 * index 0, or at index 1 when the game is in replay mode, and the damage type
 * and damage strength are the third and fourth words of the table. These are
 * passed to GU_DamageInSphere together with the sphere and the remaining
 * arguments. The radius float is kept in a callee-saved float register across
 * the calls.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct Moby Moby;
typedef int MobyDamageType;
typedef int MobyDamageStrength;

/* The global of the module that holds the third argument of the attack
 * data lookup. */
extern unsigned int D_L01_003B166C;

extern void *ENEMYSTATS_GetAttackData__FUiUiUi(unsigned int mobyType,
                                                unsigned int attackType,
                                                unsigned int index);
extern int GLOBALVARS_IsInReplayMode__Fv(void);
extern void GU_DamageInSphere__FPC4VEC3ffP4MobyUiUiUi14MobyDamageType18MobyDamageStrengthUi(
    VEC3 *pos, float radius, float damage, Moby *moby, unsigned int damageId,
    unsigned int damageFlags, unsigned int damageAmount, MobyDamageType type,
    MobyDamageStrength strength, unsigned int extra);

void ENEMYSTATS_DamageInSphere__FUiUiP4VEC3fP4MobyUiUiUi(
    unsigned int mobyType, unsigned int attackType, VEC3 *pos, float damage,
    Moby *moby, unsigned int damageId, unsigned int damageFlags,
    unsigned int damageAmount)
{
    unsigned int *data = (unsigned int *)ENEMYSTATS_GetAttackData__FUiUiUi(
        mobyType, attackType, D_L01_003B166C);
    unsigned int off = GLOBALVARS_IsInReplayMode__Fv() ? 4 : 0;
    unsigned int *slot = (unsigned int *)((char *)data + off);

    GU_DamageInSphere__FPC4VEC3ffP4MobyUiUiUi14MobyDamageType18MobyDamageStrengthUi(
        pos, damage, *(float *)slot, moby, damageId, damageFlags, damageAmount,
        data[4], data[3], 0);
}

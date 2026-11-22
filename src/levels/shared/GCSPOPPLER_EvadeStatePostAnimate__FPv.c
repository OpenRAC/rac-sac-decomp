/* GCSPOPPLER_EvadeStatePostAnimate__FPv -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When the object's countdown (+0xC) has run out, advances it by the owner's
 * rate (+0xA0 of the block at +0x254) times the frame factor and starts the
 * follow-up on the global target.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_113E08.c.
 */

struct Obj;

extern float D_L24_003A2EC8[];
extern float MobyUtil_GetEnemyAttackDelayCoefficient__Fv(void);
extern void GCSPOPPLER_Shoot__FP16GCSPOPPLER_ActorPC4VEC3(struct Obj *o, float *target);

void GCSPOPPLER_EvadeStatePostAnimate__FPv(char *object)
{
    char *owner;
    float *target;
    float f;

    owner = *(char **)(object + 0x254);
    if (*(float *)(object + 0xC) <= 0.0f) {
        target = D_L24_003A2EC8;
        f = MobyUtil_GetEnemyAttackDelayCoefficient__Fv();
        *(float *)(object + 0xC) = *(float *)(object + 0xC) + *(float *)(owner + 0xA0) * f;
        GCSPOPPLER_Shoot__FP16GCSPOPPLER_ActorPC4VEC3((struct Obj *)object, target);
    }
}

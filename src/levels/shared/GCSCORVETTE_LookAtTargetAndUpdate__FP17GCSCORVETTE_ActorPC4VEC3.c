/* GCSCORVETTE_LookAtTargetAndUpdate__FP17GCSCORVETTE_ActorPC4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void GCSCORVETTE_LookAtTarget__FP17GCSCORVETTE_ActorPC4VEC3(void *value);
extern void GCSCORVETTE_LookUpdate__FP17GCSCORVETTE_Actor(void *value);

void GCSCORVETTE_LookAtTargetAndUpdate__FP17GCSCORVETTE_ActorPC4VEC3(void *value) {
    GCSCORVETTE_LookAtTarget__FP17GCSCORVETTE_ActorPC4VEC3(value);
    GCSCORVETTE_LookUpdate__FP17GCSCORVETTE_Actor(value);
}

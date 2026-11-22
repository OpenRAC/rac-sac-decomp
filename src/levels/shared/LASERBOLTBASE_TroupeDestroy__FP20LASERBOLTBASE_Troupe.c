/* LASERBOLTBASE_TroupeDestroy__FP20LASERBOLTBASE_Troupe -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void LASERBOLTBASE_RemoveTroupe__FP20LASERBOLTBASE_Troupe(void *value);
extern void ACTOR_DestroyTroupe__FP12ACTOR_Troupe(void *value);

void LASERBOLTBASE_TroupeDestroy__FP20LASERBOLTBASE_Troupe(void *value) {
    LASERBOLTBASE_RemoveTroupe__FP20LASERBOLTBASE_Troupe(value);
    ACTOR_DestroyTroupe__FP12ACTOR_Troupe(value);
}

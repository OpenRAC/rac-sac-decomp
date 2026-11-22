/* FlyingCarEffects_GondolaHR__FP12ACTOR_Troupe -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/_cleanup_r_LEVEL_02.c.
 */

/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data->D_L01_0026B9E8, sub_target->FlyingCarEffects_Gondola__FP12ACTOR_TroupeP4VEC3); source body unchanged.
   Original lot source: FlyingCarEffects_GondolaHR__FP12ACTOR_Troupe.c. */
extern void FlyingCarEffects_Gondola__FP12ACTOR_TroupeP4VEC3(void *first, void *data);
extern char D_L01_0026B9E8[];

void FlyingCarEffects_GondolaHR__FP12ACTOR_Troupe(void *first) { FlyingCarEffects_Gondola__FP12ACTOR_TroupeP4VEC3(first, D_L01_0026B9E8); }

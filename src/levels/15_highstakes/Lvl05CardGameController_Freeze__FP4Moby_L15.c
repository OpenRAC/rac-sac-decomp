/* Lvl05CardGameController_Freeze__FP4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/_cleanup_r_LEVEL_02.c.
 */

/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data->g_l5cgc_IceConfig, sub_target->IceShards_Spawn__FP4MobyPC15IceShardsConfig); source body unchanged.
   Original lot source: Lvl05CardGameController_Freeze__FP4Moby.c. */
extern void IceShards_Spawn__FP4MobyPC15IceShardsConfig(void *first, void *data);
extern char g_l5cgc_IceConfig[];

void Lvl05CardGameController_Freeze__FP4Moby(void *first) { IceShards_Spawn__FP4MobyPC15IceShardsConfig(first, g_l5cgc_IceConfig); }

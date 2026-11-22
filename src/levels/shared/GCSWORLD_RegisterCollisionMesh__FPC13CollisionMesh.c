/* GCSWORLD_RegisterCollisionMesh__FPC13CollisionMesh -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/MOBYS/GCS/GCS_World/LEVEL_15_132430.c.
 */

struct Holder
{
    char pad[0xf8];
    int value;
};
extern struct Holder g_gcs_world;

void GCSWORLD_RegisterCollisionMesh__FPC13CollisionMesh(int *input)
{
    int incoming = *input;
    int current = g_gcs_world.value;
    g_gcs_world.value = incoming < current ? current : incoming;
}

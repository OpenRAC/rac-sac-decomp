/* GCSASTEROID_SpawnFlush__Fv -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the global list calling a helper on each node, then clears the list
 * head.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F9E50.c.
 */

void GCSASTEROID_Emit__FP18GCSASTEROID_TroupeP19GCS_AsteroidPayload(void *a0, void *a1);

struct Node {
    unsigned char pad00[0x5C];
    void *p5C;
    unsigned char pad60[0x14];
    struct Node *p74;
};

extern struct Node *g_gcsasteroid;

void GCSASTEROID_SpawnFlush__Fv(void)
{
    struct Node *n;
    struct Node *nx;

    n = g_gcsasteroid;
    while (n != 0) {
        nx = n->p74;
        GCSASTEROID_Emit__FP18GCSASTEROID_TroupeP19GCS_AsteroidPayload(n->p5C, n);
        n = nx;
    }
    g_gcsasteroid = 0;
}

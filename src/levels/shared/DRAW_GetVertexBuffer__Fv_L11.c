/* DRAW_GetVertexBuffer__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawState {
    unsigned char pad[0x223F0];
    int vertexBuffer;
} DrawState;

extern DrawState *g_draw;

int DRAW_GetVertexBuffer__Fv(void)
{
    return g_draw->vertexBuffer;
}

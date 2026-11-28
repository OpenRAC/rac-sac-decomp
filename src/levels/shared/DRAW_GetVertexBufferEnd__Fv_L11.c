/* DRAW_GetVertexBufferEnd__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawState {
    unsigned char pad[0x223EC];
    int vertexBufferEnd;
} DrawState;

extern DrawState *g_draw;

int DRAW_GetVertexBufferEnd__Fv(void)
{
    return g_draw->vertexBufferEnd;
}

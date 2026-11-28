/* GetVertexDecl__10AglPrimMgrb -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    int a;
    int b;
} VtxDecl;

extern VtxDecl g_primMgrDecls[];

VtxDecl *GetVertexDecl__10AglPrimMgrb(int enable)
{
    int i;

    i = enable != 0;
    return &g_primMgrDecls[i];
}

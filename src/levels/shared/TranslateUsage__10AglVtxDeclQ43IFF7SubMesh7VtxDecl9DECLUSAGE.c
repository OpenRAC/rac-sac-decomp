/* TranslateUsage__10AglVtxDeclQ43IFF7SubMesh7VtxDecl9DECLUSAGE -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    int a;
    int b;
} UsageMap;

extern UsageMap g_usageMap[];

int TranslateUsage__10AglVtxDeclQ43IFF7SubMesh7VtxDecl9DECLUSAGE(int usage)
{
    return g_usageMap[usage].b;
}

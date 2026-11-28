/* GDEMESH_GetMesh__Fi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GDEMesh {
    int pad;
    int ptr;
} GDEMesh;

extern GDEMesh D_L01_0031FFF0[];

int GDEMESH_GetMesh__Fi(int index)
{
    return D_L01_0031FFF0[index].ptr;
}

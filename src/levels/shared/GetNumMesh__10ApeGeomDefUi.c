/* GetNumMesh__10ApeGeomDefUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeGeomDef ApeGeomDef;

unsigned int GetNumMesh__10ApeGeomDefUi(ApeGeomDef *self, unsigned int i)
{
    unsigned int addr = (i << 3) + (unsigned int)self;
    char *topo = *(char **)(addr + 0x7C);
    return *(unsigned short *)(topo + 0x110);
}

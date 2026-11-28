/* GetTopology__10ApeGeomDefUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeGeomDef ApeGeomDef;

void *GetTopology__10ApeGeomDefUi(ApeGeomDef *self, unsigned int i)
{
    unsigned int addr = (i << 3) + (unsigned int)self;
    return *(void **)(addr + 0x7C);
}

/* GetTexture__15AglMaterialBasei -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

void *GetTexture__15AglMaterialBasei(AglMaterialBase *self, int i)
{
    unsigned int addr = (i << 2) + (unsigned int)self;
    return *(void **)(addr + 0x14);
}

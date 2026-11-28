/* GetMesh__C11AglTopologyUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTopology AglTopology;

void *GetMesh__C11AglTopologyUi(const AglTopology *self, unsigned int i)
{
    unsigned int addr = (i << 3) + (unsigned int)self;
    return *(void **)(addr + 0x10);
}

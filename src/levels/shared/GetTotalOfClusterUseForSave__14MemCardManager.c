/* GetTotalOfClusterUseForSave__14MemCardManager -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the fixed number of clusters the save uses, the constant 0x2CA.
 */

typedef struct MemCardManager MemCardManager;

unsigned int GetTotalOfClusterUseForSave__14MemCardManager(MemCardManager *self)
{
    (void)self;
    return 0x2CA;
}

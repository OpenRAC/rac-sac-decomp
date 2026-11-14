/* IsTextureHandleValid__14DrawObjManagerUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int IsTextureHandleValid__14DrawObjManagerUi(void *self, unsigned int h)
{
    (void)self;
    return (h >> 20) < 0xFFBu;
}

/* Find__12ApeSplineMgrPCc -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12B1C8.c.
 */

extern void *GenerateHash32__7ApeHashPCc(unsigned int kind, int count);
extern int Find__12ApeSplineMgrUi(void *value);

int Find__12ApeSplineMgrPCc(unsigned int kind, int count)
{
    void *value = GenerateHash32__7ApeHashPCc(kind, count);
    return Find__12ApeSplineMgrUi(value);
}

/* Initialize__20ApeAnimChannelVector -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

void Initialize__20ApeAnimChannelVector(unsigned char *self)
{
    u128 v;

    v = *(u128 *)(self + 0x40);
    self[0xC] = 1;
    *(u128 *)(self + 0x30) = v;
}

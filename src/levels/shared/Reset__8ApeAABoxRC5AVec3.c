/* Reset__8ApeAABoxRC5AVec3 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

void Reset__8ApeAABoxRC5AVec3(u128 *box, volatile u128 *pt)
{
    box[0] = *pt;
    box[1] = *pt;
}

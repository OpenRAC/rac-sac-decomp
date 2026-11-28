/* GetMatrix__4Mask -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void *GetMatrix__4Mask(unsigned char *self)
{
    return self[0x4C] ? (void *)(self + 0xC) : (void *)0;
}

/* IsShadowCaster__C11AglTopology -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

unsigned int IsShadowCaster__C11AglTopology(const unsigned char *self)
{
    unsigned long long v;
    unsigned char b;

    v = *(const unsigned long long *)(self + 0x110);
    b = (unsigned char)(v >> 16);
    return b & 1u;
}

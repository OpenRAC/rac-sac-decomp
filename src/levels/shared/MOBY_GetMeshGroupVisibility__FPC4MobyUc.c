/* MOBY_GetMeshGroupVisibility__FPC4MobyUc -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int MOBY_GetMeshGroupVisibility__FPC4MobyUc(const unsigned char *self,
                                            unsigned int group)
{
    unsigned short flags;

    flags = *(const unsigned short *)(self + 0x74);
    return ((flags >> group) ^ 1) & 1;
}

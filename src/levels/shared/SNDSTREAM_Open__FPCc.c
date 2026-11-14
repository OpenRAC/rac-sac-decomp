/* SNDSTREAM_Open__FPCc -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g;

int *SNDSTREAM_Open__FPCc(const char *name)
{
    (void)name;
    return &g;
}

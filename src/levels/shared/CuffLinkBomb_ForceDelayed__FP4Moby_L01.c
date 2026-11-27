/* CuffLinkBomb_ForceDelayed__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void CuffLinkBomb_ForceDelayed__FP4Moby(unsigned char *self)
{
    unsigned char *vars;

    vars = *(unsigned char **)(self + 0x58);
    vars[0x88] = 1;
    self[0x46] = 1;
}

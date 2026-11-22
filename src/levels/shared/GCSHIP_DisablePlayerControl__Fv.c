/* GCSHIP_DisablePlayerControl__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1372F0.c.
 */

typedef struct {
    float f;
} S;

extern S D_L24_003A5D34;

void GCSHIP_DisablePlayerControl__Fv(void)
{
    D_L24_003A5D34.f = 4.5f;
}

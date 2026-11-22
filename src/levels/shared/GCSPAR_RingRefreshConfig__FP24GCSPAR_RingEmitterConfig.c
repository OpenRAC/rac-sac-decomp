/* GCSPAR_RingRefreshConfig__FP24GCSPAR_RingEmitterConfig -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_125938.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    char pad[0x10];
    float f_34;
    float f_38;
    float f_3C;
    float f_40;
} Rec;

void GCSPAR_RingRefreshConfig__FP24GCSPAR_RingEmitterConfig(Rec *a0)
{
    a0->f_34 = 1.0f / a0->f_00;
    a0->f_38 = a0->f_18 - a0->f_14;
    a0->f_3C = a0->f_00 / a0->f_04;
    a0->f_40 = a0->f_20 - a0->f_1C;
}

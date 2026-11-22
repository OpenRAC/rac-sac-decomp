/* BLAST_RefreshConfig__FP19BLAST_EmitterConfig -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the four scaled differences of the record floats into the floats at
 * 0x24, 0x28, 0x2C and 0x30.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0FF1F8.c.
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
    float f_24;
    float f_28;
    float f_2C;
    float f_30;
} Rec;

void BLAST_RefreshConfig__FP19BLAST_EmitterConfig(Rec *a0)
{
    float d0 = a0->f_04 - a0->f_00;
    float d1 = a0->f_0C - a0->f_08;
    float d2 = a0->f_14 - a0->f_10;
    float d3 = a0->f_20 - a0->f_1C;

    a0->f_24 = d0 * 4.656612873077393e-10f;
    a0->f_28 = d1 * 4.656612873077393e-10f;
    a0->f_2C = d2 * 4.656612873077393e-10f;
    a0->f_30 = d3 * 4.656612873077393e-10f;
}

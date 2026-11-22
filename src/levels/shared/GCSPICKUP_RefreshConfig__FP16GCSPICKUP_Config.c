/* GCSPICKUP_RefreshConfig__FP16GCSPICKUP_Config -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The point is normalised and the three edge lengths are written back scaled
 * by 2^-31.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1268E8.c.
 */

void GCSPICKUP_RefreshConfig__FP16GCSPICKUP_Config(void *a0)
{
    float k = 4.6566129e-10f;
    float t = 1.0f / *(float *)((char *)a0 + 0x0);
    float d3 = *(float *)((char *)a0 + 0x8) - *(float *)((char *)a0 + 0x4);
    float d2 = *(float *)((char *)a0 + 0x14) - *(float *)((char *)a0 + 0x10);
    float d1 = *(float *)((char *)a0 + 0x1C) - *(float *)((char *)a0 + 0x18);

    *(float *)((char *)a0 + 0x20) = t;
    *(float *)((char *)a0 + 0x24) = d3 * k;
    *(float *)((char *)a0 + 0x28) = d2 * k;
    *(float *)((char *)a0 + 0x2C) = d1 * k;
}

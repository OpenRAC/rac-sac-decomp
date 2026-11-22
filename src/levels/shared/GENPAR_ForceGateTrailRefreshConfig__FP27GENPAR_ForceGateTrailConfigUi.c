/* GENPAR_ForceGateTrailRefreshConfig__FP27GENPAR_ForceGateTrailConfigUi -- 296 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a reciprocal and converts four packed bytes to floats.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_03_1FCDB8.c.
 */

struct P {
    float f0;
    int f4;
    unsigned int w;
};

void GENPAR_ForceGateTrailRefreshConfig__FP27GENPAR_ForceGateTrailConfigUi(struct P *p, unsigned int w)
{
    *(float *)((char *)p + 0xC) = 1.0f / p->f0;
    *(float *)((char *)p + 0x10) = (float)(p->w & 0xFF);
    *(float *)((char *)p + 0x14) = (float)((p->w >> 8) & 0xFF);
    *(float *)((char *)p + 0x18) = (float)((p->w >> 16) & 0xFF);
    *(float *)((char *)p + 0x1C) = (float)((p->w >> 24) & 0xFF);
}

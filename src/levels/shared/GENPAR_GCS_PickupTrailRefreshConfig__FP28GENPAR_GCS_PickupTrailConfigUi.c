/* GENPAR_GCS_PickupTrailRefreshConfig__FP28GENPAR_GCS_PickupTrailConfigUi -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Splits the packed word of the object: the low 24 bits go to the mask, the
 * top byte becomes a fraction, and 1/scale is kept.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1E5E98.c.
 */

typedef struct {
    float f_00;
    char pad0[4];
    unsigned f_08;
    float f_0C;
    unsigned f_10;
    float f_14;
} Obj;

void GENPAR_GCS_PickupTrailRefreshConfig__FP28GENPAR_GCS_PickupTrailConfigUi(Obj *a0)
{
    unsigned v = a0->f_08;

    a0->f_10 = v & 0xFFFFFF;
    a0->f_0C = 1.0f / a0->f_00;
    a0->f_14 = (float)((v >> 24) & 0xFF);
}

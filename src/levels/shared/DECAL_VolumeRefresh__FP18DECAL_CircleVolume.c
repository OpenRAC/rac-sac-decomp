/* DECAL_VolumeRefresh__FP18DECAL_CircleVolume -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Squares the first two floats of the caller's record and stores the square
 * and the scaled difference of the squares.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1DFE10.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Rec;

void DECAL_VolumeRefresh__FP18DECAL_CircleVolume(Rec *a0)
{
    float x = a0->f_00;
    float y = a0->f_04;
    float xx = x * x;
    float yy = y * y;

    a0->f_08 = xx;
    a0->f_0C = (yy - xx) * 4.656612873077393e-10f;
}

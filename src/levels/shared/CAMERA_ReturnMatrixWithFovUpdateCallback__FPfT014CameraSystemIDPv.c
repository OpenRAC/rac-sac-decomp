/* CAMERA_ReturnMatrixWithFovUpdateCallback__FPfT014CameraSystemIDPv -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a record's float to one output, converts the record's second float
 * into another when it is zero, and returns the record's first word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_000F70.c.
 */

typedef struct {
    int w0;
    float f4;
    float f8;
} Rec;

extern float DISPLAY_CalcFovX__Ff(float f);

int CAMERA_ReturnMatrixWithFovUpdateCallback__FPfT014CameraSystemIDPv(float *a, float *b, int unused, Rec *r)
{
    *b = r->f8;
    if (r->f4 == 0.0f)
        *a = DISPLAY_CalcFovX__Ff(r->f8);
    else
        *a = r->f4;
    return r->w0;
}

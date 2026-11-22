/* GAMETARGET_SetTargetMatrix__FPC7MATRIX4 -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_019E58.c.
 */

/* LEVEL_04:019E58 -- copies the sixteen floats of the caller's record
   into the level's stored record, four at a time. */
typedef struct {
    float f[16];
} Rec;

extern Rec D_L01_0031AAD8;

void GAMETARGET_SetTargetMatrix__FPC7MATRIX4(Rec *a0)
{
    D_L01_0031AAD8.f[8] = a0->f[8];
    D_L01_0031AAD8.f[9] = a0->f[9];
    D_L01_0031AAD8.f[10] = a0->f[10];
    D_L01_0031AAD8.f[11] = a0->f[11];
    D_L01_0031AAD8.f[0] = a0->f[0];
    D_L01_0031AAD8.f[1] = a0->f[1];
    D_L01_0031AAD8.f[2] = a0->f[2];
    D_L01_0031AAD8.f[3] = a0->f[3];
    D_L01_0031AAD8.f[4] = a0->f[4];
    D_L01_0031AAD8.f[5] = a0->f[5];
    D_L01_0031AAD8.f[6] = a0->f[6];
    D_L01_0031AAD8.f[7] = a0->f[7];
    D_L01_0031AAD8.f[12] = a0->f[12];
    D_L01_0031AAD8.f[13] = a0->f[13];
    D_L01_0031AAD8.f[14] = a0->f[14];
    D_L01_0031AAD8.f[15] = a0->f[15];
}

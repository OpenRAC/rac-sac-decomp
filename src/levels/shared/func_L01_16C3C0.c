/* func_L01_16C3C0 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one divided by the first float of the caller's record into the float
 * at 0x64.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0F01D8.c.
 */

typedef struct {
    float f_00;
    float pad[0x18];
    float f_64;
} Rec;

void func_L01_16C3C0(Rec *a0)
{
    a0->f_64 = 1.0f / a0->f_00;
}

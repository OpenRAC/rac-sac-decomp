/* func_L01_00A940 -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_16_0015A0.c.
 */

typedef struct {
    float f0;
    float f4;
    char pad[8];
    int f10;
} Rec;

void func_L01_00A8D8(Rec *r, float x, float y);

void func_L01_00A940(Rec *r, float a, float b, float c)
{
    switch (r->f10) {
    case 0:
        func_L01_00A8D8(r, c, r->f4);
        break;
    case 1:
        r->f0 = r->f0 + c * r->f4;
        break;
    case 2:
        func_L01_00A8D8(r, c, a * b * r->f4);
        break;
    }
}

/* func_L01_00A9D0 -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Dispatches on the mode field of the record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_16_001630.c.
 */

typedef struct {
    float f_00;
    float f_04;
    char pad_08[8];
    int f_10;
} Rec;

extern void func_L01_00A8D8(Rec *a0, float a1, float a2);

void func_L01_00A9D0(Rec *a0, float a2)
{
    switch (a0->f_10) {
    case 0:
        func_L01_00A8D8(a0, a2, a0->f_04);
        break;
    case 1:
        a0->f_00 = a0->f_00 + a2 * a0->f_04;
        break;
    }
}

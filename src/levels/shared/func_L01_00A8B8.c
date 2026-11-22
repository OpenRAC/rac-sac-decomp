/* func_L01_00A8B8 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one float of the record and clears the two neighbouring words, then
 * stores the counter 2.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_001920.c.
 */

struct S {
    float f;
    int b;
    float g;
    int c;
    int d;
};

void func_L01_00A8B8(struct S *a0)
{
    a0->f = a0->g;
    a0->b = 0;
    a0->c = 0;
    a0->d = 2;
}

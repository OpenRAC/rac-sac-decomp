/* GAMEUTIL_InitSpring_F__FP8SPRING_Fffff -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_013680.c.
 */

typedef struct {
    float a;
    float b;
    int   c;
    float d;
    float e;
    float f;
} Out;

void GAMEUTIL_InitSpring_F__FP8SPRING_Fffff(Out *a0, float p0, float p1, float p2, float p3)
{
    a0->b = p0;
    a0->a = p0;
    a0->d = p1;
    a0->e = p2;
    a0->c = 0;
    a0->f = p3;
}

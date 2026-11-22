/* VEC_CopyMat__FP7MATRIX4PC8MATRIX43 -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E9818.c.
 */

typedef struct {
    float f0;
    float f4;
    float f8;
} S;

typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
} D;

typedef struct {
    D d0;
    D d1;
    D d2;
    D d3;
} Big;

typedef struct {
    S s0;
    S s1;
    S s2;
    S s3;
} Src;

void VEC_CopyMat__FP7MATRIX4PC8MATRIX43(Big *dst, Src *src)
{
    D *d1 = &dst->d1;
    S *s1 = &src->s1;
    D *d2 = &dst->d2;
    S *s2 = &src->s2;
    D *d3 = &dst->d3;
    S *s3 = &src->s3;

    dst->d0.f0 = src->s0.f0;
    dst->d0.f4 = src->s0.f4;
    dst->d0.f8 = src->s0.f8;
    dst->d0.fC = 0.0f;
    d1->f0 = s1->f0;
    d1->f4 = s1->f4;
    d1->f8 = s1->f8;
    d1->fC = 0.0f;
    d2->f0 = s2->f0;
    d2->f4 = s2->f4;
    d2->f8 = s2->f8;
    d2->fC = 0.0f;
    d3->f0 = s3->f0;
    d3->f4 = s3->f4;
    d3->f8 = s3->f8;
    d3->fC = 1.0f;
}

/* VEC_CopyMat__FP8MATRIX43PC7MATRIX4 -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the first three columns of a four-row four-float matrix into a
 * four-row three-float matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_15_0E9728.c.
 */

typedef struct {
    float c[3];
} Row3;

typedef struct {
    Row3 r[4];
} Dest;

typedef struct {
    float c[4];
} Row4;

typedef struct {
    Row4 r[4];
} Src;

void VEC_CopyMat__FP8MATRIX43PC7MATRIX4(Dest *a0, Src *a1)
{
    Row3 *d0 = &a0->r[0];
    Row3 *d1 = &a0->r[1];
    Row3 *d2 = &a0->r[2];
    Row3 *d3 = &a0->r[3];
    Row4 *s0 = &a1->r[0];
    Row4 *s1 = &a1->r[1];
    Row4 *s2 = &a1->r[2];
    Row4 *s3 = &a1->r[3];

    d0->c[0] = s0->c[0];
    d0->c[1] = s0->c[1];
    d0->c[2] = s0->c[2];
    d1->c[0] = s1->c[0];
    d1->c[1] = s1->c[1];
    d1->c[2] = s1->c[2];
    d2->c[0] = s2->c[0];
    d2->c[1] = s2->c[1];
    d2->c[2] = s2->c[2];
    d3->c[0] = s3->c[0];
    d3->c[1] = s3->c[1];
    d3->c[2] = s3->c[2];
}

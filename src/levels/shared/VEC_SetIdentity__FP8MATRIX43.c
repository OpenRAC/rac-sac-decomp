/* VEC_SetIdentity__FP8MATRIX43 -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Initialises a record made of a head and three sub-records; the float of each
 * sub-record is set to 1.0f.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_123C70.c.
 */

typedef struct {
    float f;
    int a;
    int b;
    int c;
} Head;

typedef struct {
    int i;
    float f;
    int j;
} S1;

typedef struct {
    int i;
    int j;
    float f;
} S2;

typedef struct {
    int i;
    int j;
    int k;
} S3;

void VEC_SetIdentity__FP8MATRIX43(void *a0)
{
    Head *h = (Head *)a0;
    S1 *s1 = (S1 *)((char *)a0 + 0x0C);
    S2 *s2 = (S2 *)((char *)a0 + 0x18);
    S3 *s3 = (S3 *)((char *)a0 + 0x24);

    h->f = 1.0f;
    h->a = 0;
    h->b = 0;
    h->c = 0;
    s1->f = 1.0f;
    s1->j = 0;
    s2->i = 0;
    s2->j = 0;
    s2->f = 1.0f;
    s3->i = 0;
    s3->j = 0;
    s3->k = 0;
}

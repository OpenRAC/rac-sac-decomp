/* VEC_CopyMat__FP8MATRIX43PC7MATRIX3 -- 108 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the three vectors and the three words of the caller's record into the
 * level's record, and clears the words.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E97A8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 a;
    V3 b;
    V3 c;
    int n[3];
} Rec;

void VEC_CopyMat__FP8MATRIX43PC7MATRIX3(Rec *a0, Rec *a1)
{
    V3 *sb = &a1->b;
    V3 *db = &a0->b;
    V3 *sc = &a1->c;
    V3 *dc = &a0->c;
    int *t = &a0->n[0];

    a0->a.x = a1->a.x;
    a0->a.y = a1->a.y;
    a0->a.z = a1->a.z;
    db->x = sb->x;
    db->y = sb->y;
    db->z = sb->z;
    dc->x = sc->x;
    dc->y = sc->y;
    dc->z = sc->z;
    t[0] = 0;
    t[1] = 0;
    t[2] = 0;
}

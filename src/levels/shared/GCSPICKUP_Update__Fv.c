/* GCSPICKUP_Update__Fv -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Pairs a cursor walking one table with a fixed block and a second cursor
 * walking another, calling a helper for each pair.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_127540.c.
 */

extern char g_gcspickup[];
extern char D_L24_003A30A8[];
extern char D_L24_0035D1A8[];
extern void VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(char *a, char *b, char *c);

void GCSPICKUP_Update__Fv(void)
{
    char *base;
    char *p;
    char *q;
    char *end;
    char *r;

    base = g_gcspickup;
    q = D_L24_0035D1A8;
    end = q + 0x174;
    r = D_L24_003A30A8;
    p = base + 0x24;
    do {
        VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(p, r, q);
        q += 0x7C;
        p += 0x3C;
    } while ((int)q < (int)end);
}

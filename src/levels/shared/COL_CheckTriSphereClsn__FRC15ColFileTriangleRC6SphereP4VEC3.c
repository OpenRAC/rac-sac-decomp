/* COL_CheckTriSphereClsn__FRC15ColFileTriangleRC6SphereP4VEC3 -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/07_dreamtime/LEVEL_07_113D80.c.
 */

/* LEVEL_07.REL:113D80 -- calls the level's writer with the caller's second
   record (or a local one) and the float field of the third argument. */
typedef struct {
    int w_00;
    int w_04;
    int w_08;
} Ctx;

extern Ctx *D_L01_0027DEAC;

extern void COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(void *a0, void *a1, int a2, void *a3, float f1);

void COL_CheckTriSphereClsn__FRC15ColFileTriangleRC6SphereP4VEC3(void *a0, void *a1, void *a2)
{
    char local[16];
    Ctx *ctx = D_L01_0027DEAC;

    COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(a2 != 0 ? a2 : local, a0, ctx->w_08, a1,
                *(float *)((char *)a1 + 0xC));
}

/* RIBBON_CreateLinearMatrixOrientRibbonGroup__FP30RIBBON_LinearMatrixOrientGroupiPC21RIBBON_LinearSettings -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0F4890.c.
 */

typedef struct {
    char pad[0x14];
    char *f14;
    float f18;
    int f1C;
} Obj;

extern void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(Obj *self, int x, int flag);

void RIBBON_CreateLinearMatrixOrientRibbonGroup__FP30RIBBON_LinearMatrixOrientGroupiPC21RIBBON_LinearSettings(Obj *self, int x, float *p)
{
    PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(self, x, 1);
    self->f14 = p;
    self->f18 = 1.0f / *p;
    self->f1C = 0;
}

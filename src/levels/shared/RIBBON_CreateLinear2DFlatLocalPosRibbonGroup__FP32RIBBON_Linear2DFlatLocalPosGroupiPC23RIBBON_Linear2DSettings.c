/* RIBBON_CreateLinear2DFlatLocalPosRibbonGroup__FP32RIBBON_Linear2DFlatLocalPosGroupiPC23RIBBON_Linear2DSettings -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The reciprocal of a radius is stored in the object, after the helper has
 * been told about the new value.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/06_challax/LEVEL_06_0E6218.c.
 */

typedef struct {
    float f;
} Src;

typedef struct {
    char pad[0x14];
    Src *link;
    float value;
} Dst;

void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(void *a, int b, int c);

void RIBBON_CreateLinear2DFlatLocalPosRibbonGroup__FP32RIBBON_Linear2DFlatLocalPosGroupiPC23RIBBON_Linear2DSettings(Dst *a0, int a1, Src *a2)
{
    PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(a0, a1, 1);
    a0->link = a2;
    a0->value = 1.0f / a2->f;
}

/* GCSFRAG_CreateTroupeFromPart__FP14GCSFRAG_TroupePC16LWMODEL_MaterialPC14GCSFRAG_ConfigPC10ApeGeomDefPC8MGD_Part -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards its arguments to the shared initialiser together with a one-bit
 * mask derived from the record's kind byte, a fixed table and the record's two
 * floats.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_11D540.c.
 */

typedef struct {
    float x, y, z;
} V3;

typedef struct {
    float f[6];
} V6;

typedef struct Obj Obj;

typedef struct {
    char pad00[0x0C];
    float f0C;
    float f10;
    unsigned char kind;
} Rec;

extern char g_zeroVec3[];

extern void GCSFRAG_CreateTroupe__FP14GCSFRAG_TroupePC16LWMODEL_MaterialPC14GCSFRAG_ConfigPC10ApeGeomDefiPC4VEC3ffT5(Obj *o, V6 *v, int a2, int a3, V3 *t0, V3 *t1, float fa, float fb, V3 *t2);

void GCSFRAG_CreateTroupeFromPart__FP14GCSFRAG_TroupePC16LWMODEL_MaterialPC14GCSFRAG_ConfigPC10ApeGeomDefPC8MGD_Part(Obj *o, V6 *v, int a2, int a3, Rec *rec)
{
    GCSFRAG_CreateTroupe__FP14GCSFRAG_TroupePC16LWMODEL_MaterialPC14GCSFRAG_ConfigPC10ApeGeomDefiPC4VEC3ffT5(o, v, a2, a3, (V3 *)(1 << (rec->kind | 0x10)), (V3 *)g_zeroVec3, rec->f0C, rec->f10, (V3 *)rec);
}

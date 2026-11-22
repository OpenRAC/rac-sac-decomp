/* ShockBoltData_Free__FUi -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Asks ShockBoltData_GetPointer__FUi for a record and, when it answers, calls
 * ShockBoltData_Clear__FUi and clears the two fields of the record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/06_challax/LEVEL_06_15A908.c.
 */

typedef struct {
    char pad[0x64];
    float f_64;
    int f_68;
} Obj;

extern Obj *ShockBoltData_GetPointer__FUi(Obj *a0);
extern void ShockBoltData_Clear__FUi(Obj *a0);

void ShockBoltData_Free__FUi(Obj *a0)
{
    Obj *r = ShockBoltData_GetPointer__FUi(a0);
    if (r) {
        ShockBoltData_Clear__FUi(a0);
        r->f_68 = 0;
        r->f_64 = -1.0f;
    }
}

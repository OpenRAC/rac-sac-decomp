/* ICONHORMENU_SetIconSpacing__FP12tICONHORMENUUiUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Store two integers and their sum as a float.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D9148.c.
 */

typedef struct {
    char pad[0x1C];
    int first;
    int second;
    char pad2[0xC];
    float total;
} Obj;

void ICONHORMENU_SetIconSpacing__FP12tICONHORMENUUiUi(Obj *obj, int a1, int a2)
{
    obj->first = a2;
    obj->second = a1;
    obj->total = (float)(a1 + a2);
}

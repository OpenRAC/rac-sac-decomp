/* ICONMENU_SetIconSpacing__FP9tICONMENUUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores an int field and a float field of a record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8320.c.
 */

typedef struct {
    char pad[0x18];
    int f18;
    int f1C;
    float f20;
} Rec;

void ICONMENU_SetIconSpacing__FP9tICONMENUUi(Rec *p, int v)
{
    p->f18 = v;
    p->f20 = (float)(v + 0x20);
}

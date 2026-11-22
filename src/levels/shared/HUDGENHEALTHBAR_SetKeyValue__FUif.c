/* HUDGENHEALTHBAR_SetKeyValue__FUif -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes the float argument into the field at 0x14 of the record
 * HUDGENHEALTHBAR_g_Data[index] (records of 32 bytes).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0937C0.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
} Rec;

extern Rec HUDGENHEALTHBAR_g_Data[];

void HUDGENHEALTHBAR_SetKeyValue__FUif(int a0, float a1)
{
    HUDGENHEALTHBAR_g_Data[a0].f_14 = a1;
}

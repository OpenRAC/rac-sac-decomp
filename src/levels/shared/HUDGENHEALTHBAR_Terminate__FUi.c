/* HUDGENHEALTHBAR_Terminate__FUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the first two words of one table entry.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B2FC8.c.
 */

typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry HUDGENHEALTHBAR_g_Data[];

void HUDGENHEALTHBAR_Terminate__FUi(int index)
{
    HUDGENHEALTHBAR_g_Data[index].f00 = 0;
    HUDGENHEALTHBAR_g_Data[index].f04 = 0;
}

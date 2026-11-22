/* HUDGENHEALTHBAR_IsShowing__FUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tells whether the first word of a 32-byte table record is nonzero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_0B8568.c.
 */

typedef struct {
    int w0;
    char pad_04[0x1C];
} Rec;

extern Rec HUDGENHEALTHBAR_g_Data[];

int HUDGENHEALTHBAR_IsShowing__FUi(int index)
{
    return HUDGENHEALTHBAR_g_Data[index].w0 != 0;
}

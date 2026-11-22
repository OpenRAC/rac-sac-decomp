/* SCRNMAP_SetPlayerDirVector__FP4VEC4 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the four floats of a record into the level's stored record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0A5868.c.
 */

typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 a;
    V2 b;
} Rec;

extern Rec g_DirVector;

void SCRNMAP_SetPlayerDirVector__FP4VEC4(Rec *src)
{
    g_DirVector = *src;
}

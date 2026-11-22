/* UPDATE_GetGameMode__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the level's stored record into the caller's record and hands the
 * record back.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/09_inside_clank/LEVEL_09_019BF0.c.
 */

typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

extern Rec g_GameMode;

Rec *UPDATE_GetGameMode__Fv(Rec *dst)
{
    *dst = g_GameMode;
    return dst;
}

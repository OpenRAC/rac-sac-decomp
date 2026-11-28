/* FlameWall_GetFlamePosition__FP4Mobyi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Flame {
    char pad[0x34];
} Flame;

typedef struct WallVars {
    Flame flames[1];
} WallVars;

typedef struct Moby {
    char pad[0x58];
    WallVars *vars;
} Moby;

Flame *FlameWall_GetFlamePosition__FP4Mobyi(Moby *moby, int index)
{
    return &moby->vars->flames[index];
}

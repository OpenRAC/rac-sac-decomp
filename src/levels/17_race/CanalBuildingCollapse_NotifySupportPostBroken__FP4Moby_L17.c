/* CanalBuildingCollapse_NotifySupportPostBroken__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CollapseVars {
    char pad[0x1C];
    int broken;
} CollapseVars;

typedef struct Moby {
    char pad[0x58];
    CollapseVars *vars;
} Moby;

void CanalBuildingCollapse_NotifySupportPostBroken__FP4Moby(Moby *moby)
{
    moby->vars->broken++;
}

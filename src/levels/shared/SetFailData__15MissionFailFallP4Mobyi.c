/* SetFailData__15MissionFailFallP4Mobyi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void SetFailData__15MissionFailFallP4Mobyi(char *self, int moby, int val)
{
    int *inner;

    inner = *(int **)(*(char **)(self + 4) + 0xC);
    inner[0] = moby;
    inner[2] = val;
}

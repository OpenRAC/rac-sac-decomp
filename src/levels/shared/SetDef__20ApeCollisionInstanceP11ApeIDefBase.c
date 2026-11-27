/* SetDef__20ApeCollisionInstanceP11ApeIDefBase -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void SetDef__20ApeCollisionInstanceP11ApeIDefBase(char *self, int *def)
{
    if (def != *(int **)(self + 0x10)) {
        *(int **)(self + 0x10) = def;
    }
}

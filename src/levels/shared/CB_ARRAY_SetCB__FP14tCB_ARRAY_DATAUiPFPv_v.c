/* CB_ARRAY_SetCB__FP14tCB_ARRAY_DATAUiPFPv_v -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a word in the 16-entry table when the index is in range and returns
 * 1, else 0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_022760.c.
 */

int CB_ARRAY_SetCB__FP14tCB_ARRAY_DATAUiPFPv_v(int *table, unsigned int index, int value)
{
    if (index < 16) {
        *(int *)((char *)table + (index << 2)) = value;
        return 1;
    }
    return 0;
}

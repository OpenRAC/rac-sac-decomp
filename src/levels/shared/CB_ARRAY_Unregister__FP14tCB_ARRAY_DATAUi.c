/* CB_ARRAY_Unregister__FP14tCB_ARRAY_DATAUi -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears slot `index` of the two parallel 16-entry word tables; fails for
 * indices of 16 or more.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_022790.c.
 */

typedef struct {
    int a[16];
    int b[16];
} Tab;

int CB_ARRAY_Unregister__FP14tCB_ARRAY_DATAUi(Tab *t, unsigned int index)
{
    if (index < 16) {
        t->a[index] = 0;
        t->b[index] = 0;
        return 1;
    }
    return 0;
}

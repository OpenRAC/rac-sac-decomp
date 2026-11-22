/* PAUSEMENU_GetCurrentItemNode__FP10tPAUSEMENU -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Indexed read guarded by the element count.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_0129E8.c.
 */

struct vec {
    int *base;
    int count;
    int index;
};

int PAUSEMENU_GetCurrentItemNode__FP10tPAUSEMENU(struct vec *v)
{
    if (v->count == 0)
        return 0;
    return v->base[v->index];
}

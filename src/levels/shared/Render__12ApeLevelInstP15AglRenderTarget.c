/* Render__12ApeLevelInstP15AglRenderTarget -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_20FC70.c.
 */

extern void Render__8ApeWorld(int);

void Render__12ApeLevelInstP15AglRenderTarget(int *value)
{
    int id = *value;
    if (id != 0)
        Render__8ApeWorld(id);
}

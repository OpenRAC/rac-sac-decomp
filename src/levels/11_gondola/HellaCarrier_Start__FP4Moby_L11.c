/* HellaCarrier_Start__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1AED20.c.
 */

extern void HellaCarrier_ChangeState__FP4MobyUi(void *, int);

void HellaCarrier_Start__FP4Moby(void *item)
{
    HellaCarrier_ChangeState__FP4MobyUi(item, 1);
}

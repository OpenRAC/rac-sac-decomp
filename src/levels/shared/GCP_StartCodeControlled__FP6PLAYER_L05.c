/* GCP_StartCodeControlled__FP6PLAYER -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/03_kalidon/LEVEL_03_1A6288.c.
 */

extern void GCP_SetState__FP16GiantClankPlayer11GCP_StateID(void *, int);

void GCP_StartCodeControlled__FP6PLAYER(void *item)
{
    GCP_SetState__FP16GiantClankPlayer11GCP_StateID(item, 0xb);
}

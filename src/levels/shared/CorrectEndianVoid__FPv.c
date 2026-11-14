/* CorrectEndianVoid__FPv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void ApeEndianSwap__H1Zv_RPX01_v(void **p);

void CorrectEndianVoid__FPv(void *p)
{
    ApeEndianSwap__H1Zv_RPX01_v(&p);
}

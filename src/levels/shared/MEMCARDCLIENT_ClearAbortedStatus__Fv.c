/* MEMCARDCLIENT_ClearAbortedStatus__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int func_FE_066548(int mask, void *param);

void MEMCARDCLIENT_ClearAbortedStatus__Fv(void)
{
    func_FE_066548(0x8000, 0);
}

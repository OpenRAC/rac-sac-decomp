/* SanzHotSpotRenderCB__FPv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void SanzHotSpotRender__Fv(void);
extern void SanzHotSpotReset__Fv(void);

void SanzHotSpotRenderCB__FPv(void *data)
{
    (void)data;
    SanzHotSpotRender__Fv();
    SanzHotSpotReset__Fv();
}

/* GCS_EndLevelPayloadProcess__FP11GCS_PayloadPC14GCS_CurvePoint -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void GCS_QueueCompleteLevel__Fv(void);

void GCS_EndLevelPayloadProcess__FP11GCS_PayloadPC14GCS_CurvePoint(void)
{
    GCS_QueueCompleteLevel__Fv();
}

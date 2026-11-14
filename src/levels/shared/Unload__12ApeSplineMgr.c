/* Unload__12ApeSplineMgr -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeSplineMgr ApeSplineMgr;

extern void Reset__12ApeSplineMgr(ApeSplineMgr *self);

void Unload__12ApeSplineMgr(ApeSplineMgr *self)
{
    Reset__12ApeSplineMgr(self);
}

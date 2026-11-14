/* SetRegionID__12ApePVSRegionUc -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the region ID as a byte at offset 0.
 */

typedef struct ApePVSRegion ApePVSRegion;

struct ApePVSRegion
{
    unsigned char regionID;
};

void SetRegionID__12ApePVSRegionUc(ApePVSRegion *self, unsigned char id)
{
    self->regionID = id;
}

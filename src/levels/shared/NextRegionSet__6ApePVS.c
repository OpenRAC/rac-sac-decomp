/* NextRegionSet__6ApePVS -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApePVS {
    char pad[0x12];
    unsigned char regionSet;
} ApePVS;

void NextRegionSet__6ApePVS(ApePVS *self)
{
    self->regionSet++;
}

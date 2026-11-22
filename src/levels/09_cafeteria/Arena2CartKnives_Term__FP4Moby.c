/* Arena2CartKnives_Term__FP4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the sub-record at offset 0x58 of the item's state to the record
 * handler.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_1A5F40.c.
 */

extern void PAR_DestroyGroup__FP9PAR_Group(char *record);

void Arena2CartKnives_Term__FP4Moby(char *item)
{
    PAR_DestroyGroup__FP9PAR_Group(*(char **)(item + 0x58) + 0x58);
}

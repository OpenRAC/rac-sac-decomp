/* KillEffect__11StaticTrailP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct StaticTrail {
    char pad_00[0xC];
    unsigned char byte_0C;
    char pad_0D[7];
    int word_14;
} StaticTrail;

void KillEffect__11StaticTrailP4Moby(StaticTrail *self, void *moby)
{
    self->byte_0C = 0;
    self->word_14 = 0;
}

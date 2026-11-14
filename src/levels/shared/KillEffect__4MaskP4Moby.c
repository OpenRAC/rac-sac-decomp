/* KillEffect__4MaskP4Moby -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Mask {
    unsigned char field_00[0x54];
    unsigned int effect_killed;
} Mask;

void KillEffect__4MaskP4Moby(Mask *self, void *moby)
{
    (void)moby;
    self->effect_killed = 0;
}

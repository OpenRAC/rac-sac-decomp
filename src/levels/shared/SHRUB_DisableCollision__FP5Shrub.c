/* SHRUB_DisableCollision__FP5Shrub -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Shrub {
    char pad[0x53];
    unsigned char flags;
} Shrub;

void SHRUB_DisableCollision__FP5Shrub(Shrub *self)
{
    self->flags |= 4;
}

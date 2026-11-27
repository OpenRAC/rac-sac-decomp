/* ConfettiShooter_Init__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x76];
    unsigned char field_76;
} Moby;

int ConfettiShooter_Init__FP4Moby(Moby *self)
{
    self->field_76 = 0x1E;
    return 1;
}

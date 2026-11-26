/* Arena3SentryGunMissile_Init__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the byte at offset 0x46 and returns 1.
 */

typedef struct State {
    char pad[0x46];
    unsigned char field;
} State;

int Arena3SentryGunMissile_Init__FP4Moby(State *self)
{
    self->field = 0;
    return 1;
}

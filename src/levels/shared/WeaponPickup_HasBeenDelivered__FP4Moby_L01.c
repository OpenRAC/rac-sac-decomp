/* WeaponPickup_HasBeenDelivered__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x45];
    unsigned char state;
} Moby;

int WeaponPickup_HasBeenDelivered__FP4Moby(Moby *self)
{
    return self->state >= 2;
}

/* ClankShip_UpdateCamFollow__FP4MobyT0 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x64];
    unsigned char flag;
} Moby;

int ClankShip_UpdateCamFollow__FP4MobyT0(Moby *self, Moby *other)
{
    (void)self;
    return (other->flag ^ 1) & 1;
}

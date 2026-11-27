/* RynoRocket_Init__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x45];
    unsigned char state;
    char pad2[0x2A];
    void *ptr;
} Moby;

int RynoRocket_Init__FP4Moby(Moby *self)
{
    self->ptr = 0;
    self->state = 0;
    return 1;
}

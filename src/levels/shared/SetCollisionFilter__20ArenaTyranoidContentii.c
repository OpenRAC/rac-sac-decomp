/* SetCollisionFilter__20ArenaTyranoidContentii -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Keeps the selected collision flags, adds the new bits, and returns 1.
 */

typedef struct Inner {
    char pad[12];
    unsigned short flags;
} Inner;

typedef struct State {
    char pad[8];
    Inner inner;
} State;

int SetCollisionFilter__20ArenaTyranoidContentii(State *self, int keep, int bits)
{
    Inner *inner;

    inner = &self->inner;
    inner->flags = (inner->flags & keep) | bits;
    return 1;
}

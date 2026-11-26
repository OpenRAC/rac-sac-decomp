/* CanActivate__14Piggy_PlayAnim -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the pointer matches this object.
 */

typedef struct Inner {
    char pad[0x4];
    void *ptr;
} Inner;

typedef struct State {
    char pad[0x4];
    Inner *inner;
} State;

int CanActivate__14Piggy_PlayAnim(State *self)
{
    return self->inner->ptr == self;
}

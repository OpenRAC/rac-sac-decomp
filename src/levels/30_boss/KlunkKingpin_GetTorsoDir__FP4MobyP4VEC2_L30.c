/* KlunkKingpin_GetTorsoDir__FP4MobyP4VEC2 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies two floats from the object reached through one pointer.
 */

typedef struct Vec2 {
    float x;
    float y;
} Vec2;

typedef struct Inner {
    char pad[92];
    float x;
    float y;
} Inner;

typedef struct Moby {
    char pad[88];
    Inner *target;
} Moby;

void KlunkKingpin_GetTorsoDir__FP4MobyP4VEC2(Moby *self, Vec2 *out)
{
    Inner *target;

    target = self->target;
    out->x = target->x;
    out->y = target->y;
}

/* GadgetBot_GetTargetPos__FP4MobyP4VEC2 -- 24 bytes.
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

typedef struct Moby {
    char pad[84];
    Vec2 *target;
} Moby;

void GadgetBot_GetTargetPos__FP4MobyP4VEC2(Moby *self, Vec2 *out)
{
    Vec2 *target;

    target = self->target;
    out->x = target->x;
    out->y = target->y;
}

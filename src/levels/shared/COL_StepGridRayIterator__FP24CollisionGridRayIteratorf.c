/* COL_StepGridRayIterator__FP24CollisionGridRayIteratorf -- 424 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Advances the earliest of three timed integer ramps (x, y, z) of a record and
 * flags the axis that reached its limit.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_115FF8.c.
 */

typedef struct Ramp {
    unsigned int flags;
    int pos[3];
    int limit[3];
    int delta[3];
    float base;
    float t[3];
    float dt[3];
} Ramp;

int COL_StepGridRayIterator__FP24CollisionGridRayIteratorf(Ramp *r, float now)
{
    float t2;

    if (r->flags == 7)
        return 0;
    now = now - r->base;
    t2 = r->t[2];
    if (r->t[0] <= r->t[1] && r->t[0] <= t2) {
        if (now <= r->t[0])
            return 0;
        r->t[0] = r->t[0] + r->dt[0];
        r->pos[0] = r->pos[0] + r->delta[0];
        if (r->delta[0] < 0) {
            if (!(r->limit[0] < r->pos[0]))
                r->flags |= 1;
        } else if (r->delta[0] > 0) {
            if (!(r->pos[0] < r->limit[0]))
                r->flags |= 1;
        }
    } else if (r->t[1] <= r->t[0] && r->t[1] <= t2) {
        if (now <= r->t[1])
            return 0;
        r->t[1] = r->t[1] + r->dt[1];
        r->pos[1] = r->pos[1] + r->delta[1];
        if (r->delta[1] < 0) {
            if (!(r->limit[1] < r->pos[1]))
                r->flags |= 2;
        } else if (r->delta[1] > 0) {
            if (!(r->pos[1] < r->limit[1]))
                r->flags |= 2;
        }
    } else {
        if (now <= t2)
            return 0;
        r->t[2] = t2 + r->dt[2];
        r->pos[2] = r->pos[2] + r->delta[2];
        if (r->delta[2] < 0) {
            if (!(r->limit[2] < r->pos[2]))
                r->flags |= 4;
        } else if (r->delta[2] > 0) {
            if (!(r->pos[2] < r->limit[2]))
                r->flags |= 4;
        }
    }
    return 1;
}

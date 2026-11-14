/* Navigate_IsValidPosInt__FPC8NavigatePC4VEC4bf -- 216 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Validity check of an integer position. If self->trigger exists and
 * TRIGGER_CheckPointInside says the point is outside, it returns 0. If
 * self->moby exists and TriggerCollection_CheckPointInside says the point is
 * outside, it returns 0. The position vector is copied into a local VEC4 on
 * the stack; if self->f31 is set or the flag argument is not requested it
 * returns 1, otherwise it returns whether GU_ClampToFloor(v, f, 0, 1)
 * succeeds, which snaps the local copy to the floor. The short-circuit "||"
 * form is the retail one: it keeps the phi on the result and the three
 * distinct branches that an if/else cascade would flatten.
 */

typedef struct Navigate Navigate;
typedef struct Trigger Trigger;
typedef struct Moby Moby;

struct Navigate {
    unsigned char pad00[0x10];
    Trigger *trigger;
    unsigned char pad14[4];
    Moby *moby;
    unsigned char pad1C[0x15];
    unsigned char f31;
};

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct VEC4 {
    float x;
    float y;
    float z;
    float w;
} VEC4;

extern int TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(
    Trigger const *trigger, VEC3 const *point);
extern int TriggerCollection_CheckPointInside__FPC4MobyPC4VEC3(
    Moby const *moby, VEC3 const *point);
extern int GU_ClampToFloor__FP4VEC3fPfb(
    VEC3 *point, float height, void *owner, int mode);

int Navigate_IsValidPosInt__FPC8NavigatePC4VEC4bf(
    Navigate const *self, VEC4 const *point, int flag, float height)
{
    int ok;
    VEC4 v;

    if (self->trigger
        && !TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(
            self->trigger, (VEC3 const *)point))
        return 0;
    if (self->moby
        && TriggerCollection_CheckPointInside__FPC4MobyPC4VEC3(
            self->moby, (VEC3 const *)point))
        return 0;

    v.x = point->x;
    v.y = point->y;
    v.z = point->z;
    v.w = point->w;

    ok = 0;
    if (self->f31 || !flag
        || (unsigned char)GU_ClampToFloor__FP4VEC3fPfb(
            (VEC3 *)&v, height, 0, 1))
        ok = 1;
    return ok;
}

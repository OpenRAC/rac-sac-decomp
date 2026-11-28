/* Begin__19StrafeTowardsTarget -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct StrafeInner {
    char pad[0x5C];
    int value;
} StrafeInner;

typedef struct StrafeMid {
    char pad[0x38];
    int dest;
    StrafeInner *inner;
} StrafeMid;

typedef struct StrafeTowardsTarget {
    char pad[0xC];
    StrafeMid *mid;
} StrafeTowardsTarget;

void Begin__19StrafeTowardsTarget(StrafeTowardsTarget *self)
{
    StrafeMid *mid;

    mid = self->mid;
    mid->dest = mid->inner->value;
}

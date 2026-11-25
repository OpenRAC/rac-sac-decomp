/* VehicleObstacle_GetReaction__FPC4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by three loads from the receiver.
 */

typedef struct Inner {
    char pad[0x4];
    int value;
} Inner;

typedef struct Mid {
    char pad[0xC];
    Inner *inner;
} Mid;

typedef struct State {
    char pad[0x58];
    Mid *field;
} State;

int VehicleObstacle_GetReaction__FPC4Moby(State *self)
{
    return self->field->inner->value;
}

/* GetHash__20APEGDE_BoneComponent -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by three loads from the receiver.
 */

typedef struct Inner {
    char pad[0x40];
    int value;
} Inner;

typedef struct Mid {
    Inner *inner;
} Mid;

typedef struct State {
    char pad[0x10];
    Mid *field;
} State;

int GetHash__20APEGDE_BoneComponent(State *self)
{
    return self->field->inner->value;
}

/* SetDebugFlags__6ApeObjRCQ26ApeObj10DebugFlags -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one word from the second object.
 */

typedef struct Source {
    int value;
} Source;

typedef struct State {
    char pad[0x108];
    int field;
} State;

void SetDebugFlags__6ApeObjRCQ26ApeObj10DebugFlags(State *self, Source *other)
{
    self->field = other->value;
}

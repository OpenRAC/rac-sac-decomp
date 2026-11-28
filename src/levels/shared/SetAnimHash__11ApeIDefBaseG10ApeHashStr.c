/* SetAnimHash__11ApeIDefBaseG10ApeHashStr -- 12 bytes.
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
    char pad[0x64];
    int field;
} State;

void SetAnimHash__11ApeIDefBaseG10ApeHashStr(State *self, Source *other)
{
    self->field = other->value;
}

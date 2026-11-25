/* SetFollower__9NinjaSparP9NinjaSpar -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores an argument and the constant 1.
 */

typedef struct State {
    char pad[0x18];
    int field;
    int value;
} State;

void SetFollower__9NinjaSparP9NinjaSpar(State *self, int argument)
{
    self->value = argument;
    self->field = 1;
}

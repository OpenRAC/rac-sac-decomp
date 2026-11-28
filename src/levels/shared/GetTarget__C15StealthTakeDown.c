/* GetTarget__C15StealthTakeDown -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x10.
 */

typedef struct State {
    char pad[0x10];
    int field;
} State;

int GetTarget__C15StealthTakeDown(State *self)
{
    return self->field;
}

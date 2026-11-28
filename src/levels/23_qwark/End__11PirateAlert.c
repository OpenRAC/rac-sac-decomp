/* End__11PirateAlert -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the word at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    int field;
} State;

void End__11PirateAlert(State *self)
{
    self->field = 1;
}

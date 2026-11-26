/* Init__19Doppleganger_Attack -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0xC of the state.
 */

typedef struct State {
    char pad[0xC];
    int field;
} State;

void Init__19Doppleganger_Attack(State *self)
{
    self->field = 0;
}

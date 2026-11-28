/* shellPadClearToggleBtn -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears three words of the state.
 */

typedef struct State {
    char pad_108[0x108];
    int at_108;
    int at_10C;
    int at_110;
} State;

void shellPadClearToggleBtn(State *self)
{
    self->at_108 = 0;
    self->at_10C = 0;
    self->at_110 = 0;
}

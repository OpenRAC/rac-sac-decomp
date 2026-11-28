/* AnimTranslator_ClearFrameTrans__FP14AnimTranslator -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears three words of the state.
 */

typedef struct State {
    char pad_18[0x18];
    int at_18;
    int at_1C;
    int at_20;
} State;

void AnimTranslator_ClearFrameTrans__FP14AnimTranslator(State *self)
{
    self->at_18 = 0;
    self->at_1C = 0;
    self->at_20 = 0;
}

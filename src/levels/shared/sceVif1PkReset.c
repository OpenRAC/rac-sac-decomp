/* sceVif1PkReset -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one word and clears another.
 */

typedef struct State {
    int at_0;
    int at_4;
    int at_8;
} State;

void sceVif1PkReset(State *self)
{
    int held = self->at_4;
    self->at_8 = 0;
    self->at_0 = held;
}

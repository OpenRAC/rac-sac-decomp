/* sceVif1PkInit -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument at offsets 0 and 4, and clears the word at offset 8.
 */

typedef struct State {
    int first;
    int second;
    int third;
} State;

void sceVif1PkInit(State *self, int value)
{
    self->third = 0;
    self->second = value;
    self->first = value;
}

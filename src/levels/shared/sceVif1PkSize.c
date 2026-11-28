/* sceVif1PkSize -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the distance between two words, divided by 16.
 */

typedef struct State {
    unsigned int low;
    unsigned int high;
} State;

int sceVif1PkSize(State *self)
{
    return (self->low - self->high) >> 4;
}

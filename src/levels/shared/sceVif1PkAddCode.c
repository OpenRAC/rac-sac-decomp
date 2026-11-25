/* sceVif1PkAddCode -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends one word and advances the cursor.
 */

typedef struct State {
    int *ptr;
} State;

void sceVif1PkAddCode(State *self, int value)
{
    int *slot = self->ptr;
    *slot = value;
    self->ptr = slot + 1;
}

/* Active__10SoapSplash -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x14 is non-zero.
 */

typedef struct State {
    char pad[0x14];
    int field;
} State;

int Active__10SoapSplash(State *self)
{
    return self->field != 0;
}

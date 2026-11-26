/* Active__9AcidSmoke -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x30 is non-zero.
 */

typedef struct State {
    char pad[0x30];
    int field;
} State;

int Active__9AcidSmoke(State *self)
{
    return self->field != 0;
}

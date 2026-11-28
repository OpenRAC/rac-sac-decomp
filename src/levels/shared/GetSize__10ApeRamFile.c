/* GetSize__10ApeRamFile -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x11C.
 */

typedef struct State {
    char pad[0x11C];
    int field;
} State;

int GetSize__10ApeRamFile(State *self)
{
    return self->field;
}

/* GetProperties__C13ApeEmitterDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x70.
 */

typedef struct State {
    char pad[0x70];
    int field;
} State;

int GetProperties__C13ApeEmitterDef(State *self)
{
    return self->field;
}

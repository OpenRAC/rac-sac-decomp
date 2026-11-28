/* GetDef__C18ApeEmitterInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xCC.
 */

typedef struct State {
    char pad[0xCC];
    int field;
} State;

int GetDef__C18ApeEmitterInstance(State *self)
{
    return self->field;
}

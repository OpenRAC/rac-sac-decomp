/* Error__C13TiXmlDocument -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the low bits of the word at offset 0x24.
 */

typedef struct State {
    char pad[0x24];
    int field;
} State;

int Error__C13TiXmlDocument(State *self)
{
    return self->field & 1;
}

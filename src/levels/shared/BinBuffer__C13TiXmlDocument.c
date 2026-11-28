/* BinBuffer__C13TiXmlDocument -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x30.
 */

typedef struct State {
    char pad[0x30];
    int field;
} State;

int BinBuffer__C13TiXmlDocument(State *self)
{
    return self->field;
}

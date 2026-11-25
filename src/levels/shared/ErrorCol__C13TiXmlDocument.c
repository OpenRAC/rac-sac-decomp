/* ErrorCol__C13TiXmlDocument -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pointer loaded from offset 0x2C, advanced by 1 bytes.
 */

typedef struct State {
    char pad[0x2C];
    char *field;
} State;

char *ErrorCol__C13TiXmlDocument(State *self)
{
    return self->field + 1;
}

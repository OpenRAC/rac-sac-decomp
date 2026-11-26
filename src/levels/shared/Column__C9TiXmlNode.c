/* Column__C9TiXmlNode -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pointer loaded from offset 0xC, advanced by 1 bytes.
 */

typedef struct State {
    char pad[0xC];
    char *field;
} State;

char *Column__C9TiXmlNode(State *self)
{
    return self->field + 1;
}

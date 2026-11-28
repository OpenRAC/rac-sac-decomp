/* Row__C9TiXmlNode -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pointer loaded from offset 0x8, advanced by 1 bytes.
 */

typedef struct State {
    char pad[0x8];
    char *field;
} State;

char *Row__C9TiXmlNode(State *self)
{
    return self->field + 1;
}

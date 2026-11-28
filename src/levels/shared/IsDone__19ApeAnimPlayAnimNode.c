/* IsDone__19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x59.
 */

typedef struct State {
    char pad[0x59];
    unsigned char field;
} State;

int IsDone__19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}

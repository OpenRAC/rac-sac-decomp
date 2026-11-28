/* GetName__C6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the byte at offset 0xA7.
 */

typedef struct State {
    char pad[0xA7];
    char field;
} State;

char *GetName__C6ApeObj(State *self)
{
    return &self->field;
}

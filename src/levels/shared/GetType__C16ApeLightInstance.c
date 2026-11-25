/* GetType__C16ApeLightInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x150.
 */

typedef struct State {
    char pad[0x150];
    unsigned char field;
} State;

int GetType__C16ApeLightInstance(State *self)
{
    return self->field;
}

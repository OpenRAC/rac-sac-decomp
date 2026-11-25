/* GetAnimHash__C11ApeIDefBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x64.
 */

typedef struct State {
    char pad[0x64];
    int field[1];
} State;

int *GetAnimHash__C11ApeIDefBase(State *self)
{
    return self->field;
}

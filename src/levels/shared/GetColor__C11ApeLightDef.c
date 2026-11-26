/* GetColor__C11ApeLightDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x80.
 */

typedef struct State {
    char pad[0x80];
    int field[1];
} State;

int *GetColor__C11ApeLightDef(State *self)
{
    return self->field;
}

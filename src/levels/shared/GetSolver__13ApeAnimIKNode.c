/* GetSolver__13ApeAnimIKNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x28.
 */

typedef struct State {
    char pad[0x28];
    int field[1];
} State;

int *GetSolver__13ApeAnimIKNode(State *self)
{
    return self->field;
}

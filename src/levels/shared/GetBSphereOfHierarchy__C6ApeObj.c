/* GetBSphereOfHierarchy__C6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xE0.
 */

typedef struct State {
    char pad[0xE0];
    int field[1];
} State;

int *GetBSphereOfHierarchy__C6ApeObj(State *self)
{
    return self->field;
}

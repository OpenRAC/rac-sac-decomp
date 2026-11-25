/* SetObjID__20ApeCollisionInstanceP6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x64.
 */

typedef struct State {
    char pad[0x64];
    int field;
} State;

void SetObjID__20ApeCollisionInstanceP6ApeObj(State *self, int value)
{
    self->field = value;
}

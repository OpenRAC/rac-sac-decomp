/* SetPhysics__11ApeIDefBaseP13ApePhysicsDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x6C.
 */

typedef struct State {
    char pad[0x6C];
    int field;
} State;

void SetPhysics__11ApeIDefBaseP13ApePhysicsDef(State *self, int value)
{
    self->field = value;
}

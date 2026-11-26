/* GetShapeData__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xB8.
 */

typedef struct State {
    char pad[0xB8];
    int field;
} State;

int GetShapeData__15ApeCollisionDef(State *self)
{
    return self->field;
}

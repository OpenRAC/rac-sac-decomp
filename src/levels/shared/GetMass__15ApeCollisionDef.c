/* GetMass__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0xB4.
 */

typedef struct State {
    char pad[0xB4];
    float field;
} State;

float GetMass__15ApeCollisionDef(State *self)
{
    return self->field;
}

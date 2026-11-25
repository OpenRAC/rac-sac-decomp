/* GetQuadraticAtten__C11ApeLightDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x9C.
 */

typedef struct State {
    char pad[0x9C];
    float field;
} State;

float GetQuadraticAtten__C11ApeLightDef(State *self)
{
    return self->field;
}

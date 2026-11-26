/* GetFarZCullSqr__C11ApeInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x12C.
 */

typedef struct State {
    char pad[0x12C];
    float field;
} State;

float GetFarZCullSqr__C11ApeInstance(State *self)
{
    return self->field;
}

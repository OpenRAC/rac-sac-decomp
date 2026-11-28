/* SetFarZCullSqr__11ApeInstancef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x12C.
 */

typedef struct State {
    char pad[0x12C];
    float field;
} State;

void SetFarZCullSqr__11ApeInstancef(State *self, float value)
{
    self->field = value;
}

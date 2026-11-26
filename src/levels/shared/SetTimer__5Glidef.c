/* SetTimer__5Glidef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    float field;
} State;

void SetTimer__5Glidef(State *self, float value)
{
    self->field = value;
}

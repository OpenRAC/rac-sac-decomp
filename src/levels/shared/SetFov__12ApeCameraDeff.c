/* SetFov__12ApeCameraDeff -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0xB0.
 */

typedef struct State {
    char pad[0xB0];
    float field;
} State;

void SetFov__12ApeCameraDeff(State *self, float value)
{
    self->field = value;
}

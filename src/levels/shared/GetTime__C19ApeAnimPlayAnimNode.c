/* GetTime__C19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x38.
 */

typedef struct State {
    char pad[0x38];
    float field;
} State;

float GetTime__C19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}

/* GetTotalTimeAnimated__19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x30.
 */

typedef struct State {
    char pad[0x30];
    float field;
} State;

float GetTotalTimeAnimated__19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}

/* GetTimeScale__C19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x34.
 */

typedef struct State {
    char pad[0x34];
    float field;
} State;

float GetTimeScale__C19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}

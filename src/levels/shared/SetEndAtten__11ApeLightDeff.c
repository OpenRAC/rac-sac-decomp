/* SetEndAtten__11ApeLightDeff -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x98.
 */

typedef struct State {
    char pad[0x98];
    float field;
} State;

void SetEndAtten__11ApeLightDeff(State *self, float value)
{
    self->field = value;
}

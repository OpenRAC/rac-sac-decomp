/* PLAYER_SetHitPoints__FP6PLAYERf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x274.
 */

typedef struct State {
    char pad[0x274];
    float field;
} State;

void PLAYER_SetHitPoints__FP6PLAYERf(State *self, float value)
{
    self->field = value;
}

/* FIRSTPERSON_SetControlSpeedScaleCallback__FP6PLAYERPFP6PLAYER_f -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x6A8.
 */

typedef struct State {
    char pad[0x6A8];
    int field;
} State;

void FIRSTPERSON_SetControlSpeedScaleCallback__FP6PLAYERPFP6PLAYER_f(State *self, int value)
{
    self->field = value;
}

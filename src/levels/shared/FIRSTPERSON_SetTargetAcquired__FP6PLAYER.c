/* FIRSTPERSON_SetTargetAcquired__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0f in the float at offset 0x6F8.
 */

typedef struct State {
    char pad[0x6F8];
    float field;
} State;

void FIRSTPERSON_SetTargetAcquired__FP6PLAYER(State *self)
{
    self->field = 1.0f;
}

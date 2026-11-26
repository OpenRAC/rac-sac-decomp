/* FIRSTPERSON_GetHit__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0f in the float at offset 0x74C.
 */

typedef struct State {
    char pad[0x74C];
    float field;
} State;

void FIRSTPERSON_GetHit__FP6PLAYER(State *self)
{
    self->field = 1.0f;
}

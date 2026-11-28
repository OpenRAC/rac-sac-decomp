/* GCSLANCER_StrafeStateCreate__FPv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0f in the float at offset 0x44.
 */

typedef struct State {
    char pad[0x44];
    float field;
} State;

void GCSLANCER_StrafeStateCreate__FPv(State *self)
{
    self->field = 1.0f;
}

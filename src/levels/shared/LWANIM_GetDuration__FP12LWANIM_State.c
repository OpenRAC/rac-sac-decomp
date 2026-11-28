/* LWANIM_GetDuration__FP12LWANIM_State -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x18.
 */

typedef struct State {
    char pad[0x18];
    float field;
} State;

float LWANIM_GetDuration__FP12LWANIM_State(State *self)
{
    return self->field;
}

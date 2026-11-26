/* GCP_GetMegaBlasterCharge__FP6PLAYER -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0xAE4.
 */

typedef struct State {
    char pad[0xAE4];
    float field;
} State;

float GCP_GetMegaBlasterCharge__FP6PLAYER(State *self)
{
    return self->field;
}

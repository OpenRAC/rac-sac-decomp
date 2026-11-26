/* IHaveAttacked__19Doppleganger_Attack -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0f in the float at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    float field;
} State;

void IHaveAttacked__19Doppleganger_Attack(State *self)
{
    self->field = 1.0f;
}

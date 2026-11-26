/* GetStartAtten__C11ApeLightDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x94.
 */

typedef struct State {
    char pad[0x94];
    float field;
} State;

float GetStartAtten__C11ApeLightDef(State *self)
{
    return self->field;
}

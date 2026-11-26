/* GetLength__C9ApeSpline -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x28.
 */

typedef struct State {
    char pad[0x28];
    float field;
} State;

float GetLength__C9ApeSpline(State *self)
{
    return self->field;
}

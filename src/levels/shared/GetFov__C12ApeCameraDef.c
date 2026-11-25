/* GetFov__C12ApeCameraDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0xB0.
 */

typedef struct State {
    char pad[0xB0];
    float field;
} State;

float GetFov__C12ApeCameraDef(State *self)
{
    return self->field;
}

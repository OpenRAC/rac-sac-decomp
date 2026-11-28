/* Spotlight_GetLength__FP9Spotlight -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x34.
 */

typedef struct State {
    char pad[0x34];
    float field;
} State;

float Spotlight_GetLength__FP9Spotlight(State *self)
{
    return self->field;
}

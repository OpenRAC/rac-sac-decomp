/* Spotlight_Destroy__FP9Spotlight -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores -1.0f in the float at offset 0x34.
 */

typedef struct State {
    char pad[0x34];
    float field;
} State;

void Spotlight_Destroy__FP9Spotlight(State *self)
{
    self->field = -1.0f;
}

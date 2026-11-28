/* Flashlight_GetColor__FP10Flashlight -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x74.
 */

typedef struct State {
    char pad[0x74];
    int field;
} State;

int Flashlight_GetColor__FP10Flashlight(State *self)
{
    return self->field;
}

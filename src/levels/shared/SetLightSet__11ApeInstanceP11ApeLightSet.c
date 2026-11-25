/* SetLightSet__11ApeInstanceP11ApeLightSet -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x13C.
 */

typedef struct State {
    char pad[0x13C];
    int field;
} State;

void SetLightSet__11ApeInstanceP11ApeLightSet(State *self, int value)
{
    self->field = value;
}

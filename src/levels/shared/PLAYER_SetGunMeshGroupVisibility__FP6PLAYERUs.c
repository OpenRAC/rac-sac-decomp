/* PLAYER_SetGunMeshGroupVisibility__FP6PLAYERUs -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a halfword at offset 0x37C.
 */

typedef struct State {
    char pad[0x37C];
    short field;
} State;

void PLAYER_SetGunMeshGroupVisibility__FP6PLAYERUs(State *self, int value)
{
    self->field = value;
}

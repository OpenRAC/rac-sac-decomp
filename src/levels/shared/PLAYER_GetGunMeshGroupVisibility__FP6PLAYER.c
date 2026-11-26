/* PLAYER_GetGunMeshGroupVisibility__FP6PLAYER -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned halfword at offset 0x37C.
 */

typedef struct State {
    char pad[0x37C];
    unsigned short field;
} State;

int PLAYER_GetGunMeshGroupVisibility__FP6PLAYER(State *self)
{
    return self->field;
}

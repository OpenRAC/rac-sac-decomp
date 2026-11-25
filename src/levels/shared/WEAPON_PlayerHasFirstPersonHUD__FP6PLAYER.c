/* WEAPON_PlayerHasFirstPersonHUD__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares the value at offset 0x344.
 */

typedef struct State {
    char pad[0x344];
    int field;
} State;

int WEAPON_PlayerHasFirstPersonHUD__FP6PLAYER(State *self)
{
    return (unsigned)(self->field - 24) < 2u;
}

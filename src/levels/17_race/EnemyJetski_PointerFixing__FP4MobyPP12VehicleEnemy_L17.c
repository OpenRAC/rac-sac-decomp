/* EnemyJetski_PointerFixing__FP4MobyPP12VehicleEnemy -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the word at offset 0x58 into the destination.
 */

typedef struct State {
    char pad[0x58];
    int field;
} State;

void EnemyJetski_PointerFixing__FP4MobyPP12VehicleEnemy(State *self, int *dest)
{
    *dest = self->field;
}

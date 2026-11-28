/* ShouldExpectFriendlyFire__21EnemySpeedBoatContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x12C.
 */

typedef struct State {
    char pad[0x12C];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__21EnemySpeedBoatContent(State *self)
{
    return self->field;
}

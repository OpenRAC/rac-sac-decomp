/* ShouldExpectFriendlyFire__15EnemyCarContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x128.
 */

typedef struct State {
    char pad[0x128];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__15EnemyCarContent(State *self)
{
    return self->field;
}

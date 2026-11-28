/* ShouldExpectFriendlyFire__18EnemyJetSkiContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x190.
 */

typedef struct State {
    char pad[0x190];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__18EnemyJetSkiContent(State *self)
{
    return self->field;
}

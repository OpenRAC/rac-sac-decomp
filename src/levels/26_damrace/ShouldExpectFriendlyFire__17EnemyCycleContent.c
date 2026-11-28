/* ShouldExpectFriendlyFire__17EnemyCycleContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x148.
 */

typedef struct State {
    char pad[0x148];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__17EnemyCycleContent(State *self)
{
    return self->field;
}

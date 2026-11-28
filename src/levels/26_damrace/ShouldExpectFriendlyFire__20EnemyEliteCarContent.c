/* ShouldExpectFriendlyFire__20EnemyEliteCarContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x100.
 */

typedef struct State {
    char pad[0x100];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__20EnemyEliteCarContent(State *self)
{
    return self->field;
}

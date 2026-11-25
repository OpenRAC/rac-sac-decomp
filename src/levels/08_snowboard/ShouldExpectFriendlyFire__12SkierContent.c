/* ShouldExpectFriendlyFire__12SkierContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x1CC.
 */

typedef struct State {
    char pad[0x1CC];
    unsigned char field;
} State;

int ShouldExpectFriendlyFire__12SkierContent(State *self)
{
    return self->field;
}

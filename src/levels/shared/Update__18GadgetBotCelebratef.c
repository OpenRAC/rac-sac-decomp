/* Update__18GadgetBotCelebratef -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decrements the counter when it is not already zero.
 */

typedef struct State {
    char pad[12];
    int left;
} State;

void Update__18GadgetBotCelebratef(State *self)
{
    if (self->left != 0)
        self->left -= 1;
}

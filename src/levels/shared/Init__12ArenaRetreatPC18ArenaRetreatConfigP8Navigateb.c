/* Init__12ArenaRetreatPC18ArenaRetreatConfigP8Navigateb -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one byte and two words.
 */

typedef struct State {
    char pad[0xC];
    unsigned char flag;
    char gap[3];
    int mid;
    int high;
} State;

void Init__12ArenaRetreatPC18ArenaRetreatConfigP8Navigateb(State *self, int first, int second, int flag)
{
    self->high = first;
    self->mid = second;
    self->flag = flag;
}

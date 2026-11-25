/* Init__9ArenaFallPC15ArenaFallConfigb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one word and one byte.
 */

typedef struct State {
    char pad[0xC];
    unsigned char low;
    int high;
} State;

void Init__9ArenaFallPC15ArenaFallConfigb(State *self, int word, int flag)
{
    self->high = word;
    self->low = flag;
}

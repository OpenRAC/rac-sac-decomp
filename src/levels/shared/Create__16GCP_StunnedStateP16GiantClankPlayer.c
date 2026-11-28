/* Create__16GCP_StunnedStateP16GiantClankPlayer -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0x4];
    int low;
    int high;
} State;

void Create__16GCP_StunnedStateP16GiantClankPlayer(State *self)
{
    self->low = 0;
    self->high = 0;
}

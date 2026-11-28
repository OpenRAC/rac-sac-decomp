/* Init__16BoltThief_Patrol -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1 and clears the next byte.
 */

typedef struct State {
    char pad[0xC];
    unsigned char field;
    unsigned char next;
} State;

void Init__16BoltThief_Patrol(State *self)
{
    self->next = 0;
    self->field = 1;
}

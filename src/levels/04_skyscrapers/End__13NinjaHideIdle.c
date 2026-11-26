/* End__13NinjaHideIdle -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one flag bit through two pointers.
 */

typedef struct Tail {
    char pad[100];
    int flags;
} Tail;

typedef struct Mid {
    char pad[16];
    Tail *tail;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

void End__13NinjaHideIdle(State *self)
{
    self->mid->tail->flags &= -1025;
}

/* Init__10PirateIdle -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern char g_state[];

typedef struct PirateIdle {
    char pad[0xC];
    void *state;
} PirateIdle;

void Init__10PirateIdle(PirateIdle *self)
{
    self->state = g_state;
}

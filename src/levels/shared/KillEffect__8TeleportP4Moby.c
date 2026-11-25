/* KillEffect__8TeleportP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word and stores a constant in another.
 */

typedef struct State {
    char pad[0x1C];
    int stored;
    int cleared;
} State;

void KillEffect__8TeleportP4Moby(State *self)
{
    self->cleared = 0;
    self->stored = 1;
}

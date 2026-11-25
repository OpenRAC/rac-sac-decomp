/* KillEffect__9ForceRopeP4Moby -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0x18 of the state.
 */

typedef struct State {
    char pad[0x18];
    int field;
} State;

void KillEffect__9ForceRopeP4Moby(State *self)
{
    self->field = 0;
}

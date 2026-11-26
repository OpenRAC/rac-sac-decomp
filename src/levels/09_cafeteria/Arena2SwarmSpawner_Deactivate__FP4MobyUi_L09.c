/* Arena2SwarmSpawner_Deactivate__FP4MobyUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one indexed byte through a pointer.
 */

typedef struct State {
    char pad[0x58];
    unsigned char *bytes;
} State;

void Arena2SwarmSpawner_Deactivate__FP4MobyUi(State *self, int index)
{
    *(self->bytes + index + 24) = 0;
}

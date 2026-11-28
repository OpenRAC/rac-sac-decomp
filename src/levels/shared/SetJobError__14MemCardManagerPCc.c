/* SetJobError__14MemCardManagerPCc -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the byte at offset 0xE0.
 */

typedef struct State {
    char pad[0xE0];
    unsigned char field;
} State;

void SetJobError__14MemCardManagerPCc(State *self)
{
    self->field = 1;
}

/* Arena2Trash_Init__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets one flag bit and returns 1.
 */

typedef struct State {
    char pad[100];
    unsigned int flags;
} State;

int Arena2Trash_Init__FP4Moby(State *self)
{
    self->flags |= 4096;
    return 1;
}

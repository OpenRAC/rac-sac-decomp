/* LockChallenge_Finished__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 3 and clears the next byte.
 */

typedef struct State {
    char pad[0x45];
    unsigned char field;
    unsigned char next;
} State;

void LockChallenge_Finished__FP4Moby(State *self)
{
    self->next = 0;
    self->field = 3;
}

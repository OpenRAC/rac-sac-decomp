/* FIRSTPERSON_IsMovingToPlayer__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x61C equals 1.
 */

typedef struct State {
    char pad[0x61C];
    int field;
} State;

int FIRSTPERSON_IsMovingToPlayer__FP6PLAYER(State *self)
{
    return self->field == 1;
}

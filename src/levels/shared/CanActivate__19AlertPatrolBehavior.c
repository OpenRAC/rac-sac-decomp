/* CanActivate__19AlertPatrolBehavior -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x10 is non-zero.
 */

typedef struct State {
    char pad[0x10];
    int field;
} State;

int CanActivate__19AlertPatrolBehavior(State *self)
{
    return self->field != 0;
}

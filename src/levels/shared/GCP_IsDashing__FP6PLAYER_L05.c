/* GCP_IsDashing__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0xAF0 equals 2.
 */

typedef struct State {
    char pad[0xAF0];
    int field;
} State;

int GCP_IsDashing__FP6PLAYER(State *self)
{
    return self->field == 2;
}

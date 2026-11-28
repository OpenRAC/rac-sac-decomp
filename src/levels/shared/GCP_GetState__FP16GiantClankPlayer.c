/* GCP_GetState__FP16GiantClankPlayer -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xAF0.
 */

typedef struct State {
    char pad[0xAF0];
    int field;
} State;

int GCP_GetState__FP16GiantClankPlayer(State *self)
{
    return self->field;
}

/* GCP_AnimGetActive__FP16GiantClankPlayer -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xBBC.
 */

typedef struct State {
    char pad[0xBBC];
    int field;
} State;

int GCP_AnimGetActive__FP16GiantClankPlayer(State *self)
{
    return self->field;
}

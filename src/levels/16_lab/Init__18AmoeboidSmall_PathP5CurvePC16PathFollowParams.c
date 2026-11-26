/* Init__18AmoeboidSmall_PathP5CurvePC16PathFollowParams -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two integer arguments.
 */

typedef struct State {
    char pad_18[0x18];
    int at_18;
    int at_1C;
} State;

void Init__18AmoeboidSmall_PathP5CurvePC16PathFollowParams(State *self, int first, int second)
{
    self->at_1C = first;
    self->at_18 = second;
}

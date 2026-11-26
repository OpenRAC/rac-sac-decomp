/* Init__11AlertNoticePC17AlertNoticeConfigP14AlertStateData -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two integer arguments and clears one word.
 */

typedef struct State {
    char pad_C[0xC];
    int at_C;
    int at_10;
    int at_14;
} State;

void Init__11AlertNoticePC17AlertNoticeConfigP14AlertStateData(State *self, int first, int second)
{
    self->at_10 = first;
    self->at_C = second;
    self->at_14 = 0;
}

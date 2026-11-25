/* Init__19StaticMidge_WhistlePC25ReallyBasicPlayAnimConfigP17AlertBehaviorData -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two integer arguments.
 */

typedef struct State {
    char pad_C[0xC];
    int at_C;
    char pad_14[0x4];
    int at_14;
} State;

void Init__19StaticMidge_WhistlePC25ReallyBasicPlayAnimConfigP17AlertBehaviorData(State *self, int first, int second)
{
    self->at_14 = second;
    self->at_C = first;
}

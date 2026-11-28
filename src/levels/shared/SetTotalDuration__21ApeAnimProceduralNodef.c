/* SetTotalDuration__21ApeAnimProceduralNodef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x30.
 */

typedef struct State {
    char pad[0x30];
    float field;
} State;

void SetTotalDuration__21ApeAnimProceduralNodef(State *self, float value)
{
    self->field = value;
}

/* SetCaptureType__26KingpinState_CapturedClankUc -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    unsigned char field;
} State;

void SetCaptureType__26KingpinState_CapturedClankUc(State *self, int value)
{
    self->field = value;
}

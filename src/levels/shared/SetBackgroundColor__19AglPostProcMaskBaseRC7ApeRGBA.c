/* SetBackgroundColor__19AglPostProcMaskBaseRC7ApeRGBA -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the four-byte colour at offset 0x29, packed after the blend flag.
 */

typedef struct ApeRGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} ApeRGBA;

typedef struct State {
    char pad[0x28];
    unsigned char blendOnFrameBufferLast;
    ApeRGBA color;
} State;

void SetBackgroundColor__19AglPostProcMaskBaseRC7ApeRGBA(
    State *self, const ApeRGBA *color)
{
    self->color = *color;
}

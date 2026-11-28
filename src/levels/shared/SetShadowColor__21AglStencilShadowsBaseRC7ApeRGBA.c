/* SetShadowColor__21AglStencilShadowsBaseRC7ApeRGBA -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the four-byte colour at offset 0x34.
 */

typedef struct ApeRGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} ApeRGBA;

typedef struct State {
    char pad[0x34];
    ApeRGBA color;
} State;

void SetShadowColor__21AglStencilShadowsBaseRC7ApeRGBA(
    State *self, const ApeRGBA *color)
{
    self->color = *color;
}

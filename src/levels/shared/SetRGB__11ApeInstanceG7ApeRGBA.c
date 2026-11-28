/* SetRGB__11ApeInstanceG7ApeRGBA -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the four-byte colour at offset 0x130.
 */

typedef struct ApeRGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} ApeRGBA;

typedef struct State {
    char pad[0x130];
    ApeRGBA rgb;
} State;

void SetRGB__11ApeInstanceG7ApeRGBA(State *self, ApeRGBA *color)
{
    self->rgb = *color;
}

/* GetRGB__C11ApeInstance -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the four-byte colour at offset 0x130 into the hidden return slot.
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

ApeRGBA *GetRGB__C11ApeInstance(ApeRGBA *out, const State *self)
{
    *out = self->rgb;
    return out;
}

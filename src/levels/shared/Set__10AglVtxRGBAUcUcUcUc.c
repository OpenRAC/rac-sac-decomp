/* Set__10AglVtxRGBAUcUcUcUc -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores four color bytes.
 */

typedef struct State {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
} State;

void Set__10AglVtxRGBAUcUcUcUc(State *self, unsigned char red, unsigned char green,
        unsigned char blue, unsigned char alpha)
{
    self->red = red;
    self->green = green;
    self->blue = blue;
    self->alpha = alpha;
}

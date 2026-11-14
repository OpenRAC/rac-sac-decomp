/* Flashlight_SetColor__FP10FlashlightUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the color in the field at offset 0x74 of the flashlight.
 */

typedef struct Flashlight {
    char pad[0x74];
    unsigned int color;
} Flashlight;

void Flashlight_SetColor__FP10FlashlightUi(Flashlight *self, unsigned int v)
{
    self->color = v;
}

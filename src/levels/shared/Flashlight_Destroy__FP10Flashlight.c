/* Flashlight_Destroy__FP10Flashlight -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Flashlight {
    char pad[0x70];
    void *ptr;
} Flashlight;

void Flashlight_Destroy__FP10Flashlight(Flashlight *self)
{
    if (self)
        self->ptr = 0;
}

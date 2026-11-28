/* Reticle_SetInvalid__FP7Reticleb -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 3 at offset 0xC when invalid, otherwise 0.
 */

typedef struct Reticle {
    char pad[0xC];
    int state;
} Reticle;

void Reticle_SetInvalid__FP7Reticleb(Reticle *self, int invalid)
{
    if (invalid)
        self->state = 3;
    else
        self->state = 0;
}

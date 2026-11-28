/* MOBY_GetMobyAnim__FPC4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Anim {
    char pad[0xC4];
    void *current;
} Anim;

typedef struct Moby {
    char pad[0x48];
    Anim *anim;
} Moby;

void *MOBY_GetMobyAnim__FPC4Moby(const Moby *self)
{
    Anim *anim;
    void *current;

    current = 0;
    anim = self->anim;
    if (anim)
        current = anim->current;
    return current;
}

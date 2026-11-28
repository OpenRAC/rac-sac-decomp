/* MOBY_GetNumMobyAnimations__FPC4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Anim {
    char pad[0xC8];
    int count;
} Anim;

typedef struct Moby {
    char pad[0x48];
    Anim *anim;
} Moby;

int MOBY_GetNumMobyAnimations__FPC4Moby(const Moby *self)
{
    Anim *anim;
    int count;

    count = 0;
    anim = self->anim;
    if (anim)
        count = anim->count;
    return count;
}

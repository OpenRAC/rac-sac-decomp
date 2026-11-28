/* GadgetBot_DisableCollision__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Inner {
    char pad[0xC];
    unsigned short flags;
} Inner;

typedef struct Vars {
    char pad[4];
    Inner inner;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void GadgetBot_DisableCollision__FP4Moby(Moby *moby)
{
    Inner *inner;

    inner = &moby->vars->inner;
    inner->flags |= 8;
}

/* Arena1Screwlevator_ChunkDestroyed__FP4MobyUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ScrewVars {
    char pad[0x18];
    int chunk;
} ScrewVars;

typedef struct Moby {
    char pad[0x58];
    ScrewVars *vars;
} Moby;

void Arena1Screwlevator_ChunkDestroyed__FP4MobyUi(Moby *moby, unsigned int index)
{
    int *p;

    p = (int *)moby->vars;
    p += index;
    p[6] = 0;
}

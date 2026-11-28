/* GCSWORLD_CompareTieInstancesByMaterial__FPCvT0 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TieInstance {
    char pad[0x32];
    unsigned short material;
} TieInstance;

int GCSWORLD_CompareTieInstancesByMaterial__FPCvT0(const void *a, const void *b)
{
    return ((const TieInstance *)a)->material - ((const TieInstance *)b)->material;
}

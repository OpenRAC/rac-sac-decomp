/* Nefarious_GetTorsoDir__FP4MobyP4VEC2 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC2 {
    float x;
    float y;
} VEC2;

typedef struct Moby {
    char pad[0x20];
    float rx;
    float ry;
    float rz;
} Moby;

void Nefarious_GetTorsoDir__FP4MobyP4VEC2(Moby *moby, VEC2 *out)
{
    out->x = moby->rx;
    out->y = moby->rz;
}

/* sceVu0CopyVectorXYZ -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies three floats.
 */

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

void sceVu0CopyVectorXYZ(Vec3 *dest, Vec3 *src)
{
    dest->x = src->x;
    dest->y = src->y;
    dest->z = src->z;
}

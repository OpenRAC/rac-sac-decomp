/* DISPLAY_IsSphereVisible__FPC4VEC3f -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct ClipPlanes ClipPlanes;

extern ClipPlanes *DISPLAY_GetVisibilityPlanes__Fv(void);

int DISPLAY_IsSphereVisible__FPC4VEC3f(VEC3 *center, float radius)
{
    ClipPlanes *planes = DISPLAY_GetVisibilityPlanes__Fv();
    float *plane = (float *)planes + 0x60 / 4;
    float *end = (float *)planes + 0xB0 / 4;
    float negRadius = -radius;

    do {
        float distance = center->x * plane[0] + center->y * plane[1]
                       + center->z * plane[2] + plane[3];

        if (!(distance < negRadius)) {
            plane += 4;
        } else {
            return 0;
        }
    } while (plane != end);

    return 1;
}

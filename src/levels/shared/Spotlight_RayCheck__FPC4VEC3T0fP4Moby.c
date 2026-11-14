/* Spotlight_RayCheck__FPC4VEC3T0fP4Moby -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct Moby {
    char pad_00[0x80];
} Moby;

typedef struct CollSurfaceInfo {
    char pad_00[0x10];
    Moby *f_10;
    int f_14;
    char pad_18[0x08];
} CollSurfaceInfo;

extern int MOBYCOLL_CollideRayWithWorld__FPfP15CollSurfaceInfoPC4VEC3T2fiiiUi(
    float *outDistance, CollSurfaceInfo *outInfo, VEC3 *origin, void *owner,
    float length, int flags, int arg7, int arg8, unsigned int arg9);

int Spotlight_RayCheck__FPC4VEC3T0fP4Moby(VEC3 *origin, void *owner, float length,
                                          Moby *moby)
{
    CollSurfaceInfo info;
    float distance = 0.0f;

    int hit = MOBYCOLL_CollideRayWithWorld__FPfP15CollSurfaceInfoPC4VEC3T2fiiiUi(
        &distance, &info, origin, owner, length, 0x28, 0, 0, 0);

    if (hit != 0 && !(info.f_14 == 2 && info.f_10 == moby)) {
        if (!(length - distance <= 0.3f))
            return 0;
    }
    return 1;
}

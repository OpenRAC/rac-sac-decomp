/* TIE_DrawTiesForMirror__FG5PlaneG6SphereUl -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct G5Plane {
    long long x;
    long long y;
} __attribute__((packed)) G5Plane;

typedef struct G6Sphere {
    long long x;
    long long y;
} __attribute__((packed)) G6Sphere;

void TIE_DrawTiesForMirror__FG5PlaneG6SphereUl(G5Plane *plane,
                                                G6Sphere *sphere,
                                                unsigned long flags)
{
    G5Plane localPlane = *plane;
    G6Sphere localSphere = *sphere;

    (void)localPlane;
    (void)localSphere;
    (void)flags;
}

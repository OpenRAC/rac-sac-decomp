/* GU_IsOnScreen__FPC4VEC3 -- 244 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The point is put in camera space: the difference with the camera position is
 * squared into a distance, and the dot product with the camera axis says
 * whether the point is in front of the camera. The half field of view is read
 * twice (the retail calls the same getter twice) and the two results are
 * multiplied. The function returns 1 when the point is visible.
 *
 * Two rows of the camera matrix are reached through pointers: the address of
 * the third row and of the second row are each computed once, then indexed
 * with the small displacements of the three components. That form gives the
 * base-plus-displacement loads of the retail.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct VEC4 {
    float x;
    float y;
    float z;
    float w;
} VEC4;

typedef struct MATRIX4 {
    VEC4 r0;
    VEC4 r1;
    VEC4 r2;
    VEC4 r3;
} MATRIX4;

extern MATRIX4 *CAMDRIVER_GetWorldMatrix__Fv(void);
extern float CAMERA_GetCosHalfFovX__Fv(void);

int GU_IsOnScreen__FPC4VEC3(VEC3 *pos)
{
    MATRIX4 *m = CAMDRIVER_GetWorldMatrix__Fv();
    VEC4 *r2 = &m->r2;
    VEC4 *r3 = &m->r3;
    VEC3 d;
    float cosA, cosB, dist2, dot, dot2, v;
    int res;

    res = 0;

    d.x = pos->x - r3->x;
    d.y = pos->y - r3->y;
    d.z = pos->z - r3->z;

    dist2 = d.x * d.x + d.y * d.y + d.z * d.z;
    dot = d.x * r2->x + d.y * r2->y + d.z * r2->z;

    if (0 < dot) {
        dot2 = dot * dot;
        cosA = CAMERA_GetCosHalfFovX__Fv();
        cosB = CAMERA_GetCosHalfFovX__Fv();
        v = cosA * cosB * dist2;
        if (dot2 > v)
            res = 1;
    }

    return res;
}

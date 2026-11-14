/* DEBUGDRAW_DrawSphere__FPC6SphereUi -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Draws a debug sphere from a Sphere structure and a colour. The centre is
 * copied into a 16-byte aligned vector on the stack (a quadword copy on the
 * R5900) and the radius is read after the centre, so it survives the call to
 * SetCenter in a callee-saved float register. The colour is a four-byte RGBA
 * that shares the slot of the dead vector.
 */

typedef unsigned int quad __attribute__((mode(TI)));

typedef struct { float x, y, z; } VEC3;
typedef struct { VEC3 center; float radius; } SPHERE;

/* The sixteen byte aligned vector of the retail: the copy of the centre is a
 * quadword move (lq/sq), so the object is a 128 bit quantity. */
typedef union {
    quad q;
    struct { float x, y, z; } f;
} AVEC3;

typedef struct { VEC3 center; float radius; } APESPHERE;
typedef struct { unsigned char c[4]; } APERGBA;

extern void SetCenter__9ApeSphereRC5AVec3(APESPHERE *sphere, const AVEC3 *v);
extern void SetRadius__9ApeSpheref(APESPHERE *sphere, float radius);
extern void SetARGB__7ApeRGBAUi(APERGBA *colour, unsigned int argb);

void DEBUGDRAW_DrawSphere__FPC6SphereUi(const SPHERE *src, unsigned int color)
{
    APESPHERE sphere;
    AVEC3 v;
    float radius;

    {
        AVEC3 tmp;
        tmp.f.x = src->center.x;
        tmp.f.y = src->center.y;
        tmp.f.z = src->center.z;
        radius = src->radius;
        v.q = tmp.q;
    }

    SetCenter__9ApeSphereRC5AVec3(&sphere, &v);
    SetRadius__9ApeSpheref(&sphere, radius);

    {
        APERGBA rgba;
        SetARGB__7ApeRGBAUi(&rgba, color);
    }
}

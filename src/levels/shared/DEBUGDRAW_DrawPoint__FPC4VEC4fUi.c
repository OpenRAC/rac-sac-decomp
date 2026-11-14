/* DEBUGDRAW_DrawPoint__FPC4VEC4fUi -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Draws a debug point given as a VEC4 as a small sphere. The debug sphere is
 * described on the stack: the centre is built in a 16-byte aligned vector (a
 * quadword copy on the R5900), the radius is a float that survives the calls,
 * and the colour is a four-byte RGBA that shares the stack slot of the dead
 * vector. The function calls SetCenter, SetRadius and SetARGB on it.
 */

typedef unsigned int quad __attribute__((mode(TI)));

typedef struct { float x, y, z; } VEC3;
typedef struct { float x, y, z; } AVEC3F;

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

void DEBUGDRAW_DrawPoint__FPC4VEC4fUi(const VEC3 *pos, float size,
                                     unsigned int color)
{
    APESPHERE sphere;
    AVEC3 v;

    {
        AVEC3 tmp;
        tmp.f.x = pos->x;
        tmp.f.y = pos->y;
        tmp.f.z = pos->z;
        v.q = tmp.q;
    }

    SetCenter__9ApeSphereRC5AVec3(&sphere, &v);
    SetRadius__9ApeSpheref(&sphere, size);

    {
        APERGBA rgba;
        SetARGB__7ApeRGBAUi(&rgba, color);
    }
}

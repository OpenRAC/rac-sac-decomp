/* func_0010A270 -- 16 bytes.
 *
 * A function of the boot executable at 0x0010A270; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body VEC_SetVec3__FP4VEC3fff.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/VEC_SetVec3__FP4VEC3fff.c.
 */

typedef struct { float x; float y; float z; } VEC3;

void func_0010A270(VEC3 *v, float x, float y, float z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

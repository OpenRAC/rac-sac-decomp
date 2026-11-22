/* GCP_GetYawFromDirection__FPC16GiantClankPlayerPC4VEC2 -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Packs a two-float vector into a 12-byte block and passes it on.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_173CB8.c.
 */

extern void *memset(void *s, int c, unsigned int n);
extern float GCP_GetYawFromDirection__FPC16GiantClankPlayerPC4VEC3(void *o, void *v);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

static __inline__ Vec3 make_vec(float *s)
{
    Vec3 v;

    memset(&v, 0, sizeof(v));
    v.z = s[1];
    v.x = s[0];
    return v;
}

float GCP_GetYawFromDirection__FPC16GiantClankPlayerPC4VEC2(char *a0, float *a1) {
    Vec3 u;
    Vec3 t;

    t = make_vec(a1);
    u = t;
    return GCP_GetYawFromDirection__FPC16GiantClankPlayerPC4VEC3(a0, &u);
}

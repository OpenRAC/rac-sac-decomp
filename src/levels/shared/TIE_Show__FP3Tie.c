/* TIE_Show__FP3Tie -- 204 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Marks the object, builds a flag word from its low state bit, probes two
 * points from its link and, when found, registers the sub-record with the near
 * or far pool entry.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/17_multiplayer_02/LEVEL_17_076AF8.c.
 */

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[3];
    unsigned char far_03;
    int w04;
} Sub;

typedef struct {
    char pad00[0x54];
    Sub sub;
    char pad5C[0x61 - 0x5C];
    unsigned char b61;
} Obj;

typedef struct {
    char pad[0x68];
} Entry;

extern Entry G_dynaGrid[];
extern int TIE_GetCollisionAABB__FP4VEC3T0PC3Tie(Vec4 *a, Vec4 *b, int link);
extern void WORLDGRID_Add__FP9WorldGridP24WorldGridIntersectResultPC4VEC3T2i(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int flags);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void TIE_Show__FP3Tie(Obj *o)
{
    Vec4 p0;
    Vec4 p1;
    Sub *s;
    unsigned int fl;
    int far;

    s = &o->sub;
    o->b61 |= 1;
    fl = (((~o->b61) & 1) << 5) | 0x4202;
    if (TIE_GetCollisionAABB__FP4VEC3T0PC3Tie(&p0, &p1, s->w04) != 0) {
        far = isFar(&p0, &p1);
        s->far_03 = far;
        WORLDGRID_Add__FP9WorldGridP24WorldGridIntersectResultPC4VEC3T2i(&G_dynaGrid[far], s, &p0, &p1, fl);
    }
}

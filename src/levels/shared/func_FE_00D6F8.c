/* func_FE_00D6F8 -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_004948.c.
 */

struct A { float f; int x, y, z; };
struct B { int w; float f; int y, z; };
struct C { int w, x; float y, z; };
struct D { int w, x; float y; int z; };

struct M {
    struct A a;
    struct B b;
    struct C c;
    struct D d;
};

void func_FE_00D6F8(struct M *m, float a, float b, float c, float d)
{
    float diff = c - d;
    float inv = 1.0f / diff;
    float t = (d + d) * c;
    float u = (d + c) * inv;
    struct B *pb = &m->b;
    struct C *pc = &m->c;
    struct D *pd = &m->d;

    m->a.f = a;
    m->a.x = 0;
    m->a.y = 0;
    m->a.z = 0;
    pb->w = 0;
    pb->f = b;
    pb->y = 0;
    pb->z = 0;
    pc->w = 0;
    pc->x = 0;
    pc->y = u;
    pc->z = -1.0f;
    pd->w = 0;
    pd->x = 0;
    pd->y = t * inv;
    pd->z = 0;
}

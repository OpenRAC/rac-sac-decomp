/* VEC_SetIdentity__FP7MATRIX3 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_123C38.c.
 */

struct A { float f; int x, y; };
struct B { int w; float f; int y; };
struct C { int w, x; float y; };
struct M { struct A a; struct B b; struct C c; };

void VEC_SetIdentity__FP7MATRIX3(struct M *m)
{
    struct B *pb = &m->b;
    struct C *pc = &m->c;

    m->a.f = 1.0f;
    m->a.x = 0;
    m->a.y = 0;
    pb->w = 0;
    pb->f = 1.0f;
    pb->y = 0;
    pc->w = 0;
    pc->x = 0;
    pc->y = 1.0f;
}

/* func_L01_00A858 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shifts the record history of the object and resets the timing fields.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0018C0.c.
 */

typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 v;
    int i;
} Rec;

typedef struct {
    Rec cur;
    Rec next;
    Rec prev;
    float f;
    int i;
} Obj;

void func_L01_00A858(Obj *o)
{
    o->next = o->prev;
    o->cur = o->next;
    o->f = 1.0f;
    o->i = 0;
}

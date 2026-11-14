/* ThrowTieTether_GetClosestOnScreen__FPC4VEC3f -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the list of tether cables (two global words: the cursor and its limit;
 * entries are 0x80 bytes), keeps those that are flagged and on screen
 * (GU_IsOnScreen), and compares the squared distance to the position with the
 * squared radius, the last matching cable being returned. The squared radius
 * is kept in a callee-saved float register across the calls.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct ThrowTieTetherCable {
    char pad_00[0x30];
    VEC3 pos;
    char pad_3C[0x28];
    unsigned int flags;
    char pad_68[0x18];
} ThrowTieTetherCable;

extern void *D_L01_26CB1C;
extern void *D_L01_26CB20;

extern int GU_IsOnScreen__FPC4VEC3(VEC3 *pos);

void *ThrowTieTether_GetClosestOnScreen__FPC4VEC3f(VEC3 *pos, float radius)
{
    ThrowTieTetherCable *cable = (ThrowTieTetherCable *)D_L01_26CB1C;
    void *best = 0;
    float radius2 = radius * radius;

    while (cable < (ThrowTieTetherCable *)D_L01_26CB20) {
        if ((cable->flags & 0x431) == 1) {
            VEC3 *at = &cable->pos;

            if (GU_IsOnScreen__FPC4VEC3(at)) {
                float dx = pos->x - at->x;
                float dy = pos->y - at->y;
                float dz = pos->z - at->z;
                float distance2 = dx * dx + dy * dy + dz * dz;

                if (distance2 <= radius2)
                    best = cable;
            }
        }
        cable++;
    }
    return best;
}

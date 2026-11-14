/* PowerupAmmo_DestroyInSphere__FPC4VEC3fb -- 264 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Destroys the Mobys inside a sphere (centre, radius). For each element of a
 * global list whose state field carries the pattern 1, the distance to the
 * centre is compared with the squared radius; when it is smaller, a shot is
 * emitted (if the flag is set) and the Moby is destroyed.
 *
 * The distance is accumulated in x, y, z order. The squared radius lives in a
 * callee-saved float register and survives the two calls. The base array
 * (`items`) and the iterator (`item`) are two distinct variables, so that the
 * loop bound is computed from the base and the iterator is copied as in the
 * retail; the position is read through a local pointer (`pos`), which derives
 * the +0x30 induction variable.
 */

typedef struct VEC3 { float x, y, z; } VEC3;

typedef struct Item {
    char pad0[0x30];
    VEC3 pos;                        /* 0x30 : la position de l'element */
    char pad1[0x64 - 0x3C];
    unsigned int state;              /* 0x64 : l'etat, dont le motif 0xF */
    char pad2[0x80 - 0x68];
} Item;

typedef struct List {
    char pad0[0x0C];
    Item *items;
    char pad1[0x3C - 0x10];
    int count;
} List;

extern List *D_L11_002854D8;
extern void FIRECRACKER_Emit__F27FIRECRACKER_SortedBuiltinIDPC4VEC3(
    int id, const VEC3 *pos);
extern void MOBY_DestroyMoby__FP4MobybN21(void *moby, int b1, int b2, int b3);

void PowerupAmmo_DestroyInSphere__FPC4VEC3fb(const VEC3 *center, float radius,
                                             int flag)
{
    List *list = D_L11_002854D8;
    Item *items = list->items;
    Item *end = items + list->count;
    float r2 = radius * radius;
    float dx, dy, dz;
    Item *item;

    for (item = items; item != end; item++) {
        const VEC3 *pos = &item->pos;

        if ((item->state & 0xF) != 1) {
            continue;
        }
        dx = center->x - pos->x;
        dy = center->y - pos->y;
        dz = center->z - pos->z;
        if (dx * dx + dy * dy + dz * dz < r2) {
            if (flag) {
                FIRECRACKER_Emit__F27FIRECRACKER_SortedBuiltinIDPC4VEC3(
                    2, pos);
            }
            MOBY_DestroyMoby__FP4MobybN21(item, 1, 1, 1);
        }
    }
}

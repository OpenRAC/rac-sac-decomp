/* DeQueWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8P14tHUDPROMQ_NODE -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Hands the next queued vector of the object to the caller and hands the
 * object over to the post-process routine.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/24_treehouse/LEVEL_24_0D1AF8.c.
 */

typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 items[8];
    int last;
    int count;
} Obj;

void DiscardLastWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8(Obj *obj);

int DeQueWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8P14tHUDPROMQ_NODE(Obj *obj, Vec3 *out)
{
    int count = obj->count;

    if (obj->last == count)
        return 0;
    if (out == 0)
        return 0;

    *out = obj->items[count];
    DiscardLastWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8(obj);
    return 1;
}

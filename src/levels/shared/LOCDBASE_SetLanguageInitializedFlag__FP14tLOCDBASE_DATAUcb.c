/* LOCDBASE_SetLanguageInitializedFlag__FP14tLOCDBASE_DATAUcb -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets or clears one bit of the object's mask.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_01F940.c.
 */

struct Obj {
    char pad00[4];
    unsigned int f04;
};

void LOCDBASE_SetLanguageInitializedFlag__FP14tLOCDBASE_DATAUcb(struct Obj *obj, unsigned char bit, int flag)
{
    unsigned int result;

    if (flag != 0)
        result = obj->f04 | (1 << bit);
    else
        result = obj->f04 & ~(1 << bit);
    obj->f04 = result;
}

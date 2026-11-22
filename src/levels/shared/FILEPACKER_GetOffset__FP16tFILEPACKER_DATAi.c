/* FILEPACKER_GetOffset__FP16tFILEPACKER_DATAi -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Applies the pending update when one is queued.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F2C0.c.
 */

struct Obj {
    char pad00[16];
};

int FILEPACKER_IsStreaming__FP16tFILEPACKER_DATA(struct Obj *, struct Obj *);
int FILEPACKER_getData__FP16tFILEPACKER_DATAi(struct Obj *, struct Obj *);

int FILEPACKER_GetOffset__FP16tFILEPACKER_DATAi(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = FILEPACKER_IsStreaming__FP16tFILEPACKER_DATA(first, second);
    if (pending != 0)
        return FILEPACKER_getData__FP16tFILEPACKER_DATAi(first, second);
    return 0;
}

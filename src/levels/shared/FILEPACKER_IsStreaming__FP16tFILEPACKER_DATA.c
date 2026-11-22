/* FILEPACKER_IsStreaming__FP16tFILEPACKER_DATA -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Checks the flags of the global object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F270.c.
 */

struct obj {
    int pad;
    int flags;
};

int FILEPACKER_IsFormatValid__FPUc(struct obj *);

int FILEPACKER_IsStreaming__FP16tFILEPACKER_DATA(int *p)
{
    struct obj *q = p[0];
    int flags;

    if (FILEPACKER_IsFormatValid__FPUc(q) == 0)
        return 0;
    flags = q->flags;
    if (flags & 2) {
        if (flags & 4)
            return 1;
    }
    return 0;
}

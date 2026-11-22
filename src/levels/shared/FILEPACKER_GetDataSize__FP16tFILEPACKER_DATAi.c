/* FILEPACKER_GetDataSize__FP16tFILEPACKER_DATAi -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F208.c.
 */

extern int FILEPACKER_isInited__FP16tFILEPACKER_DATA(void *container);

struct Container {
    char *base;
    int count;
};

void *FILEPACKER_GetDataSize__FP16tFILEPACKER_DATAi(struct Container *container, int index)
{
    int item_offset;
    char *base;
    if (index == 0)
        return 0;
    if (FILEPACKER_isInited__FP16tFILEPACKER_DATA(container) == 0)
        return 0;
    if (index > container->count)
        return 0;
    item_offset = index * 8;
    base = container->base;
    return *(void **)(base + item_offset + 12);
}

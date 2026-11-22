/* FILEPACKER_initDataToStreamFromDisk__FP16tFILEPACKER_DATAPUcUiPc -- 204 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Looks up a handle, validates an entry and updates it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F390.c.
 */

typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_FE_00126788[];
extern int HIT_fopen_internal__FPCcT0(int key, char *name);
extern int HIT_fread__FPvUiUiPi(Entry *e, unsigned int a, int b, int h);
extern int FILEPACKER_IsFormatValid__FPUc(Entry *e);
extern int FILEPACKER_initData__FP16tFILEPACKER_DATAPUc(Owner *o, Entry *e);
extern void HIT_fclose__FPi(int h);

int FILEPACKER_initDataToStreamFromDisk__FP16tFILEPACKER_DATAPUcUiPc(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = HIT_fopen_internal__FPCcT0(key, D_FE_00126788);
    if (h != 0) {
        HIT_fread__FPvUiUiPi(entry, val, 1, h);
        if (FILEPACKER_IsFormatValid__FPUc(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = FILEPACKER_initData__FP16tFILEPACKER_DATAPUc(owner, entry);
                owner->key = key;
            }
        }
        HIT_fclose__FPi(h);
    }
    return ret;
}

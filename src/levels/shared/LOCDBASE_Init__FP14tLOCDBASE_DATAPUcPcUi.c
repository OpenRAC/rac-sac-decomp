/* LOCDBASE_Init__FP14tLOCDBASE_DATAPUcPcUi -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets a small object when the flags allow it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_01F700.c.
 */

struct Obj {
    char pad[0x38];
    unsigned int f38;
    unsigned int f3C;
    unsigned int f40;
};

void *memset(void *, int, unsigned int);

int LOCDBASE_Init__FP14tLOCDBASE_DATAPUcPcUi(struct Obj *p, unsigned int flags, unsigned int value,
                unsigned int extra)
{
    if (flags & 0xF)
        return 0;
    memset(p, 0, 0x44);
    p->f38 = flags;
    p->f3C = value;
    p->f40 = extra;
    return 1;
}

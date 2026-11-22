/* BACKGSTREAMER_Init__FP18tBACKGSTREAMER_CMD -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a 0x18-byte record and stores it in a global slot.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_022188.c.
 */

extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_FE_00108AD4;

int BACKGSTREAMER_Init__FP18tBACKGSTREAMER_CMD(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_FE_00108AD4.cur = record;
    record->b = 0;
    D_FE_00108AD4.cur->a = 0;
    return 1;
}
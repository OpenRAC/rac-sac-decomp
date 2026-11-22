/* Que__t5Queue2Z14tHUDPROMQ_NODEUi8G14tHUDPROMQ_NODE -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Pushes a 12-byte item into an 8-entry ring, returns 1 if stored.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_015E68.c.
 */

typedef struct { int a; int b; int c; } Item;
typedef struct { Item items[8]; int head; int pad_64; int count; } Q;
int Que__t5Queue2Z14tHUDPROMQ_NODEUi8G14tHUDPROMQ_NODE(void *a0, void *a1)
{
    Q *q = (Q *)a0;
    Item tmp;
    tmp = *(Item *)a1;
    if ((q->count ^ 8) == 0) return 0;
    q->items[q->head] = tmp;
    q->head++;
    if (q->head == 8) q->head = 0;
    q->count++;
    return 1;
}

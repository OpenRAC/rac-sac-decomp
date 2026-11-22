/* sceSifRemoveRpcQueue -- 144 bytes.
 *
 * A function of the boot executable at 0x00195038; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifRemoveRpcQueue.c.
 */

/* sceSifRemoveRpcQueue -- unlinks a data queue from the global queue list with interrupts disabled; returns the predecessor (or the list head). */
typedef struct SifQueue {
    char pad0[0x14];
    struct SifQueue *link;
} SifQueue;

typedef struct {
    char pad0[0x28];
    SifQueue *head;
} SifQueueList;

extern SifQueueList D_002917C0;
extern int func_0019A4F0(void);
extern int func_0019A540(void);

SifQueue *sceSifRemoveRpcQueue(SifQueue *qd) {
    SifQueue *s;

    func_0019A4F0();
    s = D_002917C0.head;
    if (s == qd) {
        D_002917C0.head = s->link;
    } else {
        while (s != 0) {
            if (s->link == qd) {
                s->link = qd->link;
                break;
            }
            s = s->link;
        }
    }
    func_0019A540();
    return s;
}

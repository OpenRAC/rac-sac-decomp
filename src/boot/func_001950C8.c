/* sceSifGetNextRequest -- 88 bytes.
 *
 * A function of the boot executable at 0x001950C8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifGetNextRequest.c.
 */

/* sceSifGetNextRequest -- pops the next pending request from a data queue with interrupts disabled and updates the queue's active flag. */
typedef struct SifRequest {
    char pad0[0x3C];
    struct SifRequest *next;
} SifRequest;

typedef struct {
    char pad0[4];
    int active;
    char pad8[4];
    SifRequest *pending;
} SifDataQueue;

extern int func_0019A4F0(void);
extern int func_0019A540(void);

SifRequest *sceSifGetNextRequest(SifDataQueue *qd) {
    SifRequest *r;

    func_0019A4F0();
    r = qd->pending;
    if (r == 0) {
        qd->active = 0;
    } else {
        qd->active = 1;
        qd->pending = r->next;
    }
    func_0019A540();
    return r;
}

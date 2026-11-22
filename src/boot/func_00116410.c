/* func_00116410 -- 72 bytes.
 *
 * A function of the boot executable at 0x00116410; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __eh_rtime_match.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__eh_rtime_match.c.
 */

/* PARKED (w2-agent-04): retail saves callee-saved GPRs with a 16-byte slot stride
 (s0@0x0/s1@0x10/ra@0x20 ...) while the pinned chain emits 8-byte slots
 (mcc mips.c:4723, RAC0/RAC2 TImode anchor neutralised). Only the frame
 instructions differ; not reachable from C. Reopen with that compiler anchor. */
/* func_00116410 .. */
typedef int (*EH_MATCH)(void *info, void *rtime, void *arg);
extern void **func_001160A0(void);
int func_00116410(void *rtime) {
    void *info = *func_001160A0();
    EH_MATCH fn = *(EH_MATCH *)info;
    if (fn == 0)
        return 0;
    return fn(info, rtime, 0) != 0;
}

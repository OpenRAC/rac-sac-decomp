/* func_0019C310 -- 240 bytes.
 *
 * A function of the boot executable at 0x0019C310; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body iSetTimerAlarm.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/iSetTimerAlarm.c.
 */

/* boot: -- interrupt-context variant of SetTimerAlarm: takes a free alarm node and counter and starts it. Ported from OpenRAC/rac4-decomp src/core/0012EAA8.c (func_0012EAA8). */
typedef struct Type1 {
    struct Type1 *f0;
    volatile int id;
    int x8;
    int xC;
} Type1;

extern Type1 *D_002958C0;
extern int func_0019B728(void);
extern void func_0019BDF8(int, int, void *, Type1 *);
extern void func_0019B9A0(int);
extern void func_0019C180(void);

static inline Type1 *var1(void) {
    Type1 *n = D_002958C0;
    if (n != 0) {
        D_002958C0 = n->f0;
    }
    return n;
}

static inline void var2(Type1 *n) {
    n->f0 = D_002958C0;
    D_002958C0 = n;
}

int func_0019C310(int a, int b, int c) {
    Type1 *n;
    int id;

    if (b == 0) {
        return 0x80000016;
    }
    n = var1();
    if (n == 0) {
        return 0x80008005;
    }
    id = func_0019B728();
    if (id < 0) {
        var2(n);
        n->id = 0;
        return id;
    }
    n->x8 = b;
    n->xC = c;
    n->id = id;
    func_0019BDF8(id, a, func_0019C180, n);
    func_0019B9A0(id);
    return ((int)n << 4) | (id & 0xFE) | 1;
}

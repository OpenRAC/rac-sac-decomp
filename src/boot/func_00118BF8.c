/* func_00118BF8 -- 80 bytes.
 *
 * A function of the boot executable at 0x00118BF8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __is_pointer__FPv.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__is_pointer__FPv.c.
 */

/* func_00118BF8 -- whether the dynamic type of an object is a pointer type. */
typedef struct {
    short delta;
    short index;
    void *(*fn)(void);
} tEntry;

typedef struct {
    tEntry type;
} tVtbl;

typedef struct {
    tVtbl *vtable;
} tObj;

extern void *func_00118D10(void *(*getobj)(void), void *(*getdesired)(void), int require_public,
                            void *objptr, void *(*getsub)(void), void *subptr);
extern void *func_00119418(void);
extern void *func_00115F60(void);

int func_00118BF8(void *p) {
    tEntry *e;
    void *r = 0;

    if (p) {
        e = &((tObj *)((char *)p + 4))->vtable->type;
        r = func_00118D10(e->fn, func_00119418, 1, (char *)p + e->delta, func_00115F60, p);
    }
    return r != 0;
}

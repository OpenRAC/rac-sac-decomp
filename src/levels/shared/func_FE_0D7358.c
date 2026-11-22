/* func_FE_0D7358 -- 228 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Finds the exception frame record that covers a code address. Ported from
 * OpenRAC/rac2-decomp src/core/001232F0.c (find_fde).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_025ED0.c.
 */

/* libgcc.a frame.o: find_fde, from the gcc/frame.c of gnu-ee-binutils-gcc-1.1
   with gthr-single.h's object mutex (GPL-2.0-or-later with the libgcc linking
   exception). The inline __gthread_mutex_lock/unlock calls return 0 and leave
   no code, but the unlock's inline body ends a block between the object walk
   and the ob == 0 test. */

struct dwarf_fde {
    unsigned int length;
    int CIE_delta;
    void *pc_begin;
    unsigned int pc_range;
};

typedef struct dwarf_fde fde;

struct object {
    void *pc_begin;
    void *pc_end;
    struct dwarf_fde *fde_begin;
    struct dwarf_fde **fde_array;
    unsigned int count;
    struct object *next;
};

typedef int __gthread_mutex_t;

static __inline__ int __gthread_mutex_lock(__gthread_mutex_t *mutex __attribute__ ((__unused__))) {
    return 0;
}

static __inline__ int __gthread_mutex_unlock(__gthread_mutex_t *mutex __attribute__ ((__unused__))) {
    return 0;
}

static __gthread_mutex_t object_mutex = 0;

extern struct object *D_FE_002564B8;
extern void func_FE_0D7218(struct object *);

fde *func_FE_0D7358(void *pc) {
    struct object *ob;
    unsigned int lo, hi;

    __gthread_mutex_lock(&object_mutex);

    for (ob = D_FE_002564B8; ob; ob = ob->next) {
        if (ob->pc_begin == 0)
            func_FE_0D7218(ob);
        if (pc >= ob->pc_begin && pc < ob->pc_end)
            break;
    }

    __gthread_mutex_unlock(&object_mutex);

    if (ob == 0)
        return 0;

    /* Standard binary search algorithm.  */
    for (lo = 0, hi = ob->count; lo < hi;) {
        unsigned int i = (lo + hi) / 2;
        fde *f = ob->fde_array[i];

        if (pc < f->pc_begin)
            hi = i;
        else if (pc >= f->pc_begin + f->pc_range)
            lo = i + 1;
        else
            return f;
    }

    return 0;
}

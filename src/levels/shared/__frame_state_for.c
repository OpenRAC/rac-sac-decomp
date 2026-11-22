/* __frame_state_for -- 472 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Exception runtime lookup of the register save state for a code address
 * (gcc/frame.c, __frame_state_for).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0264F8.c.
 */

typedef struct dwarf_fde {
    unsigned int length;
    int CIE_delta;
    void *pc_begin;
    unsigned int pc_range;
} fde;

typedef struct dwarf_cie {
    unsigned int length;
    int CIE_id;
    unsigned char version;
    char augmentation[1];
} cie;

struct cie_info {
    char *augmentation;
    void *eh_ptr;
    int code_align;
    int data_align;
    unsigned int ra_column;
};

struct frame_state {
    void *cfa;
    void *eh_ptr;
    long cfa_offset;
    long args_size;
    long reg_or_offset[80];
    unsigned short cfa_reg;
    unsigned short retaddr_column;
    char saved[80];
};

struct frame_state_internal {
    struct frame_state s;
    struct frame_state_internal *saved_state;
};

extern fde *func_FE_0D7358(void *pc);
extern void *func_FE_0D7440(fde *f, struct cie_info *c);
extern void *func_FE_0D7548(void *p, struct frame_state_internal *state, struct cie_info *info, void **pcp);
extern void *func_FE_0D6D48(unsigned char *p, int *val);
extern void *memset(void *s, int c, unsigned int n);
extern void *memcpy(void *d, const void *s, unsigned int n);

static __inline__ cie *get_cie(fde *f)
{
    return (cie *)(((char *)&f->CIE_delta) - f->CIE_delta);
}

static __inline__ fde *next_fde(fde *f)
{
    return (fde *)(((char *)f) + f->length + sizeof(f->length));
}

struct frame_state *__frame_state_for(void *pc_target, struct frame_state *state_in)
{
    fde *f;
    void *insn;
    void *end;
    void *pc;
    struct cie_info info;
    struct frame_state_internal state;

    f = func_FE_0D7358(pc_target);
    if (f == 0) {
        return 0;
    }
    insn = func_FE_0D7440(f, &info);
    if (insn == 0) {
        return 0;
    }
    memset(&state, 0, sizeof(state));
    state.s.retaddr_column = info.ra_column;
    state.s.eh_ptr = info.eh_ptr;

    end = next_fde((fde *)get_cie(f));
    while (insn < end) {
        insn = func_FE_0D7548(insn, &state, &info, 0);
    }
    insn = ((fde *)f) + 1;
    if (info.augmentation[0] == 'z') {
        int i;

        insn = func_FE_0D6D48(insn, &i);
        insn += i;
    }
    end = next_fde(f);
    pc = f->pc_begin;
    while (insn < end && pc <= pc_target) {
        insn = func_FE_0D7548(insn, &state, &info, &pc);
    }
    memcpy(state_in, &state.s, sizeof(state.s));
    return state_in;
}

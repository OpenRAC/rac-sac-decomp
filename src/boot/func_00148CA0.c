/* func_00148CA0 -- 196 bytes.
 *
 * A function of the boot executable at 0x00148CA0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * The original span covers three small functions placed back to back, rendered
 * here in order: this one, func_00148D38 and func_00148D48. This function adds
 * self->f_0CC to element 14 of the array pointed to by arg2. If self->f_04C is
 * set, it also adds self->f_010->f_518 * max(f_508, f_504) * 4 + 0x10. It then
 * calls the virtual function self->f_0E0(self+0x1C, arg2) and returns its
 * result if non-zero, else 0.
 */

typedef struct Obj_00148CA0_sub Obj_00148CA0_sub;
typedef struct Obj_00148CA0 Obj_00148CA0;

struct Obj_00148CA0_sub {
    char pad_000[0x504];
    int f_504;
    int f_508;
    char pad_50C[0xC];
    int f_518;
};

struct Obj_00148CA0 {
    char pad_000[0x10];
    Obj_00148CA0_sub *f_010;
    char pad_014[0x38];
    int f_04C;
    char pad_050[0x7C];
    int f_0CC;
    char pad_0D0[0x10];
    int (*f_0E0)(char *this_1C, void *arg2);
};

typedef struct Node_00148D38 Node_00148D38;

struct Node_00148D38 {
    Node_00148D38 *next;
    Node_00148D38 *prev;
    int count;
    unsigned int flag;
};

extern void func_1494C8(int *base, int index, int delta);

int func_00148CA0(Obj_00148CA0 *self, void *arg2)
{
    int result;
    int lo;
    int hi;
    int scale;

    func_1494C8((int *)arg2, 14, self->f_0CC);
    if (self->f_04C) {
        Obj_00148CA0_sub *obj = self->f_010;
        lo = obj->f_508;
        hi = obj->f_504;
        scale = obj->f_518;
        if (lo < hi)
            lo = hi;
        func_1494C8((int *)arg2, 14, scale * lo * 4 + 0x10);
    }
    if (self->f_0E0) {
        result = self->f_0E0((char *)self + 0x1C, arg2);
        if (result)
            return result;
    }
    return 0;
}

void func_00148D38(Node_00148D38 *node)
{
    node->next = node;
    node->prev = node;
    node->count = 0;
}

void func_00148D48(Node_00148D38 *node)
{
    node->next = node;
    node->prev = node;
    node->flag = 0xFFFFFFFF;
    node->count = 0;
}

/* func_001455A8 -- 64 bytes.
 *
 * A function of the boot executable at 0x001455A8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Calls func_148778(self, &local) and returns if the result is non-zero.
 * Otherwise it makes a virtual call through the object's sub-table at +0x18,
 * passing the adjusted object pointer and 1. The callee returns an int, so the
 * return register is reserved by the caller.
 */

typedef struct {
    char pad_000[0x18];
    void *sub_18;
} Base_001455A8;

typedef struct {
    char pad_000[0x30];
    short offset_30;
    int (*fn_34)(void *, int);
} Vtbl_001455A8;

extern int func_148778(void *self, int *out);

void func_001455A8(void *self)
{
    int local;

    if (func_148778(self, &local) != 0) {
        return;
    }
    {
        Base_001455A8 *base = (Base_001455A8 *)local;
        Vtbl_001455A8 *vt = (Vtbl_001455A8 *)base->sub_18;

        vt->fn_34((char *)base + vt->offset_30, 1);
    }
}

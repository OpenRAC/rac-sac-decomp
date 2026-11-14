/* func_0015D488 -- 128 bytes.
 *
 * A function of the boot executable at 0x0015D488; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad_000[0x08];
    short offset_08;
    int (*fn_0C)(void *, int);
} Vtbl_0015D488;

typedef struct {
    int field_00;
    char pad_004[0x08];
    Vtbl_0015D488 *vtbl_0C;
} Obj_0015D488;

int func_0015D488(Obj_0015D488 *self, int flag)
{
    if (flag != 0) {
        Vtbl_0015D488 *vt;
        int result;

        if (self->field_00 != 0) {
            return 0;
        }
        vt = self->vtbl_0C;
        result = vt->fn_0C((char *)self + vt->offset_08, flag);
        if (result != 0) {
            return result;
        }
        self->field_00 = 1;
    } else {
        Vtbl_0015D488 *vt = self->vtbl_0C;
        int result = vt->fn_0C((char *)self + vt->offset_08, 0);

        if (result != 0) {
            return result;
        }
        self->field_00 = 0;
    }
    return 0;
}

/* func_00169CB0 -- 16 bytes.
 *
 * A function of the boot executable at 0x00169CB0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x19C];
    int field;
} Obj_00169CB0;

int func_00169CB0(Obj_00169CB0 *self, int unused, int *out)
{
    self->field = 0;
    *out = 0;
    return 0;
}

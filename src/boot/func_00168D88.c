/* func_00168D88 -- 16 bytes.
 *
 * A function of the boot executable at 0x00168D88; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x10];
    int field;
} Obj_00168D88;

int func_00168D88(Obj_00168D88 *self, int *out)
{
    *out = self->field;
    return 0;
}

/* func_0015FF88 -- 8 bytes.
 *
 * A function of the boot executable at 0x0015FF88; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x1AC];
    int field_1AC;
} Obj_0015FF88;

int func_0015FF88(Obj_0015FF88 *self)
{
    return self->field_1AC;
}

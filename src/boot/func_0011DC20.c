/* func_0011DC20 -- 32 bytes.
 *
 * A function of the boot executable at 0x0011DC20; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad_000[0x248];
    int *table_248;
} Obj_0011DC20;

int func_0011DC20(Obj_0011DC20 *self, int index)
{
    if (self != 0) {
        return self->table_248[index];
    }
    return 0;
}

/* func_0011DC40 -- 32 bytes.
 *
 * A function of the boot executable at 0x0011DC40; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad_000[0x250];
    int *table_250;
} Obj_0011DC40;

int func_0011DC40(Obj_0011DC40 *self, int index)
{
    if (self != 0) {
        return self->table_250[index];
    }
    return 0;
}

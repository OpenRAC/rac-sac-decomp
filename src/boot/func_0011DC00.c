/* func_0011DC00 -- 32 bytes.
 *
 * A function of the boot executable at 0x0011DC00; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad_000[0x24C];
    int *table_24C;
} Obj_0011DC00;

int func_0011DC00(Obj_0011DC00 *self, int index)
{
    if (self != 0) {
        return self->table_24C[index];
    }
    return 0;
}

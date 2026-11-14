/* func_001520C0 -- 128 bytes.
 *
 * A function of the boot executable at 0x001520C0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Dispatches through the object's function table, then flags the state.
 */

typedef int (*Boot_001520C0_Fn)(void *self, int arg);

typedef struct Boot_001520C0_Table
{
    unsigned char        pad_008[0x08];
    short                offset;
    unsigned char        pad_00A[0x02];
    Boot_001520C0_Fn     fn;
} Boot_001520C0_Table;

typedef struct Boot_001520C0_Object
{
    unsigned char        pad_00C[0x0C];
    int                  state;
    unsigned char        pad_130[0x130 - 0x10];
    Boot_001520C0_Table *table;
} Boot_001520C0_Object;

int func_001520C0(Boot_001520C0_Object *self, int flag)
{
    int result;

    if (flag) {
        if (self->state != 0) {
            return 0;
        }
        result = self->table->fn((char *)self + self->table->offset, flag);
        if (result != 0) {
            return result;
        }
        self->state = 1;
    } else {
        result = self->table->fn((char *)self + self->table->offset, 0);
        if (result != 0) {
            return result;
        }
        self->state = 0;
    }
    return 0;
}

/* func_001453C0 -- 12 bytes.
 *
 * A function of the boot executable at 0x001453C0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x24];
    int f;
} Obj_001453C0;

int func_001453C0(Obj_001453C0 *self, int v)
{
    self->f = v;
    return 0;
}

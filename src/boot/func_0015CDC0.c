/* func_0015CDC0 -- 12 bytes.
 *
 * A function of the boot executable at 0x0015CDC0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x120];
    int f;
} Obj_0015CDC0;

int func_0015CDC0(Obj_0015CDC0 *self, int v)
{
    self->f = v;
    return 0;
}

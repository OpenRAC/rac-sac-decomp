/* func_0014BF40 -- 12 bytes.
 *
 * A function of the boot executable at 0x0014BF40; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x224];
    int f;
} Obj_0014BF40;

int func_0014BF40(Obj_0014BF40 *self, int v)
{
    self->f = v;
    return 0;
}

/* func_0014BF10 -- 12 bytes.
 *
 * A function of the boot executable at 0x0014BF10; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x234];
    int f;
} Obj_0014BF10;

int func_0014BF10(Obj_0014BF10 *self, int v)
{
    self->f = v;
    return 0;
}

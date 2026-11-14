/* func_0015C7F0 -- 12 bytes.
 *
 * A function of the boot executable at 0x0015C7F0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x860];
    int f;
} Obj_0015C7F0;

int func_0015C7F0(Obj_0015C7F0 *self, int v)
{
    self->f = v;
    return 0;
}

/* func_0015BDE0 -- 12 bytes.
 *
 * A function of the boot executable at 0x0015BDE0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x708];
    int f;
} Obj_0015BDE0;

int func_0015BDE0(Obj_0015BDE0 *self, int v)
{
    self->f = v;
    return 0;
}

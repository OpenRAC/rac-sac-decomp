/* func_00153080 -- 12 bytes.
 *
 * A function of the boot executable at 0x00153080; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0xF0];
    int f;
} Obj_00153080;

int func_00153080(Obj_00153080 *self, int v)
{
    self->f = v;
    return 0;
}

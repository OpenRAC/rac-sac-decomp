/* func_00149110 -- 12 bytes.
 *
 * A function of the boot executable at 0x00149110; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x4C];
    int f;
} Obj_00149110;

int func_00149110(Obj_00149110 *self, int v)
{
    self->f = v;
    return 0;
}

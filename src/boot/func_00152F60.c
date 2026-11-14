/* func_00152F60 -- 12 bytes.
 *
 * A function of the boot executable at 0x00152F60; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x20];
    int f;
} Obj_00152F60;

int func_00152F60(Obj_00152F60 *self, int v)
{
    self->f = v;
    return 0;
}

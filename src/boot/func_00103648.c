/* func_00103648 -- 28 bytes.
 *
 * A function of the boot executable at 0x00103648; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x40];
    float x;
    float y;
} BootState_00103648;

BootState_00103648 *func_00103648(BootState_00103648 *self, float scale)
{
    self->y = self->y + scale * self->x;
    return self;
}

/* func_00116460 -- 8 bytes.
 *
 * A function of the boot executable at 0x00116460; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x4];
    short f;
} Obj_00116460;

short func_00116460(Obj_00116460 *self)
{
    return self->f;
}

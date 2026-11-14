/* func_00116458 -- 8 bytes.
 *
 * A function of the boot executable at 0x00116458; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x6];
    short f;
} Obj_00116458;

short func_00116458(Obj_00116458 *self)
{
    return self->f;
}

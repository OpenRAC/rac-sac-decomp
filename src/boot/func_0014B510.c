/* func_0014B510 -- 8 bytes.
 *
 * A function of the boot executable at 0x0014B510; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x228];
    float field_228;
} Obj_0014B510;

float func_0014B510(Obj_0014B510 *self)
{
    return self->field_228;
}

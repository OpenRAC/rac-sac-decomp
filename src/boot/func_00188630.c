/* func_00188630 -- 16 bytes.
 *
 * A function of the boot executable at 0x00188630; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x58];
    int field;
} Obj_00188630;

extern Obj_00188630 *g_001CF8E4;

void func_00188630(int value)
{
    g_001CF8E4->field = value;
}

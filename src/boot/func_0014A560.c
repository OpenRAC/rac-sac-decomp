/* func_0014A560 -- 20 bytes.
 *
 * Store self->ptr (word at 0x14) into the boot global, return 0.
 */

typedef struct {
    char pad[0x14];
    int *ptr;
} Obj_0014A560;

extern int *g_001B7E50;

int func_0014A560(Obj_0014A560 *self)
{
    g_001B7E50 = self->ptr;
    return 0;
}

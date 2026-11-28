/* func_0015BC00 -- 20 bytes.
 *
 * Unused this; store value at g->field_20; return 0.
 * Same global as func_0014A560 (0x001B7E50).
 */

typedef struct {
    char pad[0x20];
    int field_20;
} Obj_0015BC00;

extern Obj_0015BC00 *g_001B7E50;

int func_0015BC00(void *unused, int value)
{
    g_001B7E50->field_20 = value;
    return 0;
}

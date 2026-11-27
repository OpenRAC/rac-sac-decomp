/* func_0012A8F8 -- 20 bytes.
 *
 * Store a0 to a global, return a code address (lui/addiu in delay).
 */

extern int g_00288FE0;
extern int D_0012AA50;

int *func_0012A8F8(int value)
{
    g_00288FE0 = value;
    return &D_0012AA50;
}

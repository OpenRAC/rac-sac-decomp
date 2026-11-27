/* func_00115E20 -- 20 bytes.
 *
 * Ctor: daddu $v0,$a0 then store &g into *self (lui/addiu in $v1).
 */

extern int g_001FB9E8;

int *func_00115E20(int *self)
{
    *self = (int)&g_001FB9E8;
    return self;
}

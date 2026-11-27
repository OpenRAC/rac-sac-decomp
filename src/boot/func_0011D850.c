/* func_0011D850 -- 20 bytes.
 *
 * if (self) store value at 0x28C (beqz, daddu $v0,$a1, delay sw).
 * Returns value.
 */

int func_0011D850(int *self, int value)
{
    if (self) {
        self[0xA3] = value;
    }
    return value;
}

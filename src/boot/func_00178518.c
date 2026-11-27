/* func_00178518 -- 16 bytes.
 *
 * slot[0] = slot[1] = value, then slot[2] = 0. Separate stores of
 * value let Haifa emit word 1, word 0, delay word 2.
 */

void func_00178518(int *slot, int value)
{
    slot[0] = slot[1] = value;
    slot[2] = 0;
}

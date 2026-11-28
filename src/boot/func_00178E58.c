/* func_00178E58 -- 20 bytes.
 *
 * *cursor = value then cursor += 4 (int). Store of the advanced
 * pointer sits in the delay of jr.
 */

void func_00178E58(int **cursor, int value)
{
    int *p;

    p = *cursor;
    *p = value;
    *cursor = p + 1;
}

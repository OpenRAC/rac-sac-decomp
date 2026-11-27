/* func_00139150 -- 20 bytes.
 *
 * Select p or p-4 from self[2], then *chosen (delay lw; movn).
 * Two separate returns emit branches (28 o).
 */

int func_00139150(int *self, int *p)
{
    if (!self[2]) {
        p = p - 4;
    }
    return *p;
}

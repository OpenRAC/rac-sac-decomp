/* func_00115900 -- 64 bytes.
 *
 * A function of the boot executable at 0x00115900; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_184C34(int left, int right);

int func_00115900(int *left, int *right)
{
    int same = 0;

    if (right == left || func_184C34(*left, *right) == 0)
        same = 1;
    return same;
}

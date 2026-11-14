/* func_001036B0 -- 20 bytes.
 *
 * A function of the boot executable at 0x001036B0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_001036B0(int a, int b)
{
    int r = a - 1;
    int n = -b;

    return (r + b) & n;
}

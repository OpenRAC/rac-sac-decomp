/* func_001036B0 -- 20 bytes.
 *
 * A function of the boot executable at 0x001036B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Rounds a up to a multiple of b: ((a - 1) + b) & (-b). The negation of b is
 * computed into a local before the sum, otherwise GCC reassociates it into a +
 * (b - 1).
 */

int func_001036B0(int a, int b)
{
    int r = a - 1;
    int n = -b;

    return (r + b) & n;
}

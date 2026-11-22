/* func_00189AE8 -- 120 bytes.
 *
 * A function of the boot executable at 0x00189AE8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body strrev.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/strrev.c.
 */

/* func_00189AE8, : finds the string end with a do-while length scan, then swaps characters pairwise toward the middle; returns the string. */
char *func_00189AE8(char *s)
{
    int i;
    int j;
    int n;
    char t;
    n = 0;
    if (s[0] != 0) {
        do {
            n++;
        } while (s[n] != 0);
    }
    n--;
    for (i = 0; i < n; i++, n--) {
        t = s[i];
        s[i] = s[n];
        s[n] = t;
    }
    return s;
}

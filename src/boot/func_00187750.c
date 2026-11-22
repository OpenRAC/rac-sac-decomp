/* atoi -- 40 bytes.
 *
 * A function of the boot executable at 0x00187750; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/atoi.c.
 */

/* newlib atoi, (40 bytes):
 * return (int)func_0018DD78(str, 0, 10);
 */
extern long func_0018DD78(const char *str, char **endptr, int base);

int atoi(const char *str) {
    return (int)func_0018DD78(str, 0, 10);
}

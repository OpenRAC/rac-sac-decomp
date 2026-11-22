/* sceSifLoadModule -- 32 bytes.
 *
 * A function of the boot executable at 0x00199EB0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifLoadModule.c.
 */

/* sceSifLoadModule .. (32 bytes).
 * jal func_00199C88
 * Loads a module and discards the module result word (5th argument is 0). */
extern int func_00199C88(char *path, int arglen, char *args, int *modres, int t0);

int sceSifLoadModule(char *path, int arglen, char *args) {
    int modres;

    return func_00199C88(path, arglen, args, &modres, 0);
}

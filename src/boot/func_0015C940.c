/* func_0015C940 -- 8 bytes.
 *
 * A function of the boot executable at 0x0015C940; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body UMD_checkState__Fb.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/UMD_checkState__Fb.c.
 */

/* Mangling __Fb: the parameter is a 1-byte bool in this binary (see the
 byte stores of the other __Fb setters). It is unused here. */
int func_0015C940(unsigned char state) {
    (void)state;
    return 0;
}

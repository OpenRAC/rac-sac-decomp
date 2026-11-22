/* sceDisplayGetVcount__Fv -- 16 bytes.
 *
 * A function of the boot executable at 0x001269D0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceDisplayGetVcount__Fv.c.
 */

extern volatile int D_00288BA8;

int sceDisplayGetVcount__Fv(void) {
    return D_00288BA8;
}

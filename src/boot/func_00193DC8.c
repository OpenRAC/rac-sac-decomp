/* sceSifSetCmdBuffer -- 24 bytes.
 *
 * A function of the boot executable at 0x00193DC8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifSetCmdBuffer.c.
 */

/* sceSifSetCmdBuffer .. (24 bytes).
 * Installs the two SIF command buffers and returns the previous one.
 * Statement order matters: the store of the first argument is emitted last. */
extern int D_0028FD98[];

int sceSifSetCmdBuffer(int a0, int a1) {
    int old = D_0028FD98[5];

    D_0028FD98[5] = a0;
    D_0028FD98[6] = a1;
    return old;
}

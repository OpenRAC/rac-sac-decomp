/* sceDeci2ReqSend -- 48 bytes.
 *
 * A function of the boot executable at 0x0019C7F0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceDeci2ReqSend.c.
 */

/* sceDeci2ReqSend .. (48 bytes).
 * jal func_00191190
 * Sends a Deci2 request: the option byte is sign extended into the message. */
extern int func_00191190(int cmd, void *arg);

int sceDeci2ReqSend(int id, int opt) {
    int buf[2];

    buf[0] = id;
    buf[1] = (signed char)opt;
    return func_00191190(3, buf);
}

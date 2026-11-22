/* _lseek_r -- 96 bytes.
 *
 * A function of the boot executable at 0x0018F068; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_lseek_r.c.
 */

/* _lseek_r, newlib reentrant wrapper: clears D_0028F040, calls func_001913A8 and copies a nonzero D_0028F040 into the reent when the call returns -1. */
extern int D_0028F040;
struct _reent { int _errno; };
extern int func_001913A8(int fd, int off, int whence);

int _lseek_r(struct _reent *ptr, int fd, int off, int whence)
{
    int r;
    D_0028F040 = 0;
    r = func_001913A8(fd, off, whence);
    if (r == (int)-1) {
        if (D_0028F040 != 0) {
            ptr->_errno = D_0028F040;
        }
    }
    return r;
}

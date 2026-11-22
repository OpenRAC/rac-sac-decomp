/* vfiprintf -- 48 bytes.
 *
 * A function of the boot executable at 0x0018B6C0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/vfiprintf.c.
 */

/* newlib vfiprintf, (44 bytes + padding):
 * a0 = fp->_data, a1 = fp, a2 = fmt, a3 = args ; jal func_0018B6F0
 */
struct _reent;
typedef struct _FILE {
    unsigned char _pad0[0x0E];
    short _file;
    unsigned char _pad1[0x44];   /* 0x10 .. 0x53 */
    struct _reent *_data;
} FILE;
struct _reent {
    int _errno;
    void *_stdin;
    void *_stdout;
    FILE *_stderr;
    int _pad0[15];               /* 0x10 .. 0x4B */
    void **_freelist;
    int _pad1[2];                /* 0x50, 0x54 */
    unsigned int _rand_next;
};

extern int func_0018B6F0(void *ptr, FILE *fp, const char *fmt, void *args);

int vfiprintf(FILE *fp, const char *fmt, void *args) {
    return func_0018B6F0(fp->_data, fp, fmt, args);
}

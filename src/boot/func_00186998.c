/* __sclose -- 32 bytes.
 *
 * A function of the boot executable at 0x00186998; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__sclose.c.
 */

/* newlib __sclose, (32 bytes):
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

extern int func_0018EEF0(struct _reent *ptr, int fd);

int __sclose(FILE *fp) {
    return func_0018EEF0((struct _reent *)fp->_data, fp->_file);
}

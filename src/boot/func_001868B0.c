/* func_001868B0 -- 128 bytes.
 *
 * A function of the boot executable at 0x001868B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __swrite.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__swrite.c.
 */

/* boot: -- stream write hook: seek to the end when appending, then write. */
struct _reent;
struct _FILE {
    unsigned char *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct { unsigned char *_base; int _size; } _bf;
    int _lbfsize;
    void *_cookie;
    int (*_read)(struct _FILE *, char *, int);
    int (*_write)(struct _FILE *, const char *, int);
    long (*_seek)(struct _FILE *, long, int);
    int (*_close)(struct _FILE *);
    struct { unsigned char *_base; int _size; } _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct { unsigned char *_base; int _size; } _lb;
    int _blksize;
    int _offset;
    struct _reent *_data;
};

extern long func_0018EFA8(struct _reent *ptr, int fd, long off, int whence);
extern long func_0018F128(struct _reent *ptr, int fd, const void *buf, int n);

int func_001868B0(struct _FILE *fp, const char *buf, int n)
{
    if (fp->_flags & 0x100)
        func_0018EFA8(fp->_data, fp->_file, 0, 2);
    fp->_flags &= ~0x1000;
    return func_0018F128(fp->_data, fp->_file, buf, n);
}

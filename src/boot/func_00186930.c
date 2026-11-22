/* func_00186930 -- 104 bytes.
 *
 * A function of the boot executable at 0x00186930; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __sseek.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__sseek.c.
 */

/* boot: -- stream seek hook: seek through the reent and track the offset. */
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

long func_00186930(struct _FILE *fp, long off, int whence)
{
    long ret;

    ret = func_0018EFA8(fp->_data, fp->_file, off, whence);
    if (ret == -1L)
        fp->_flags &= ~0x1000;
    else {
        fp->_flags |= 0x1000;
        fp->_offset = ret;
    }
    return ret;
}

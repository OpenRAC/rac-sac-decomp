/* func_001867B0 -- 152 bytes.
 *
 * A function of the boot executable at 0x001867B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body sscanf.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sscanf.c.
 */

/* boot: -- scan a string through a read-only string stream. */
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

extern struct _reent *D_001CF8E4;
extern unsigned int func_00184E98(const char *s);
extern int func_001867A8(struct _FILE *fp, char *buf, int n);
extern int func_001869B8(struct _FILE *fp, const char *fmt, void *ap);

int func_001867B0(const char *str, const char *fmt, ...)
{
    struct _FILE f;
    char *ap;

    f._flags = 4;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._r = func_00184E98(str);
    f._read = func_001867A8;
    f._ub._base = 0;
    f._lb._base = 0;
    f._data = D_001CF8E4;
    ap = (char *)&f + 0xC0;
    return func_001869B8(&f, fmt, ap);
}

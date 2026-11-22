/* rand -- 48 bytes.
 *
 * A function of the boot executable at 0x00188640; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/rand.c.
 */

/* newlib rand, (48 bytes):
 * D_001CF8E4->_rand_next = _rand_next * 1103515245 + 12345; return & 0x7fffffff
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

extern struct _reent *D_001CF8E4;

int rand(void) {
    return (D_001CF8E4->_rand_next =
                D_001CF8E4->_rand_next * 1103515245u + 12345u) & 0x7fffffffu;
}

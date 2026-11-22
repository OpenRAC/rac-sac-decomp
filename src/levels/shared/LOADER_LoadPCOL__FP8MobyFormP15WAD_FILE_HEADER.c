/* LOADER_LoadPCOL__FP8MobyFormP15WAD_FILE_HEADER -- 252 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Validates a loaded file header and relocates its two optional tables.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/SHARED/WAD/loader/LEVEL_01_12AB08.c.
 */

struct Hdr {
    char tag[4];
    int version;
    unsigned int rev;
    unsigned int off1;
    unsigned int off2;
};

struct Link {
    int pad;
    unsigned int rel;
};

struct File {
    char pad0[0x78];
    int loaded;
    char pad1[0x44];
    struct Hdr hdr;
};

struct Out {
    char pad0[0xC];
    struct Link *a;
    struct Link *b;
};

extern char D_L01_002BB238[];
extern int memcmp(const void *a, const void *b, unsigned int n);

int LOADER_LoadPCOL__FP8MobyFormP15WAD_FILE_HEADER(struct Out *out, struct File *f)
{
    struct Hdr *h;
    struct Link *l;
    unsigned int off;

    out->a = 0;
    out->b = 0;
    if (!f)
        return 0;
    h = &f->hdr;
    if (!f->loaded) {
        if (memcmp(h, D_L01_002BB238, 4))
            return 0;
        if (h->version != 2)
            return 0;
    }
    if (h->rev < 0x15)
        return 1;
    if (h->off1 == 0 && h->off2 == 0)
        return 1;
    off = h->off1;
    if (off) {
        l = (struct Link *)((char *)h + off);
        out->a = l;
        if (!f->loaded)
            l->rel = (unsigned int)h + l->rel;
    }
    if (h->off2) {
        l = (struct Link *)((char *)h + h->off2);
        out->b = l;
        if (!f->loaded)
            l->rel = (unsigned int)h + l->rel;
    }
    f->loaded = 1;
    return 1;
}

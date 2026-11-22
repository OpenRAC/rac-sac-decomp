/* func_L01_11AFF8 -- 176 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Releases the object's table record, then the attached object when its flags
 * and mode bits allow it, and resets the link and mode byte.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CD720.c.
 */

typedef struct {
    char pad[0x68];
} Rec68;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
} Tag;

typedef struct {
    char pad00[0x64];
    unsigned int flags;
    char pad68[0x78 - 0x68];
    unsigned char mode;
} Attached;

typedef struct {
    char pad00[0x58];
    Tag *tag;
    char pad5C[0x68 - 0x5C];
    Attached *link;
    char pad6C[0x78 - 0x6C];
    unsigned char mode;
} State;

extern Rec68 G_dynaGrid[];
extern void WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(Rec68 *r, unsigned int index);
extern void func_L01_1197B0(Attached *o);

void func_L01_11AFF8(void *unused, State *s)
{
    Tag *tag;
    Rec68 *p;
    Attached *a;

    tag = s->tag;
    p = (Rec68 *)(tag->b3 * 0x68);
    p = (Rec68 *)((char *)G_dynaGrid + (int)p);
    if (tag->h0 != 0xFFFF) {
        WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(p, tag->h0);
        tag->h0 = 0xFFFF;
    }
    a = s->link;
    if (a != 0 && (((a->flags & 0x2F) ^ 1) | (a->mode & 0x18)) == 0) {
        a->mode &= 0xFE;
        func_L01_1197B0(a);
    }
    s->link = 0;
    s->mode = 0x10;
}

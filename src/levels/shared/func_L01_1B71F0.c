/* func_L01_1B71F0 -- 316 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Converts the offsets in a loaded resource header into pointers once and
 * returns its data block.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12A5A0.c.
 */

struct Ent_12A5A0 {
    char pad[0x18];
};

struct Tab_12A5A0 {
    struct Ent_12A5A0 *ents;
    int count;
};

struct Sec_12A5A0 {
    int a;
    int b;
    int c;
};

struct Hdr_12A5A0 {
    char pad0[0x78];
    int ready;
    int data;
    char pad1[0x40];
    char blob[16];
};

extern char D_L01_002BB228[];
extern struct Hdr_12A5A0 *LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(void *a0);
extern int memcmp(const void *a, const void *b, unsigned int n);

int func_L01_1B71F0(int a0, int mode)
{
    struct Hdr_12A5A0 *hdr;
    char *blob;
    struct Tab_12A5A0 *tab;
    struct Sec_12A5A0 *secB;
    struct Sec_12A5A0 *secC;
    int offA;
    int offB;
    int offC;
    struct Ent_12A5A0 *e;
    struct Ent_12A5A0 *end;

    if (a0 == 0) {
        return 0;
    }
    hdr = LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE((void *)a0);
    if (hdr == 0) {
        return 0;
    }
    if (hdr->ready == 0) {
        blob = hdr->blob;
        if (memcmp(blob, D_L01_002BB228, 4) != 0) {
            return 0;
        }
        offA = *(int *)(blob + 4);
        if (offA != 0) {
            tab = (struct Tab_12A5A0 *)(offA + (int)blob);
            *(struct Tab_12A5A0 **)(blob + 4) = tab;
            tab->ents = (struct Ent_12A5A0 *)((char *)tab->ents + (int)blob);
            e = tab->ents;
            end = e + tab->count;
            for (; e != end; e++) {
            }
        }
        offB = *(int *)(blob + 8);
        if (offB != 0) {
            secB = (struct Sec_12A5A0 *)(offB + (int)blob);
            *(struct Sec_12A5A0 **)(blob + 8) = secB;
            secB->a += (int)blob;
            secB->b += (int)blob;
            secB->c += (int)blob;
        }
        offC = *(int *)(blob + 12);
        if (offC != 0) {
            secC = (struct Sec_12A5A0 *)(offC + (int)blob);
            *(struct Sec_12A5A0 **)(blob + 12) = secC;
            secC->a += (int)blob;
            secC->b += (int)blob;
            secC->c += (int)blob;
        }
        hdr->data = (int)blob;
        hdr->ready = 1;
    }
    return hdr->data;
}

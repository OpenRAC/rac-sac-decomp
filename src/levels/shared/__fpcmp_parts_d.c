/* __fpcmp_parts_d -- 276 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sort comparator over typed records: low kinds first, then kinds 4 and 2,
 * then by flag word, second word and 64-bit key.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/__fpcmp_parts_d.c.
 */

typedef struct Rec {
    unsigned int kind;
    int w4;
    int w8;
    int wC;
    unsigned long long key;
} Rec;

int __fpcmp_parts_d(Rec *a, Rec *b)
{
    unsigned int ka;
    unsigned int kb;

    ka = a->kind;
    if (ka < 2) {
        return 1;
    }
    kb = b->kind;
    if (kb < 2) {
        return 1;
    }
    if ((ka ^ 4) == 0) {
        if ((kb ^ 4) == 0) {
            return b->w4 - a->w4;
        }
        return a->w4 ? -1 : 1;
    }
    if ((kb ^ 4) == 0) {
        return b->w4 ? 1 : -1;
    }
    if ((ka ^ 2) == 0) {
        if ((kb ^ 2) == 0) {
            return 0;
        }
        if (b->w4 != 0) {
            return 1;
        }
        return -1;
    }
    if ((kb ^ 2) == 0) {
        return a->w4 ? -1 : 1;
    }
    if (a->w4 != b->w4) {
        return a->w4 ? -1 : 1;
    }
    if (a->w8 > b->w8) {
        return a->w4 ? -1 : 1;
    }
    if (a->w8 < b->w8) {
        return a->w4 ? 1 : -1;
    }
    if (a->key > b->key) {
        return a->w4 ? -1 : 1;
    }
    if (a->key < b->key) {
        return a->w4 ? 1 : -1;
    }
    return 0;
}

/* func_L01_18C4F8 -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Checks a four-byte tag at the argument, then copies a pointer and a word
 * into two globals when the tag and fields match.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_112A18.c.
 */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_L01_002BA8A0[];
extern struct Slot G_collisionSurfaceTypeDefs;
extern int G_nCollisionSurfaceTypes;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_L01_18C4F8(struct Obj *a0)
{
    if (memcmp_import(a0, D_L01_002BA8A0, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    G_collisionSurfaceTypeDefs.p_00 = (char *)a0 + 0xC;
    G_nCollisionSurfaceTypes = a0->w_08;
    return 1;
}

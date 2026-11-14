/* TARGET_Init__Fv -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the pointer of the global target object in a global pointer, clears
 * one word of the object, then zeroes 16 words of the object's table at a
 * stride of 0x64 bytes starting at offset 0x5C. The loop pointer is an
 * induction variable advancing by one entry per iteration and the counter is
 * unsigned.
 */

typedef struct TARGET_ENTRY TARGET_ENTRY;

struct TARGET_ENTRY {
    unsigned char reserved_000[0x5C];
    unsigned int field_05C;
    unsigned int field_060;
};

extern TARGET_ENTRY TARGET_entries[];
extern unsigned int TARGET_count;
extern void *TARGET_current;

void TARGET_Init__Fv(void)
{
    unsigned int i;

    TARGET_current = TARGET_entries;
    TARGET_count = 0;
    for (i = 0; i < 16; i++)
        TARGET_entries[i].field_05C = 0;}

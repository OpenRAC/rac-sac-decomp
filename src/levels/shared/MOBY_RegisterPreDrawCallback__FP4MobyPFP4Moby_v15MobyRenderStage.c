/* MOBY_RegisterPreDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_080C48.c.
 */

/* Candidate for LEVEL_01.REL:0x080C48.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_L01_00321FFC;
extern Record D_L01_00322000[];

int MOBY_RegisterPreDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_L01_00321FFC;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_L01_00322000[count];
    D_L01_00321FFC = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}


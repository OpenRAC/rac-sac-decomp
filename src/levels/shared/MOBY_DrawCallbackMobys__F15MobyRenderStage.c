/* MOBY_DrawCallbackMobys__F15MobyRenderStage -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_07E4C8.c.
 */

typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_L01_003220C0;
extern Entry D_L01_003220C8[];

void MOBY_DrawCallbackMobys__F15MobyRenderStage(unsigned int key)
{
    unsigned int count = D_L01_003220C0;
    if (count != 0) {
        Entry *current = D_L01_003220C8;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}

/* GCS_EntityEmit__FPC17GCS_EntitySpawner -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the handler stored in the object's table entry (20-byte entries
 * indexed by the word at offset 0x14), passing the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F8718.c.
 */

typedef struct {
    int w_00;
    int w_04;
    int w_08;
    void (*handler_0C)(void *object);
    int w_10;
} Entry;

extern Entry D_L24_0025AB38[];

void GCS_EntityEmit__FPC17GCS_EntitySpawner(char *object)
{
    Entry *e = &D_L24_0025AB38[*(int *)(object + 0x14)];

    e->handler_0C(object);
}

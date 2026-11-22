/* Lvl07CameraBottom_Term__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Hands the child's record to the handler when one is set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_1D8698.c.
 */

extern void Flashlight_Destroy__FP10Flashlight(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void Lvl07CameraBottom_Term__FP4Moby(Obj *o)
{
    char *record = o->child->record;

    if (record != 0)
        Flashlight_Destroy__FP10Flashlight(record);
}

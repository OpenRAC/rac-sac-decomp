/* TriggerCollection_ClampPointOutsideXZ__FPC4MobyP4VEC4 -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scans a pointer table and reports whether any non-null entry accepts the
 * argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1C49D0.c.
 */

extern int TRIGGER_ClampPointOutsideXZ__FPC7TriggerPfT1(void *, void *, void *);

int TriggerCollection_ClampPointOutsideXZ__FPC4MobyP4VEC4(char *context, char *argument)
{
    int found = 0;
    unsigned int index;
    void **table = *(void ***)(context + 0x54);

    for (index = 0; index < *(unsigned char *)(context + 0x45); index++) {
        void *item = table[index];
        if (item != 0)
            found = (unsigned char)TRIGGER_ClampPointOutsideXZ__FPC7TriggerPfT1(item, argument, argument + 8) ? 1 : found;
    }
    return found;
}

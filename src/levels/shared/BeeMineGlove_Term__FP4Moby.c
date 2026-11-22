/* BeeMineGlove_Term__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Enables the object stored in the first word of the record's state, when
 * there is one.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_13FF30.c.
 */

extern void RATCHET_SetWeaponHandVisibility__FP7RATCHETb(void *object, int enable);

void BeeMineGlove_Term__FP4Moby(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        RATCHET_SetWeaponHandVisibility__FP7RATCHETb(target, 1);
    }
}

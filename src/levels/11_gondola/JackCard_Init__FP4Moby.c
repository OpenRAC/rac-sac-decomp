/* JackCard_Init__FP4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the object's state block: mode byte 2, owner, two zeroed words.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_183CD8.c.
 */

int JackCard_Init__FP4Moby(char *object)
{
    char *state;

    state = *(char **)(object + 0x58);
    *(unsigned char *)(state + 0xE) = 2;
    *(char **)(state + 0x10) = object;
    *(int *)(state + 0x14) = 0;
    *(int *)(state + 0) = 0;
    return 1;
}

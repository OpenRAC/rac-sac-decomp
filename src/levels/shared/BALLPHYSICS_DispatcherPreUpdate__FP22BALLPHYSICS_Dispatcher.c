/* BALLPHYSICS_DispatcherPreUpdate__FP22BALLPHYSICS_Dispatcher -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_02E540.c.
 */

void BALLPHYSICS_DispatcherPreUpdate__FP22BALLPHYSICS_Dispatcher(char *object)
{
    int sum = *(int *)(object + 0x18) +
        (*(int *)(object + 0x14) >> *(unsigned int *)(object + 0x1C));
    int limit = *(int *)(object + 0x20);
    if (sum >= limit)
        sum = limit;
    *(int *)(object + 0x24) = sum;
}

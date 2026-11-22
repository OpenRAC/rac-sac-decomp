/* __terminate -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the function pointer stored at 0x105548.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__terminate_FRONTEND.c.
 */

extern void (*__terminate_func)(void);

void __terminate(void)
{
    __terminate_func();
}

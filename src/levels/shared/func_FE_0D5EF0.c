/* func_FE_0D5EF0 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Installs the update callback in its global slot and runs it once.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_024310.c.
 */

extern void (*D_FE_0010C624)(void);
extern void func_FE_0D5F18(void);

void func_FE_0D5EF0(void)
{
    void (*fn)(void);

    fn = func_FE_0D5F18;
    D_FE_0010C624 = fn;
    fn();
}

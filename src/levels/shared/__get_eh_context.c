/* __get_eh_context -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the function pointer stored in a global.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__get_eh_context_FRONTEND.c.
 */

extern int (*D_FE_0010C624)(void);

int __get_eh_context(void)
{
    return D_FE_0010C624();
}

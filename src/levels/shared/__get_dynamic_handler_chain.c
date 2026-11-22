/* __get_dynamic_handler_chain -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the registered handler and returns its size plus 4.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__get_dynamic_handler_chain_FRONTEND.c.
 */

typedef int (*Handler)(void);

extern Handler D_FE_0010C624;

int __get_dynamic_handler_chain(void)
{
    return D_FE_0010C624() + 4;
}

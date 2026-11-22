/* __get_eh_info -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the registered handler and returns its size.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0242E8.c.
 */

typedef int (*Handler)(void);

extern Handler D_FE_0010C624;

int __get_eh_info(void)
{
    return D_FE_0010C624() + 8;
}

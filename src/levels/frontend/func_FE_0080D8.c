/* func_FE_0080D8 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unnamed thunk: calls the shared helper with the argument pair (4, 0). Same
 * form as func_FE_007BA8, with the constant 4 instead of 0x10.
 */

extern void func_FE_007810(int a, int b);

void func_FE_0080D8(void)
{
    func_FE_007810(4, 0);
}

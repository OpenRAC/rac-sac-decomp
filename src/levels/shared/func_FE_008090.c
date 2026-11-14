/* func_FE_008090 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unnamed wrapper that asks the game-mode layer for mode 4. It is case 4 of
 * the game-mode switch. The routine is unnamed in the retail symbol table.
 */

extern void func_FE_007810(int a, int b);

void func_FE_008090(void)
{
    func_FE_007810(4, 0);
}

/* Arena_GetChallengeGroupTitle__FUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern char *D_L01_002541D8;

unsigned int Arena_GetChallengeGroupTitle__FUi(unsigned int unused)
{
    (void)unused;
    return *(unsigned int *)D_L01_002541D8;
}

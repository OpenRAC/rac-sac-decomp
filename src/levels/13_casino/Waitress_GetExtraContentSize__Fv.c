/* Waitress_GetExtraContentSize__Fv -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills a 6-word descriptor, calls GetTransientDataExtraSize, then stores the
 * 4-byte-aligned (field0 + extra) into a word of the module and returns it.
 */

extern int GetTransientDataExtraSize__12StateMachine(void);
extern int g_WaitressExtraSize;

int Waitress_GetExtraContentSize__Fv(void)
{
    int desc[6];
    int extra;
    int total;

    desc[1] = 1;
    desc[4] = 4;
    desc[2] = 0x14;
    desc[3] = 0;
    desc[5] = 0x14;
    desc[0] = 0x14;
    extra = GetTransientDataExtraSize__12StateMachine();
    total = (desc[0] + extra + 3) & -4;
    g_WaitressExtraSize = total;
    return total;
}

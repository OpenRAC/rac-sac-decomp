/* PAUSEMODE_GetReusableTextBufferSize__Fv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the size of the reusable text buffer. The return value is produced
 * in the delay slot of the return, hence the local variable result rather than
 * a literal in the return statement.
 */

int PAUSEMODE_GetReusableTextBufferSize__Fv(void)
{
    int result = 0x200;
    return result;
}

/* GCSSOUND_ResetHandle__FP15GCSSOUND_Handle -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void GCSSOUND_Stop__FP15GCSSOUND_Handle(void);

void GCSSOUND_ResetHandle__FP15GCSSOUND_Handle(void)
{
    GCSSOUND_Stop__FP15GCSSOUND_Handle();
}

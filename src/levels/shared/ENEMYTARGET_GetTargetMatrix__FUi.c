/* ENEMYTARGET_GetTargetMatrix__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    char pad[0x64];
} TargetRec;

extern TargetRec g_targetMatrix[];

TargetRec *ENEMYTARGET_GetTargetMatrix__FUi(unsigned int i)
{
    return &g_targetMatrix[i];
}

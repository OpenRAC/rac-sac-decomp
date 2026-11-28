/* ENEMYTARGET_GetTargetPos__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    char pad[0x64];
} TargetRec;

extern TargetRec g_targetPos[];

TargetRec *ENEMYTARGET_GetTargetPos__FUi(unsigned int i)
{
    return &g_targetPos[i];
}

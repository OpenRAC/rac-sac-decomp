/* GCP_AnimIsDone__FP16GiantClankPlayer -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether a computed reading is within a small tolerance of a
 * threshold.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_173228.c.
 */

extern int GCP_AnimGetActive__FP16GiantClankPlayer(unsigned char *o);
extern float GCP_AnimGetTime__FP16GiantClankPlayer(unsigned char *o);
extern float GCP_AnimGetDuration__FP16GiantClankPlayer10GCP_AnimID(unsigned char *o, int n);

int GCP_AnimIsDone__FP16GiantClankPlayer(unsigned char *a0)
{
    unsigned char *o;
    int s1;
    float f20;
    float f0;

    o = a0;
    s1 = GCP_AnimGetActive__FP16GiantClankPlayer(o);
    if (s1 == -1) {
        return 1;
    }
    f20 = GCP_AnimGetTime__FP16GiantClankPlayer(o);
    f0 = GCP_AnimGetDuration__FP16GiantClankPlayer10GCP_AnimID(o, s1);
    f20 = f20 + 0.03333333507180214f;
    return f0 <= f20;
}

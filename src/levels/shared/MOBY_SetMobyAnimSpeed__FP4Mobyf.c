/* MOBY_SetMobyAnimSpeed__FP4Mobyf -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void MOBY_SetMobyAnimSpeed__FP4Mobyf(char *self, float speed)
{
    float *p;

    p = *(float **)(self + 0x48);
    if (p) {
        p[4] = speed;
    }
}

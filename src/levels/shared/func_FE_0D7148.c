/* func_FE_0D7148 -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Counts records with two nonzero words, stride-walked.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_025CC0.c.
 */

int func_FE_0D7148(int *record)
{
    int count = 0;
    int stride;

    if (record[0] != 0) {
        while (record[0] != 0) {
            stride = record[0];
            if (record[1] != 0 && record[2] != 0)
                count++;
            record = (int *)((char *)record + stride) + 1;
        }
    }
    return count;
}

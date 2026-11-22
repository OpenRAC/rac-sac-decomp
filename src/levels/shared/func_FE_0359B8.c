/* func_FE_0359B8 -- 196 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_012690.c.
 */

extern int PAUSEMENU_IndividualItemHeight__FP10tPAUSEMENU(void *);

int func_FE_0359B8(char *record)
{
    int change = 0;
    int first_step = PAUSEMENU_IndividualItemHeight__FP10tPAUSEMENU(record);
    int first = (short)(*(unsigned short *)(record + 0x50) +
                        *(int *)(record + 8) * first_step);
    int second_step = PAUSEMENU_IndividualItemHeight__FP10tPAUSEMENU(record);
    int second = (short)(*(unsigned short *)(record + 0x50) +
                         (*(int *)(record + 8) + 1) * second_step);
    short lower = *(short *)(record + 0x80);
    short upper = *(short *)(record + 0x84);
    if (first < lower) {
        change = (short)(first - lower);
    } else if (second > upper) {
        change = (short)(second - upper);
    }
    if (change != 0) {
        *(int *)(record + 0x80) += change;
        *(int *)(record + 0x84) += change;
    }
    return change;
}

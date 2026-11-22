/* func_L01_0AA7E8 -- 108 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Looks up a record, then acts on it according to a global mode word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0D1BF0.c.
 */

extern int D_L01_002670A4;
extern int D_L01_003A9A48[];
extern int ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU(int *set);
extern void SCRNMODVENDOR_UpdateBrowseState__Fv(void *p);
extern void SCRNMODVENDOR_UpdateBuyingStateGadget__Fv(void *p);

void func_L01_0AA7E8(void)
{
    int a;
    int m;

    a = ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU(D_L01_003A9A48);
    m = D_L01_002670A4;
    switch (m) {
    case 0:
        SCRNMODVENDOR_UpdateBrowseState__Fv((void *)a);
        break;
    case 1:
        if (a != 0) {
            SCRNMODVENDOR_UpdateBuyingStateGadget__Fv((void *)a);
        } else {
            D_L01_002670A4 = 0;
        }
        break;
    }
}

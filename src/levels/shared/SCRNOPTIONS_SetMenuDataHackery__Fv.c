/* SCRNOPTIONS_SetMenuDataHackery__Fv -- 192 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void func_L15_09F4C0(unsigned long long handle, int index);

extern int D_L15_25126C;
extern unsigned int D_L15_251248[5];
extern int D_L15_250DC0;
extern int D_L15_250EA8;
extern int D_L15_250F90;
extern int D_L15_251078;
extern int D_L15_251160;

void SCRNOPTIONS_SetMenuDataHackery__Fv(void)
{
    unsigned int *h0 = &D_L15_250DC0;
    unsigned int *h1 = &D_L15_250EA8;
    unsigned int *h2 = &D_L15_250F90;
    unsigned int *h3 = &D_L15_251078;
    unsigned int *h4 = &D_L15_251160;

    D_L15_25126C = 5;
    D_L15_251248[0] = (unsigned int)h0;
    D_L15_251248[1] = (unsigned int)h1;
    D_L15_251248[2] = (unsigned int)h2;
    D_L15_251248[3] = (unsigned int)h3;
    D_L15_251248[4] = (unsigned int)h4;
    func_L15_09F4C0((unsigned long long)h0, 0);
    func_L15_09F4C0((unsigned long long)h1, 1);
    func_L15_09F4C0((unsigned long long)h2, 2);
    func_L15_09F4C0((unsigned long long)h3, 3);
    func_L15_09F4C0((unsigned long long)h4, 4);
}

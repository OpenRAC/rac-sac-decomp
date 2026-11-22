/* HUDTIMER_Init__Fv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B21E8.c.
 */

extern void HUDTIMER_Terminate__Fv(void);
extern unsigned char D_L01_0025CCF8;
extern char HUDTIMER_G_Textbuffer[];
extern void *memset(void *, int, unsigned int);

void HUDTIMER_Init__Fv(void)
{
    HUDTIMER_Terminate__Fv();
    D_L01_0025CCF8 = 0;
    memset(HUDTIMER_G_Textbuffer, 0, 0x80);
}

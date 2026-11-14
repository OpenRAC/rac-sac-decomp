/* FADEOVERLAY_Refresh__FUiUcUcUcb -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY tFADEOVERLAY;

extern char D_FE_00144C40[];

extern void FADEOVERLAYOBJ_Refresh__FP12tFADEOVERLAYUiUcUcUcb(tFADEOVERLAY *overlay,
                                                                 unsigned int id,
                                                                 unsigned char red,
                                                                 unsigned char green,
                                                                 unsigned char blue,
                                                                 int flag);

void FADEOVERLAY_Refresh__FUiUcUcUcb(unsigned int id, unsigned char red,
                                     unsigned char green, unsigned char blue,
                                     int flag)
{
    FADEOVERLAYOBJ_Refresh__FP12tFADEOVERLAYUiUcUcUcb((tFADEOVERLAY *)&D_FE_00144C40,
                                                      id, red, green, blue,
                                                      flag);
}

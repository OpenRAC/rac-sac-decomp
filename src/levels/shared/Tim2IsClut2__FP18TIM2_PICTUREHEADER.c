/* Tim2IsClut2__FP18TIM2_PICTUREHEADER -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TIM2_PICTUREHEADER {
    char pad[0x11];
    unsigned char clut;
} TIM2_PICTUREHEADER;

int Tim2IsClut2__FP18TIM2_PICTUREHEADER(TIM2_PICTUREHEADER *p)
{
    return p->clut == 0;
}

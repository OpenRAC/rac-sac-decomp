/* BlasterShared_InitLight__FP16BlasterLightVars -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Initialises a four-field record: a colour word, a float intensity and two
 * zero words.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_12C720.c.
 */

typedef struct {
    int f_00;
    int f_04;
    float f_08;
    int f_0C;
} Rec;

void BlasterShared_InitLight__FP16BlasterLightVars(Rec *p)
{
    p->f_04 = (int)0xFF7FCCFF;
    p->f_08 = 5.0f;
    p->f_0C = 0;
    p->f_00 = 0;
}

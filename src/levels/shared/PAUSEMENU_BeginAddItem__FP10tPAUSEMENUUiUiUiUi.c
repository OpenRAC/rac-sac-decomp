/* PAUSEMENU_BeginAddItem__FP10tPAUSEMENUUiUiUiUi -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the level record fields into the live object when the level is not
 * already live.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0BA008.c.
 */

typedef struct Obj {
    char pad_00[0xC0];
    float f_C0;
    float f_C4;
    unsigned int f_C8;
    unsigned char f_CC;
    unsigned char f_CD;
    char pad_CE[2];
    int f_D0;
    int f_D4;
    int f_D8;
    int f_DC;
} Obj;

typedef struct {
    char pad_00[0x2C];
    Obj *f_2C;
    int f_30;
    char pad_34[4];
    int f_38;
    char pad_3C[4];
    float f_40;
    float f_44;
    char pad_48[4];
    unsigned char f_4C;
    unsigned char f_4D;
} Rec;

int PAUSEMENU_BeginAddItem__FP10tPAUSEMENUUiUiUiUi(Rec *a0, int a1, int a2, int a3, int a4)
{
    Rec *self = a0;
    Obj *p;

    if (self->f_30 != 0) {
        return 0;
    }
    self->f_30 = 1;
    p = self->f_2C;
    p->f_CC = self->f_4C;
    p->f_CD = self->f_4D;
    p->f_C0 = self->f_40;
    p->f_C4 = self->f_44;
    p->f_C8 = 0xFFFFFFFFu;
    p->f_D0 = a1;
    p->f_D4 = a2;
    p->f_D8 = a3;
    p->f_DC = a4;
    self->f_38 = 0;
    return 1;
}

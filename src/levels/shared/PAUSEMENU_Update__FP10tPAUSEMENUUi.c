/* PAUSEMENU_Update__FP10tPAUSEMENUUi -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tPAUSEMENU {
    unsigned char unknown_000[0x04];
    unsigned int field_04;
    unsigned char unknown_008[0x0C];
    unsigned int field_14;
    unsigned char unknown_018[0x50];
    unsigned int field_68;
} tPAUSEMENU;

extern void PAUSEMENU_HideAllCustomCursors__FP10tPAUSEMENU(tPAUSEMENU *self);
extern unsigned int PAUSEMENU_SeekSelection__FP10tPAUSEMENUUi(tPAUSEMENU *self,
                                                                unsigned int index);
extern void func_FE_0358C0(tPAUSEMENU *self);
extern unsigned int func_FE_0359B8(tPAUSEMENU *self);

unsigned long long PAUSEMENU_Update__FP10tPAUSEMENUUi(tPAUSEMENU *self,
                                                        unsigned int arg1)
{
    int selection;

    PAUSEMENU_HideAllCustomCursors__FP10tPAUSEMENU(self);

    if (self->field_04 == 0) {
        return 0;
    }

    selection = PAUSEMENU_SeekSelection__FP10tPAUSEMENUUi(self, arg1);
    func_FE_0358C0(self);
    if (self->field_14 & 2) {
        self->field_68 += func_FE_0359B8(self);
    }

    return selection;
}

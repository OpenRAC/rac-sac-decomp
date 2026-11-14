/* GADGET_GetParametricXPToNextLevel__FUi -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the parametric experience the next level gives for a gadget: the
 * value of the gadget over the value of its definition, with the ratio bounded
 * to one.
 */

typedef struct GADGET_DATA {
    unsigned char reserved[0x64];
    unsigned int value;
} GADGET_DATA;

typedef struct GADGET_DEF {
    unsigned char reserved[0x34];
    unsigned int value;
} GADGET_DEF;

extern int GADGET_CanGainLevel__FUi(unsigned int index);
extern GADGET_DATA *GADGET_GetData__FUi(unsigned int index);
extern GADGET_DEF *GADGET_GetDefAtLevel__FUiUi(unsigned int index,
                                               unsigned int level);
extern unsigned int GADGET_GetCurrentPowerLevel__FUi(unsigned int index);

float GADGET_GetParametricXPToNextLevel__FUi(unsigned int index)
{
    GADGET_DATA *data;
    GADGET_DEF *def;
    float numerator;
    float denominator;
    float result;

    if (GADGET_CanGainLevel__FUi(index) == 0) {
        return 0.0f;
    }
    data = GADGET_GetData__FUi(index);
    def = GADGET_GetDefAtLevel__FUiUi(index,
                                      GADGET_GetCurrentPowerLevel__FUi(index));
    {
        unsigned int raw = def->value;
        numerator = (float)data->value;
        denominator = (float)raw;
        result = numerator / (denominator + 0.000001f);
    }
    if (1.0f < result) {
        result = 1.0f;
    }
    return result;
}

/* RadialBlurCB__11ApeLevelDefP12TiXmlElement -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills the radial blur settings of the most recently loaded level definition
 * from the XML element (a bool, an int and two floats) and returns 1. The zero
 * float default lives across the two float queries, so it is kept in a
 * callee-saved float register.
 */

typedef struct TiXmlElement TiXmlElement;
typedef struct ApeLevelDef ApeLevelDef;

struct ApeLevelDef {
    char pad_00[0x22C];
    unsigned char radialBlurSet;   /* 0x22C */
    unsigned char radialBlurUsed;   /* 0x22D */
    unsigned char radialBlurValue;  /* 0x22E */
    float radialBlurRadius;        /* 0x230 */
    float radialBlurAngle;         /* 0x234 */
};

extern ApeLevelDef *_11ApeLevelDef$s_lastLevelDef;

/* The XML attribute names of the retail module; they have no exported name. */
extern char D_FE_00111C28[];
extern char D_FE_00111D00[];
extern char D_FE_00111D08[];
extern char D_FE_00111D18[];

extern int QueryBoolAttribute__C12TiXmlElementPCcPbb(const TiXmlElement *element,
                                                       const char *name,
                                                       unsigned char *value,
                                                       unsigned char fallback);
extern int QueryIntAttribute__C12TiXmlElementPCcPii(const TiXmlElement *element,
                                                     const char *name,
                                                     int *value, int fallback);
extern int QueryFloatAttribute__C12TiXmlElementPCcPff(const TiXmlElement *element,
                                                       const char *name,
                                                       float *value, float fallback);

int RadialBlurCB__11ApeLevelDefP12TiXmlElement(ApeLevelDef *self,
                                                TiXmlElement *element)
{
    ApeLevelDef *def = _11ApeLevelDef$s_lastLevelDef;
    int value;

    if (!def) {
        return 0;
    }

    {
        float fallback = 0.0f;

        QueryBoolAttribute__C12TiXmlElementPCcPbb((const TiXmlElement *)self,
                                                   D_FE_00111C28,
                                                   &def->radialBlurUsed, 0);
        QueryIntAttribute__C12TiXmlElementPCcPii((const TiXmlElement *)self,
                                                 D_FE_00111D00, &value, 0);
        def->radialBlurValue = (unsigned char)value;
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111D08,
                                                   &def->radialBlurRadius,
                                                   fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111D18,
                                                   &def->radialBlurAngle,
                                                   fallback);
        def->radialBlurSet = 1;
    }

    return 1;
}

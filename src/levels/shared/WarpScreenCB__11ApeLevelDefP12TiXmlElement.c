/* WarpScreenCB__11ApeLevelDefP12TiXmlElement -- 268 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlElement TiXmlElement;
typedef struct ApeLevelDef ApeLevelDef;

typedef struct ApeRGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} ApeRGBA;

struct ApeLevelDef {
    char pad_00[0x241];
    unsigned char warpUsed;        /* 0x241 */
    char pad_242[2];
    float warpNear;                /* 0x244 */
    float warpFar;                 /* 0x248 */
    float warpScale;               /* 0x24C */
    float warpTime;                /* 0x250 */
    int warpMode;                  /* 0x254 */
    int warpIndex;                 /* 0x258 */
    ApeRGBA warpColour;            /* 0x25C */
};

extern ApeLevelDef *_11ApeLevelDef$s_lastLevelDef;

/* The XML attribute names of the retail module; they have no exported name. */
extern char D_FE_00111C28[];
extern char D_FE_00111C88[];
extern char D_FE_00111DF0[];
extern char D_FE_00111E00[];
extern char D_FE_00111E10[];
extern char D_FE_00111E20[];
extern char D_FE_00111E30[];
extern char D_FE_00111E40[];

extern ApeRGBA _12ApeRGBAConst$WHITE;

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
extern int QueryRGBAAttribute__C12TiXmlElementPCcP7ApeRGBARC7ApeRGBA(
    const TiXmlElement *element, const char *name, ApeRGBA *value,
    const ApeRGBA *fallback);

int WarpScreenCB__11ApeLevelDefP12TiXmlElement(ApeLevelDef *self,
                                                TiXmlElement *element)
{
    ApeLevelDef *def = _11ApeLevelDef$s_lastLevelDef;

    if (!def) {
        return 0;
    }

    {
        float fallback = 0.0f;

        QueryBoolAttribute__C12TiXmlElementPCcPbb((const TiXmlElement *)self,
                                                   D_FE_00111C28,
                                                   &def->warpUsed, 0);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111DF0,
                                                   &def->warpNear, fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111E00,
                                                   &def->warpFar, fallback);
        QueryIntAttribute__C12TiXmlElementPCcPii((const TiXmlElement *)self,
                                                 D_FE_00111E10, &def->warpMode, 0);
        QueryIntAttribute__C12TiXmlElementPCcPii((const TiXmlElement *)self,
                                                 D_FE_00111E20, &def->warpIndex, 0);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111E30,
                                                   &def->warpScale, fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111E40,
                                                   &def->warpTime, fallback);
        QueryRGBAAttribute__C12TiXmlElementPCcP7ApeRGBARC7ApeRGBA(
            (const TiXmlElement *)self, D_FE_00111C88, &def->warpColour,
            &_12ApeRGBAConst$WHITE);
    }

    return 1;
}

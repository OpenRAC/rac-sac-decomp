/* FogCB__11ApeLevelDefP12TiXmlElement -- 288 bytes.
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
    char pad_00[0x1E0];
    unsigned char fogSet;           /* 0x1E0 */
    unsigned char fogFlags[3];      /* 0x1E1 */
    float fogValues[4];             /* 0x1E4 */
    ApeRGBA fogColours[2];          /* 0x1F4 */
    int fogInts[4];                 /* 0x1FC */
};

extern ApeLevelDef *_11ApeLevelDef$s_lastLevelDef;

/* The XML attribute names of the retail module; they have no exported name. */
extern char D_FE_00111BF8[];
extern char D_FE_00111C00[];
extern char D_FE_00111C08[];
extern char D_FE_00111C20[];
extern char D_FE_00111C28[];
extern char D_FE_00111C30[];

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

int FogCB__11ApeLevelDefP12TiXmlElement(ApeLevelDef *self, TiXmlElement *element)
{
    ApeLevelDef *def = _11ApeLevelDef$s_lastLevelDef;
    int slot;

    if (!def) {
        return 0;
    }

    {
        float fallback = 0.0f;

        slot = 0;
        QueryIntAttribute__C12TiXmlElementPCcPii((const TiXmlElement *)self,
                                                 D_FE_00111C20, &slot, 0);
        QueryBoolAttribute__C12TiXmlElementPCcPbb((const TiXmlElement *)self,
                                                   D_FE_00111C28,
                                                   &def->fogFlags[slot], 0);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111BF8,
                                                   &def->fogValues[slot],
                                                   fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111C00,
                                                   &def->fogValues[slot + 2],
                                                   fallback);
        QueryRGBAAttribute__C12TiXmlElementPCcP7ApeRGBARC7ApeRGBA(
            (const TiXmlElement *)self, D_FE_00111C08, &def->fogColours[slot],
            &_12ApeRGBAConst$WHITE);
        QueryIntAttribute__C12TiXmlElementPCcPii((const TiXmlElement *)self,
                                                 D_FE_00111C30,
                                                 &def->fogInts[slot], 0);
        def->fogSet = 1;
    }

    return 1;
}

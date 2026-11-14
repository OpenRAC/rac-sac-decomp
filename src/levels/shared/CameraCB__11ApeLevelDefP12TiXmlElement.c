/* CameraCB__11ApeLevelDefP12TiXmlElement -- 260 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlElement TiXmlElement;
typedef struct ApeLevelDef ApeLevelDef;

typedef struct AVec3 {
    float x;
    float y;
    float z;
} AVec3;

typedef struct ApeRGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} ApeRGBA;

struct ApeLevelDef {
    char pad_00[0x170];
    unsigned char cameraSet;       /* 0x170 */
    char pad_171[3];
    float cameraX;                 /* 0x174 */
    float cameraY;                 /* 0x178 */
    float cameraZ;                 /* 0x17C */
    ApeRGBA cameraColour;          /* 0x180 */
    char pad_184[12];
    AVec3 cameraTarget;            /* 0x190 */
    char pad_19C[4];
    AVec3 cameraUp;                /* 0x1A0 */
};

extern ApeLevelDef *_11ApeLevelDef$s_lastLevelDef;

/* The XML attribute names of the retail module; they have no exported name. */
extern char D_FE_00111BF0[];
extern char D_FE_00111BF8[];
extern char D_FE_00111C00[];
extern char D_FE_00111C08[];
extern char D_FE_00111C10[];
extern char D_FE_00111C18[];

extern ApeRGBA _12ApeRGBAConst$WHITE;

extern int QueryFloatAttribute__C12TiXmlElementPCcPff(const TiXmlElement *element,
                                                       const char *name,
                                                       float *value, float fallback);
extern int QueryRGBAAttribute__C12TiXmlElementPCcP7ApeRGBARC7ApeRGBA(
    const TiXmlElement *element, const char *name, ApeRGBA *value,
    const ApeRGBA *fallback);
extern int QueryVec3Attribute__C12TiXmlElementPCcP5AVec3RC5AVec3(
    const TiXmlElement *element, const char *name, AVec3 *value,
    const AVec3 *fallback);

int CameraCB__11ApeLevelDefP12TiXmlElement(ApeLevelDef *self,
                                            TiXmlElement *element)
{
    ApeLevelDef *def = _11ApeLevelDef$s_lastLevelDef;
    AVec3 vector;

    if (!def) {
        return 0;
    }

    {
        float fallback = 0.0f;

        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111BF0,
                                                   &def->cameraX, fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111BF8,
                                                   &def->cameraY, fallback);
        QueryFloatAttribute__C12TiXmlElementPCcPff((const TiXmlElement *)self,
                                                   D_FE_00111C00,
                                                   &def->cameraZ, fallback);
        QueryRGBAAttribute__C12TiXmlElementPCcP7ApeRGBARC7ApeRGBA(
            (const TiXmlElement *)self, D_FE_00111C08, &def->cameraColour,
            &_12ApeRGBAConst$WHITE);
        vector.x = 0.0f;
        vector.y = 0.0f;
        vector.z = 1.0f;
        QueryVec3Attribute__C12TiXmlElementPCcP5AVec3RC5AVec3(
            (const TiXmlElement *)self, D_FE_00111C10, &def->cameraTarget, &vector);
        vector.x = 0.0f;
        vector.y = 0.0f;
        vector.z = 0.0f;
        QueryVec3Attribute__C12TiXmlElementPCcP5AVec3RC5AVec3(
            (const TiXmlElement *)self, D_FE_00111C18, &def->cameraUp, &vector);
        def->cameraSet = 1;
    }

    return 1;
}

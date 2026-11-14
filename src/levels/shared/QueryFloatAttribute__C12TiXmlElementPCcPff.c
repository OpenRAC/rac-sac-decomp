/* QueryFloatAttribute__C12TiXmlElementPCcPff -- 208 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlElement TiXmlElement;
typedef int TiXmlBinAttrType;

struct TiXmlElement {
    unsigned char pad00[0x1C];
    int flags;
};

extern const void *Attribute__C12TiXmlElementPCcR16TiXmlBinAttrType(
    TiXmlElement const *self, char const *name, TiXmlBinAttrType *type);
extern int sscanf(char const *text, char const *format, float *value);
extern char D_L01_28E168[];

int QueryFloatAttribute__C12TiXmlElementPCcPff(
    TiXmlElement const *self, char const *name, float *out, float def)
{
    TiXmlBinAttrType type;
    const void *attr;

    if (self->flags & 1) {
        attr = Attribute__C12TiXmlElementPCcR16TiXmlBinAttrType(self, name, &type);
        if (attr) {
            switch (type) {
            case 0:
                if (sscanf((char const *)attr, D_L01_28E168, out) != 1) {
                    *out = def;
                    return 2;
                }
                return 0;
            case 1:
                *out = (float)(*(int const *)attr);
                return 0;
            case 2:
                *out = *(float const *)attr;
                return 0;
            default:
                *out = def;
                return 2;
            }
        }
    }
    *out = def;
    return 1;
}

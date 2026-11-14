/* QueryFloatAttribute__C12TiXmlElementPCcPff -- 208 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads a float attribute of a TiXmlElement into *out and returns a status
 * code. If the element's integer flag at offset 0x1C is clear, *out is set to
 * the default and 1 is returned. Otherwise Attribute(name, &type) is called
 * with a local TiXmlBinAttrType; if the attribute does not exist, *out is set
 * to the default and 1 is returned. Type 0 parses the text with sscanf("%f")
 * and returns 0, or sets the default and returns 2 if parsing fails. Type 1
 * converts the integer value to float, type 2 copies the float value, and any
 * other type sets the default and returns 2. The default float must survive
 * the calls, so it is kept in a callee-saved float register.
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

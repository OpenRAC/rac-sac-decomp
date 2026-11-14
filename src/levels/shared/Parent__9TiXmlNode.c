/* Parent__9TiXmlNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlNode TiXmlNode;

struct TiXmlNode
{
    char pad_00[0x10];
    TiXmlNode *parent;
};

TiXmlNode *Parent__9TiXmlNode(TiXmlNode *self)
{
    return self->parent;
}

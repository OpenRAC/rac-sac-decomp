/* Type__C9TiXmlNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlNode TiXmlNode;

struct TiXmlNode
{
    char pad_00[0x4];
    int type;
};

int Type__C9TiXmlNode(const TiXmlNode *self)
{
    return self->type;
}

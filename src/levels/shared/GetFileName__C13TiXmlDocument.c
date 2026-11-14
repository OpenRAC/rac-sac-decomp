/* GetFileName__C13TiXmlDocument -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlDocument TiXmlDocument;

struct TiXmlDocument
{
    char pad_00[0x34];
    char filename[1];
};

const char *GetFileName__C13TiXmlDocument(const TiXmlDocument *self)
{
    return self->filename;
}

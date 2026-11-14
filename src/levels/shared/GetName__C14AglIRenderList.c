/* GetName__C14AglIRenderList -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglIRenderList AglIRenderList;

struct AglIRenderList
{
    char pad_00[0xC];
    char *name;
};

const char *GetName__C14AglIRenderList(const AglIRenderList *self)
{
    return self->name;
}

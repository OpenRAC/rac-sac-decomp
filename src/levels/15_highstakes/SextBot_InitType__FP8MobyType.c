/* SextBot_InitType__FP8MobyType -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MobyType {
    char pad[0xC];
    int field;
} MobyType;

extern int g;

void SextBot_InitType__FP8MobyType(MobyType *type)
{
    g = type->field;
}

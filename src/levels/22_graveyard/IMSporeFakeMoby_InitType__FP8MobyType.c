/* IMSporeFakeMoby_InitType__FP8MobyType -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MobyType {
    int pad0;
    void *info;
    char pad[0x40];
    unsigned char flag;
} MobyType;

extern int g_imSporeInfo;

void IMSporeFakeMoby_InitType__FP8MobyType(MobyType *type)
{
    type->info = &g_imSporeInfo;
    type->flag = 1;
}

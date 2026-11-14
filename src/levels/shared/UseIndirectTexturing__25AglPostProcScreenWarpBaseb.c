/* UseIndirectTexturing__25AglPostProcScreenWarpBaseb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglPostProcScreenWarpBase AglPostProcScreenWarpBase;

struct AglPostProcScreenWarpBase
{
    char pad_00[0x1650];
    unsigned char useIndirectTexturing;
};

void UseIndirectTexturing__25AglPostProcScreenWarpBaseb(AglPostProcScreenWarpBase *self, unsigned int value)
{
    self->useIndirectTexturing = value;
}

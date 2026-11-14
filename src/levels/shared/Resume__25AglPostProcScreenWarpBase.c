/* Resume__25AglPostProcScreenWarpBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglPostProcScreenWarpBase AglPostProcScreenWarpBase;

struct AglPostProcScreenWarpBase
{
    char pad_00[0x166C];
    unsigned char pause;
};

void Resume__25AglPostProcScreenWarpBase(AglPostProcScreenWarpBase *self)
{
    self->pause = 0;
}

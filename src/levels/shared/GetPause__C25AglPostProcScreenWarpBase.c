/* GetPause__C25AglPostProcScreenWarpBase -- 8 bytes.
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

unsigned int GetPause__C25AglPostProcScreenWarpBase(const AglPostProcScreenWarpBase *self)
{
    return self->pause;
}

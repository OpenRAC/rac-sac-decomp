/* Init__14ControllerWaitPC20ControllerWaitConfigP4MobyPUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;
typedef struct ControllerWaitConfig ControllerWaitConfig;

typedef struct ControllerWait {
    char pad[0xC];
    Moby *moby;
    unsigned char *flag;
    const ControllerWaitConfig *cfg;
} ControllerWait;

void Init__14ControllerWaitPC20ControllerWaitConfigP4MobyPUc(
    ControllerWait *self,
    const ControllerWaitConfig *cfg,
    Moby *moby,
    unsigned char *flag)
{
    self->cfg = cfg;
    self->moby = moby;
    self->flag = flag;
}

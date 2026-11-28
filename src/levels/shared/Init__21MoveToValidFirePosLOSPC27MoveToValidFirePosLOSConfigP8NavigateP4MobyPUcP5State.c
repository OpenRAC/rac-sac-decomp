/* Init__21MoveToValidFirePosLOSPC27MoveToValidFirePosLOSConfigP8NavigateP4MobyPUcP5State -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MoveToValidFirePosLOS {
    char pad[0xC];
    void *nav;
    const void *cfg;
    void *moby;
    unsigned char *mask;
    void *state;
} MoveToValidFirePosLOS;

void Init__21MoveToValidFirePosLOSPC27MoveToValidFirePosLOSConfigP8NavigateP4MobyPUcP5State(
    MoveToValidFirePosLOS *self,
    const void *cfg,
    void *nav,
    void *moby,
    unsigned char *mask,
    void *state)
{
    self->cfg = cfg;
    self->nav = nav;
    self->moby = moby;
    self->mask = mask;
    self->state = state;
}

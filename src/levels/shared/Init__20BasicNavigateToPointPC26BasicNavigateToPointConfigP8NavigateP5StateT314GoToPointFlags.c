/* Init__20BasicNavigateToPointPC26BasicNavigateToPointConfigP8NavigateP5StateT314GoToPointFlags -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BasicNavigateToPoint {
    char pad[0xC];
    const void *cfg;
    void *nav;
    void *state;
    void *extra;
    unsigned int flags;
} BasicNavigateToPoint;

void Init__20BasicNavigateToPointPC26BasicNavigateToPointConfigP8NavigateP5StateT314GoToPointFlags(
    BasicNavigateToPoint *self,
    const void *cfg,
    void *nav,
    void *state,
    void *extra,
    unsigned int flags)
{
    self->cfg = cfg;
    self->nav = nav;
    self->state = state;
    self->extra = extra;
    self->flags = flags;
}

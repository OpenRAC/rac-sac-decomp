/* Init__13HenchbotStuckP5StateP8NavigatePC14NavigateParamsUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HenchbotStuck {
    char pad[0xC];
    void *state;
    void *nav;
    const void *params;
    unsigned int flags;
} HenchbotStuck;

void Init__13HenchbotStuckP5StateP8NavigatePC14NavigateParamsUi(
    HenchbotStuck *self,
    void *state,
    void *nav,
    const void *params,
    unsigned int flags)
{
    self->state = state;
    self->nav = nav;
    self->params = params;
    self->flags = flags;
}

/* Init__16StrafeControllerPC12StrafeConfigP8NavigateP13EnemyBehaviorN23 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct StrafeController {
    unsigned char pad[0xC];
    void *behavior;
    void *arg4;
    void *arg5;
    void *nav;
    unsigned char gap[0x3C - 0x1C];
    const void *config;
} StrafeController;

void Init__16StrafeControllerPC12StrafeConfigP8NavigateP13EnemyBehaviorN23(
    StrafeController *self,
    const void *config,
    void *nav,
    void *behavior,
    void *arg4,
    void *arg5)
{
    self->config = config;
    self->nav = nav;
    self->behavior = behavior;
    self->arg4 = arg4;
    self->arg5 = arg5;
}

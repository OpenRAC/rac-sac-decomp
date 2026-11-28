/* Init__20BasicChaseControlledPC26BasicChaseControlledConfigP8NavigateP11ChaseAction -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Navigate Navigate;
typedef struct ChaseAction ChaseAction;
typedef struct BasicChaseControlledConfig BasicChaseControlledConfig;

typedef struct BasicChaseControlled {
    char pad[0xC];
    Navigate *nav;
    const BasicChaseControlledConfig *cfg;
    ChaseAction *action;
} BasicChaseControlled;

void Init__20BasicChaseControlledPC26BasicChaseControlledConfigP8NavigateP11ChaseAction(
    BasicChaseControlled *self,
    const BasicChaseControlledConfig *cfg,
    Navigate *nav,
    ChaseAction *action)
{
    self->cfg = cfg;
    self->nav = nav;
    self->action = action;
}

/* EnemyController_TypeInit__FP8MobyType -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The type of the enemy moby (0xC0078B95) is stored in a module global.
 */

typedef struct MobyType MobyType;

extern unsigned int D_L14_29557C;

extern unsigned int MOBY_GetType__FUi(unsigned int type_id);

void EnemyController_TypeInit__FP8MobyType(MobyType *type)
{
    (void)type;
    D_L14_29557C = MOBY_GetType__FUi(0xC0078B95);
}

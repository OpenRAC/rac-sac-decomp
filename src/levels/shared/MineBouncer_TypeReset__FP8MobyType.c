/* MineBouncer_TypeReset__FP8MobyType -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BALLPHYSICS_Dispatcher BALLPHYSICS_Dispatcher;
typedef struct MobyType MobyType;

extern BALLPHYSICS_Dispatcher D_L14_3DD410;

extern void BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(
    BALLPHYSICS_Dispatcher *dispatcher);

void MineBouncer_TypeReset__FP8MobyType(MobyType *type)
{
    (void)type;
    BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(&D_L14_3DD410);
}

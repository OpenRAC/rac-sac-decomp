/* CrateHealth_TypeAnimateBegin__FPC8MobyType -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The moby type argument is not used: the crate starts the animation of the
 * single troupe shared by the crates, an anonymous object of the module.
 */

typedef struct CrateShared_Troupe CrateShared_Troupe;
typedef struct MobyType MobyType;

extern CrateShared_Troupe D_L14_3DCA70;

extern void CrateShared_TroupeAnimate__FP18CrateShared_Troupe(
    CrateShared_Troupe *troupe);

void CrateHealth_TypeAnimateBegin__FPC8MobyType(const char *name,
                                                MobyType *type)
{
    (void)name;
    (void)type;
    CrateShared_TroupeAnimate__FP18CrateShared_Troupe(&D_L14_3DCA70);
}

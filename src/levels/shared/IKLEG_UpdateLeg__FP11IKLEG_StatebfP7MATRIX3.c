/* IKLEG_UpdateLeg__FP11IKLEG_StatebfP7MATRIX3 -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Switches an object's mode: enabling runs the acceptance check and picks one
 * of two update helpers, disabling runs the fallback helper when the check
 * passes.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_029548.c.
 */

typedef struct Rec Rec;

extern int IKLEG_EnableManipulators__FP11IKLEG_Stateb(Rec *a0, int a1);
extern int IKLEG_DoCollisions__FP11IKLEG_StateP7MATRIX3(Rec *a0, int a1);
extern void IKLEG_RunFeedbackLoop__FP11IKLEG_Statef(Rec *a0, float k);
extern void IKLEG_ExtendLeg__FP11IKLEG_Statef(Rec *p, float v);
extern void IKLEG_UpdateLegManipulators__FP11IKLEG_State(Rec *a0);

void IKLEG_UpdateLeg__FP11IKLEG_StatebfP7MATRIX3(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        IKLEG_EnableManipulators__FP11IKLEG_Stateb(o, 1);
        if (IKLEG_DoCollisions__FP11IKLEG_StateP7MATRIX3(o, arg) != 0) {
            IKLEG_RunFeedbackLoop__FP11IKLEG_Statef(o, k);
            IKLEG_UpdateLegManipulators__FP11IKLEG_State(o);
        } else {
            IKLEG_ExtendLeg__FP11IKLEG_Statef(o, k);
            IKLEG_UpdateLegManipulators__FP11IKLEG_State(o);
        }
    } else if (IKLEG_EnableManipulators__FP11IKLEG_Stateb(o, 0) == 0) {
        IKLEG_ExtendLeg__FP11IKLEG_Statef(o, k);
        IKLEG_UpdateLegManipulators__FP11IKLEG_State(o);
    }
}

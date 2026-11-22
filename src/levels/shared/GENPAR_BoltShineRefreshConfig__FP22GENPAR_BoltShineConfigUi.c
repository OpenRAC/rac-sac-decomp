/* GENPAR_BoltShineRefreshConfig__FP22GENPAR_BoltShineConfigUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Divide 1.0 by a field of the object and store it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1E2938.c.
 */

typedef struct {
    float divisor;
    char pad[8];
    float result;
} Obj;

void GENPAR_BoltShineRefreshConfig__FP22GENPAR_BoltShineConfigUi(Obj *obj, unsigned int word) {
    obj->result = 1.0f / obj->divisor;
}

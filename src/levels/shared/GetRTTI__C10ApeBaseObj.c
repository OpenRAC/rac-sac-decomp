/* GetRTTI__C10ApeBaseObj -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeBaseObj {
    unsigned short pad;
    unsigned short rtti : 6;
} ApeBaseObj;

int GetRTTI__C10ApeBaseObj(const ApeBaseObj *self)
{
    return self->rtti;
}

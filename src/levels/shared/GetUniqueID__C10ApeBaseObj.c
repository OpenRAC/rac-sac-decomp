/* GetUniqueID__C10ApeBaseObj -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeBaseObj {
    char pad[0x4];
    unsigned uniqueID : 22;
} ApeBaseObj;

int GetUniqueID__C10ApeBaseObj(const ApeBaseObj *self)
{
    return self->uniqueID;
}

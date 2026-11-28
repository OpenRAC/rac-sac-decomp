/* QueryAnimData__C6ApeObj -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    char pad[0xA0];
    void *animMatrix;
} ApeObj;

extern char g_defaultAnimMatrix;

int QueryAnimData__C6ApeObj(ApeObj *self)
{
    return self->animMatrix != &g_defaultAnimMatrix;
}

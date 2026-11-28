/* ReleaseAnimMatrix__6ApeObj -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeObj {
    char pad[0xA0];
    void *animMatrix;
} ApeObj;

extern char g_defaultAnimMatrix;

void ReleaseAnimMatrix__6ApeObj(ApeObj *self)
{
    self->animMatrix = &g_defaultAnimMatrix;
}

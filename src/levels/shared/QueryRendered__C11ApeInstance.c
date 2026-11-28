/* QueryRendered__C11ApeInstance -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    char pad[0x128];
    unsigned int renderedTime;
} ApeInstance;

extern unsigned int g_renderedTime;

int QueryRendered__C11ApeInstance(ApeInstance *self)
{
    return self->renderedTime >= g_renderedTime;
}

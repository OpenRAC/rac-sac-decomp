/* __13AglShaderBase -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_vtbl;

typedef struct AglShaderBase {
    char pad[8];
    int *vtbl;
} AglShaderBase;

AglShaderBase *__13AglShaderBase(AglShaderBase *self)
{
    self->vtbl = &g_vtbl;
    return self;
}

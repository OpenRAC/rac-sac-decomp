/* __19AglShadowVolumeMesh -- 24 bytes. */

typedef struct AglShadowVolumeMesh {
    int verts;
    short count;
    char flag;
    int extra;
} AglShadowVolumeMesh;

AglShadowVolumeMesh *__19AglShadowVolumeMesh(AglShadowVolumeMesh *self)
{
    self->verts = 0;
    self->count = 0;
    self->flag = 0;
    self->extra = 0;
    return self;
}

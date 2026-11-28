/* __15ApeCookedBuffer -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeCookedBuffer {
    int a;
    int b;
    int c;
} ApeCookedBuffer;

ApeCookedBuffer *__15ApeCookedBuffer(ApeCookedBuffer *self)
{
    self->a = 0;
    self->b = 0;
    self->c = 0;
    return self;
}

/* Evaluate__17ApeAnimCompositorf -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimCompositor ApeAnimCompositor;

extern float Evaluate__17ApeAnimCompositorfb(ApeAnimCompositor *self, int flag,
                                              float time);

float Evaluate__17ApeAnimCompositorf(ApeAnimCompositor *self, float time)
{
    return Evaluate__17ApeAnimCompositorfb(self, 0, time);
}

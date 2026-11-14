/* Evaluate__17ApeAnimCompositorf -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The overload without a flag delegates to Evaluate__17ApeAnimCompositorfb
 * with the flag false and the received time (kept in the same float register,
 * never copied).
 */

typedef struct ApeAnimCompositor ApeAnimCompositor;

extern float Evaluate__17ApeAnimCompositorfb(ApeAnimCompositor *self, int flag,
                                              float time);

float Evaluate__17ApeAnimCompositorf(ApeAnimCompositor *self, float time)
{
    return Evaluate__17ApeAnimCompositorfb(self, 0, time);
}

/* AnimTranslator_GetFrameTrans__FP14AnimTranslator -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AnimTranslator AnimTranslator;

void *AnimTranslator_GetFrameTrans__FP14AnimTranslator(AnimTranslator *self)
{
    return (void *)((unsigned char *)self + 0x18);
}

/* DummySkin_TypeInit__FP8MobyType -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument in the global word at 0x27E90.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_002D30.c.
 */

extern char G_pDummySkinType[];

void DummySkin_TypeInit__FP8MobyType(int value)
{
    *(int *)G_pDummySkinType = value;
}

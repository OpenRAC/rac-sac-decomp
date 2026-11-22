/* HUD_DrawTextureSimpleArea__FP10AglTextureP17HUD_BoundingBox16Ui -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the four half-words of the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00ECC0.c.
 */

struct Shorts {
    short f00;
    short p02;
    short f04;
    short p06;
    short f08;
    short p0A;
    short f0C;
};

extern void HUD_DrawTextureSimpleArea__FP10AglTexturessssUi(void *, short, short, short, short, int);

void HUD_DrawTextureSimpleArea__FP10AglTextureP17HUD_BoundingBox16Ui(void *first, struct Shorts *object, int extra)
{
    HUD_DrawTextureSimpleArea__FP10AglTexturessssUi(first, object->f00, object->f04, object->f08, object->f0C,
                extra);
}

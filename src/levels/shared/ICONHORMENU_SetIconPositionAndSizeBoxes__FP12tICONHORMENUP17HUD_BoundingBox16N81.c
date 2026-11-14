/* ICONHORMENU_SetIconPositionAndSizeBoxes__FP12tICONHORMENUP17HUD_BoundingBox16N81 -- 524 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HUD_BoundingBox {
    int x0;
    int y0;
    int x1;
    int y1;
} __attribute__((packed)) HUD_BoundingBox;

typedef struct tICONHORMENU {
    unsigned char pad[0x38];
    HUD_BoundingBox b0;
    HUD_BoundingBox b1;
    HUD_BoundingBox b2;
    HUD_BoundingBox b3;
    HUD_BoundingBox b4;
    HUD_BoundingBox b5;
    HUD_BoundingBox b6;
    HUD_BoundingBox b7;
    HUD_BoundingBox b8;
} __attribute__((packed)) tICONHORMENU;

void ICONHORMENU_SetIconPositionAndSizeBoxes__FP12tICONHORMENUP17HUD_BoundingBox16N81(
    tICONHORMENU *menu,
    HUD_BoundingBox *b0,
    HUD_BoundingBox *b1,
    HUD_BoundingBox *b2,
    HUD_BoundingBox *b3,
    HUD_BoundingBox *b4,
    HUD_BoundingBox *b5,
    HUD_BoundingBox *b6,
    HUD_BoundingBox *b7,
    HUD_BoundingBox *b8,
    int u1,
    int u2,
    int u3,
    int u4,
    int u5,
    int u6)
{
    HUD_BoundingBox zero;

    (void)u1;
    (void)u2;
    (void)u3;
    (void)u4;
    (void)u5;
    (void)u6;

    menu->b0 = *b0;
    if (b1 == 0)
        menu->b8 = *b0;
    else
        menu->b8 = *b1;

    zero.x0 = 0;
    zero.x1 = 0;
    zero.y0 = 0;
    zero.y1 = 0;

    menu->b1 = zero;
    menu->b2 = zero;
    menu->b3 = zero;

    if (b2)
        menu->b1 = *b2;
    if (b3)
        menu->b2 = *b3;
    if (b4)
        menu->b3 = *b4;
    if (b5)
        menu->b4 = *b5;
    if (b6)
        menu->b5 = *b6;
    if (b7)
        menu->b6 = *b7;
    if (b8)
        menu->b7 = *b8;
}

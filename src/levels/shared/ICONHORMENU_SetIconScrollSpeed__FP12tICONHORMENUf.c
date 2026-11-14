/* ICONHORMENU_SetIconScrollSpeed__FP12tICONHORMENUf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float scroll speed in the menu.
 */

typedef struct tICONHORMENU tICONHORMENU;

struct tICONHORMENU {
    unsigned int reserved_000[9];
    float icon_scroll_speed;
};

void ICONHORMENU_SetIconScrollSpeed__FP12tICONHORMENUf(tICONHORMENU *self,
                                                      float speed)
{
    self->icon_scroll_speed = speed;
}

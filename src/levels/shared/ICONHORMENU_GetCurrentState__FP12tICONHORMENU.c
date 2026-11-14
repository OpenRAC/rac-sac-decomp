/* ICONHORMENU_GetCurrentState__FP12tICONHORMENU -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the current state field of the menu.
 */

typedef struct tICONHORMENU tICONHORMENU;

struct tICONHORMENU {
    unsigned int reserved_000[50];
    unsigned int current_state;
};

unsigned int ICONHORMENU_GetCurrentState__FP12tICONHORMENU(tICONHORMENU *self)
{
    unsigned int state;

    state = self->current_state;
    return state;
}

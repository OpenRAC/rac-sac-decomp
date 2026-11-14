/* ICONMENU_GetCurrentState__FP9tICONMENU -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tICONMENU {
    char pad[0x50];
    int current_state;
} tICONMENU;

int ICONMENU_GetCurrentState__FP9tICONMENU(tICONMENU *self)
{
    return self->current_state;
}

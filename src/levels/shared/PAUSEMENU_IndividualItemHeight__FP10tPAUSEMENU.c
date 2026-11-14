/* PAUSEMENU_IndividualItemHeight__FP10tPAUSEMENU -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tPAUSEMENU {
    char pad[0x48];
    int height;
} tPAUSEMENU;

int PAUSEMENU_IndividualItemHeight__FP10tPAUSEMENU(tPAUSEMENU *self)
{
    return self->height + 0x10;
}

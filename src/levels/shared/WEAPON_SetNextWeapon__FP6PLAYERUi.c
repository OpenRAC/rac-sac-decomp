/* WEAPON_SetNextWeapon__FP6PLAYERUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void WEAPON_SetNextWeapon__FP6PLAYERUi(char *self, unsigned int next)
{
    if (*(unsigned int *)(self + 0x344) != next) {
        *(unsigned int *)(self + 0x364) = next;
    }
}

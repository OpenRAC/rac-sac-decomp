/* SCRNCHEATS_Exit__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int uint;

extern void HUDSOUND_Play__F9eHUDSOUND(uint sound);

void SCRNCHEATS_Exit__Fv(void)
{
    HUDSOUND_Play__F9eHUDSOUND(7);
}

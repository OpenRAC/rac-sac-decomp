/* SOUND_IsHandleValid__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int SOUND_IsHandleValid__FUi(unsigned int h)
{
    return (unsigned int)(h - 1) < 0x40;
}

/* HUDGENHEALTHBAR_Hide__FUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Terminates the head-up health bar; the bar identifier is forwarded untouched
 * to HUDGENHEALTHBAR_Terminate.
 */

typedef unsigned int uint;

extern void HUDGENHEALTHBAR_Terminate__FUi(uint param);

void HUDGENHEALTHBAR_Hide__FUi(uint param)
{
    HUDGENHEALTHBAR_Terminate__FUi(param);
}

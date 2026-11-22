/* HUD_DrawTriangle__FssssssUifff -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards seven packed arguments to the shared worker, halving the 16-bit
 * fields.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_09F600.c.
 */

void HUD_DrawTriangle__FssUissUissUifff();

void HUD_DrawTriangle__FssssssUifff(int a0, int a1, int a2, int a3, int t0, int t1, int t2)
{
    HUD_DrawTriangle__FssUissUissUifff((short)a0, (short)a1, t2, (short)a2, (short)a3, t2, (short)t0, (short)t1, t2);
}

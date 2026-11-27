/* Countess_EnableAnimSounds__Fb -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g_countessAnimSounds;

void Countess_EnableAnimSounds__Fb(int enable)
{
    g_countessAnimSounds = enable ^ 1;
}

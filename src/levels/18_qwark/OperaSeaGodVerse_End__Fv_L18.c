/* OperaSeaGodVerse_End__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct OperaMoby {
    char pad[0x45];
    unsigned char state;
} OperaMoby;

extern OperaMoby *g_seaGodVerse;

void OperaSeaGodVerse_End__Fv(void)
{
    g_seaGodVerse->state = 3;
}

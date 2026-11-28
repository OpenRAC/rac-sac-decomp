/* ArenaMolotovManager_ReleaseTrigger__FP4Mobyi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x58];
    unsigned char *vars;
} Moby;

void ArenaMolotovManager_ReleaseTrigger__FP4Mobyi(Moby *moby, int index)
{
    moby->vars[index] = 1;
}

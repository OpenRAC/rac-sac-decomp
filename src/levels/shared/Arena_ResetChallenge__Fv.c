/* Arena_ResetChallenge__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ArenaChallenge {
    char pad[0x38];
    unsigned char inChallenge;
    unsigned char flag;
} ArenaChallenge;

extern ArenaChallenge D_L01_002541B8;

void Arena_ResetChallenge__Fv(void)
{
    ArenaChallenge *p = &D_L01_002541B8;

    p->flag = 1;
    p->inChallenge = 1;
}

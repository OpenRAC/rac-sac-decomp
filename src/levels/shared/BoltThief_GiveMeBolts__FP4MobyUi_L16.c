/* BoltThief_GiveMeBolts__FP4MobyUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[0xC0];
    unsigned int bolts;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void BoltThief_GiveMeBolts__FP4MobyUi(Moby *moby, unsigned int count)
{
    Vars *vars;

    vars = moby->vars;
    vars->bolts += count;
}

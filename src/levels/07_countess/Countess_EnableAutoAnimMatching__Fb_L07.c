/* Countess_EnableAutoAnimMatching__Fb -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CountessVars {
    char pad[0xC8];
    unsigned char autoAnimMatching;
} CountessVars;

typedef struct Moby {
    char pad[0x58];
    CountessVars *vars;
} Moby;

extern Moby *g_countess;

void Countess_EnableAutoAnimMatching__Fb(int enable)
{
    CountessVars *vars;

    vars = g_countess->vars;
    vars->autoAnimMatching = enable;
}

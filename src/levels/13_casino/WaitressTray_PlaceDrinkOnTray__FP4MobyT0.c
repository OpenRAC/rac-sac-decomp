/* WaitressTray_PlaceDrinkOnTray__FP4MobyT0 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TrayVars {
    void *slots[1];
    unsigned char pad[0x11 - 4];
    unsigned char index;
} TrayVars;

typedef struct Moby {
    unsigned char pad[0x58];
    TrayVars *vars;
} Moby;

void WaitressTray_PlaceDrinkOnTray__FP4MobyT0(Moby *tray, Moby *drink)
{
    unsigned char *vars;

    vars = (unsigned char *)tray->vars;
    *(Moby **)(vars + (vars[0x11] << 2)) = drink;
}

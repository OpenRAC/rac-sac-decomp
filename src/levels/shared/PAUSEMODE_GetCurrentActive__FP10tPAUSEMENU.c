/* PAUSEMODE_GetCurrentActive__FP10tPAUSEMENU -- 24 bytes. */

typedef struct tPAUSEMENU {
    int *items;
    int pad;
    int current;
} tPAUSEMENU;

int PAUSEMODE_GetCurrentActive__FP10tPAUSEMENU(tPAUSEMENU *menu)
{
    return menu->items[menu->current];
}

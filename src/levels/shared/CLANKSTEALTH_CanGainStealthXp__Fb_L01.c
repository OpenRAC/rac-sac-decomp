/* CLANKSTEALTH_CanGainStealthXp__Fb -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char D_L01_0026B5E9;

int CLANKSTEALTH_CanGainStealthXp__Fb(int a0)
{
    int old;

    old = D_L01_0026B5E9;
    D_L01_0026B5E9 = a0;
    return old;
}

/* ACTOR_Animate__Fv -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09FA48.c.
 */

extern int D_L01_0031F560[];

void ACTOR_Animate__Fv(void)
{
    int *node = (int *)(unsigned int)D_L01_0031F560[8];
    while (node != &D_L01_0031F560[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}

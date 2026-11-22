/* PowerupHealth_CheckPlayerStatus__FP4MobyP6PLAYER -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when a helper accepts the second object and the squared distance
 * between the two objects' positions is below nine, otherwise 0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_19D278.c.
 */

extern int PLAYER_CanHeal__FP6PLAYER(char *a0);

int PowerupHealth_CheckPlayerStatus__FP4MobyP6PLAYER(char *a0, char *a1)
{
    float *pa;
    float *pb;
    float dx;
    float dy;
    float dz;
    int r;

    r = 0;
    if (PLAYER_CanHeal__FP6PLAYER(a1) != 0) {
        pa = (float *)(a0 + 0x30);
        pb = (float *)(a1 + 0x30);
        dx = pb[0] - pa[0];
        dy = pb[1] - pa[1];
        dz = pb[2] - pa[2];
        if (dx * dx + dy * dy + dz * dz < 9.0f) {
            r = 1;
        }
    }
    return r;
}

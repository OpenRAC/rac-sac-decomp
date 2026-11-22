/* PLAYER_AutoAim__FP6PLAYERP4VEC3PC7MATRIX4PC4VEC3fbPC20PLAYER_AutoAimConfig -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04CC60.c.
 */

extern void PLAYER_AutoAim__FP6PLAYERiPP4MobyP4VEC3PC7MATRIX4PC4VEC3fbPC20PLAYER_AutoAimConfig(long long, int, int *, long long, long long, long long, long long, long long);

int PLAYER_AutoAim__FP6PLAYERP4VEC3PC7MATRIX4PC4VEC3fbPC20PLAYER_AutoAimConfig(long long a, long long b, long long c, long long d, long long e, long long f)
{
    int output[4];
    output[0] = 0;
    PLAYER_AutoAim__FP6PLAYERiPP4MobyP4VEC3PC7MATRIX4PC4VEC3fbPC20PLAYER_AutoAimConfig(a, 1, output, b, c, d, e, f);
    return output[0];
}

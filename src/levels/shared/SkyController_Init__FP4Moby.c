/* SkyController_Init__FP4Moby -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a random angle in [0, 2*pi) into the second float of the object's
 * record and returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_18BD60.c.
 */

extern int rand(void);

int SkyController_Init__FP4Moby(char *object)
{
    float *angles = *(float **)(object + 0x54);

    angles[1] = (float)rand() * 4.656613e-10f * 6.2831855f;
    return 1;
}

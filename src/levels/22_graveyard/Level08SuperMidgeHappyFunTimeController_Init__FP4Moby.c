/* Level08SuperMidgeHappyFunTimeController_Init__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x45];
    unsigned char b45;
    unsigned char b46;
} Moby;

int Level08SuperMidgeHappyFunTimeController_Init__FP4Moby(Moby *self)
{
    self->b45 = 0;
    self->b46 = 0;
    return 1;
}

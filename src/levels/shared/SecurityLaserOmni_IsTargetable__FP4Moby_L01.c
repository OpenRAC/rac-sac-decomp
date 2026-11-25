/* SecurityLaserOmni_IsTargetable__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the byte at offset 0x46 equals 1.
 */

typedef struct State {
    char pad[0x46];
    unsigned char field;
} State;

int SecurityLaserOmni_IsTargetable__FP4Moby(State *self)
{
    return self->field == 1;
}

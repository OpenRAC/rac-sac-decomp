/* DGInit__24Doppleganger_GetHitMajorb18MobyDamageStrengthUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Doppleganger_GetHitMajor {
    char pad[0x18];
    unsigned char hit;
    char gap[3];
    int strength;
    unsigned int value;
} Doppleganger_GetHitMajor;

void DGInit__24Doppleganger_GetHitMajorb18MobyDamageStrengthUi(
    Doppleganger_GetHitMajor *self,
    int hit,
    int strength,
    unsigned int value)
{
    self->hit = hit;
    self->strength = strength;
    self->value = value;
}

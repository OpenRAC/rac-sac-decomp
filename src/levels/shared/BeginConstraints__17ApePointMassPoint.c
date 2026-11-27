/* BeginConstraints__17ApePointMassPoint -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI), aligned(16)));

typedef struct ApePointMassPoint {
    char pad[0x20];
    AVec3 pos;
    AVec3 saved;
    char pad2[0x5C - 0x40];
    float invMass;
    float savedMass;
} ApePointMassPoint;

void BeginConstraints__17ApePointMassPoint(ApePointMassPoint *self)
{
    self->saved = self->pos;
    self->savedMass = self->invMass;
}

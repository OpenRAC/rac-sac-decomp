/* Initialize__33ApePointMassFreezePointConstraint -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI), aligned(16)));

typedef struct ApePointMass {
    char pad[0x20];
    AVec3 pos;
} ApePointMass;

typedef struct ApePointMassFreezePointConstraint {
    char pad[0x10];
    AVec3 frozen;
    ApePointMass *mass;
} ApePointMassFreezePointConstraint;

void Initialize__33ApePointMassFreezePointConstraint(
    ApePointMassFreezePointConstraint *self)
{
    self->frozen = self->mass->pos;
}

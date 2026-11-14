/* Begin__17KnucklesKnockback -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the byte at offset 0x38 of the state.
 */

typedef struct KnucklesKnockback {
    char pad[0x38];
    unsigned char field;
} KnucklesKnockback;

void Begin__17KnucklesKnockback(KnucklesKnockback *self)
{
    self->field = 0;
}

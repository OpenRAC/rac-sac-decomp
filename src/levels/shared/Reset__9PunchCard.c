/* Reset__9PunchCard -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0x20 of the object.
 */

typedef struct PunchCard {
    char pad[0x20];
    int field;
} PunchCard;

void Reset__9PunchCard(PunchCard *self)
{
    self->field = 0;
}

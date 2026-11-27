/* ResetLoading__6ApePVS -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApePVS {
    char pad[0x10];
    unsigned char saved;
    unsigned char loading;
} ApePVS;

void ResetLoading__6ApePVS(ApePVS *self)
{
    self->loading = self->saved;
}

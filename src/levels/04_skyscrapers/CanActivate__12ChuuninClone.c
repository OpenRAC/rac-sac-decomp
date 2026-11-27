/* CanActivate__12ChuuninClone -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ChuuninClone {
    char pad[0x18];
    char field;
} ChuuninClone;

int CanActivate__12ChuuninClone(ChuuninClone *self)
{
    return self->field > 0;
}

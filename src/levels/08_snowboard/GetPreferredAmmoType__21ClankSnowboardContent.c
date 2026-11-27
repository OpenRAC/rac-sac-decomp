/* GetPreferredAmmoType__21ClankSnowboardContent -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ClankSnowboardContent {
    char pad[0x170];
    int ammoKind;
} ClankSnowboardContent;

int GetPreferredAmmoType__21ClankSnowboardContent(ClankSnowboardContent *this)
{
    return (this->ammoKind ^ 8) ? 0 : 2;
}

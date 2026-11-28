/* Timestep__11Expat_Snipef -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Expat_Snipe {
    char pad[0x11];
    unsigned char count;
} Expat_Snipe;

void Timestep__11Expat_Snipef(Expat_Snipe *this)
{
    if (this->count != 0)
        this->count -= 1;
}

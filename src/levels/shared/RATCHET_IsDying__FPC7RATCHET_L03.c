/* RATCHET_IsDying__FPC7RATCHET -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct RATCHET {
    char pad[0xAB4];
    unsigned short state;
} RATCHET;

int RATCHET_IsDying__FPC7RATCHET(const RATCHET *self)
{
    return (unsigned)(self->state - 0x22) < 0xB;
}

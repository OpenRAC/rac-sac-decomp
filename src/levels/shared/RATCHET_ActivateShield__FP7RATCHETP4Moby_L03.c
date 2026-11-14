/* RATCHET_ActivateShield__FP7RATCHETP4Moby -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The write sits in the delay slot of the return: the value of the parameter
 * is the last operation produced.
 */

typedef struct RATCHET RATCHET;
typedef struct Moby Moby;

struct RATCHET {
    unsigned char reserved_000[0xB98];
    Moby *shield;
};

void RATCHET_ActivateShield__FP7RATCHETP4Moby(RATCHET *self, Moby *shield)
{
    self->shield = shield;
}

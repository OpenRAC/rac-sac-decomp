/* RATCHET_GetState__FP7RATCHET_L03 -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct RATCHET {
    char pad[0xAB4];
    short state;
} RATCHET;

short RATCHET_GetState__FP7RATCHET(const RATCHET *self)
{
    return self->state;
}

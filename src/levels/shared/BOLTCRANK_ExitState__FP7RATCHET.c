/* BOLTCRANK_ExitState__FP7RATCHET -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct RATCHET {
    char pad[0xB58];
    void *a;
    char pad2[0x20];
    void *b;
    void *c;
} RATCHET;

void BOLTCRANK_ExitState__FP7RATCHET(RATCHET *self)
{
    self->a = 0;
    self->c = 0;
    self->b = 0;
}

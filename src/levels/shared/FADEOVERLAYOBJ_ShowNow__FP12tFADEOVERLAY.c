/* FADEOVERLAYOBJ_ShowNow__FP12tFADEOVERLAY -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word and stores a constant in another.
 */

typedef struct State {
    char pad[0x8];
    int stored;
    char gap[0x4];
    int cleared;
} State;

void FADEOVERLAYOBJ_ShowNow__FP12tFADEOVERLAY(State *self)
{
    self->cleared = 0;
    self->stored = 255;
}

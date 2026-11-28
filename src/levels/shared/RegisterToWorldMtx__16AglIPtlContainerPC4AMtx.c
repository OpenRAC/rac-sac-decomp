/* RegisterToWorldMtx__16AglIPtlContainerPC4AMtx -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the matrix pointer and copies its translation row when present.
 */

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct AMtx {
    char pad[0x30];
    u128 row3;
} AMtx;

typedef struct State {
    char pad[0x14];
    const AMtx *mtx;
    char pad18[8];
    u128 cached;
} State;

void RegisterToWorldMtx__16AglIPtlContainerPC4AMtx(
    State *self, const AMtx *mtx)
{
    self->mtx = mtx;
    if (mtx != 0)
        self->cached = mtx->row3;
}

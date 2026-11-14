/* FADEOVERLAYOBJ_IsIdle__FP12tFADEOVERLAY -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY {
    int pad[2];
    int f8;
} tFADEOVERLAY;

int FADEOVERLAYOBJ_IsIdle__FP12tFADEOVERLAY(tFADEOVERLAY *self)
{
    return self->f8 == 0;
}

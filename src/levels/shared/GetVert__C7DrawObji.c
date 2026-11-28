/* GetVert__C7DrawObji -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawVert {
    char data[32];
} DrawVert;

typedef struct DrawObj {
    DrawVert *verts;
} DrawObj;

DrawVert *GetVert__C7DrawObji(const DrawObj *self, int i)
{
    return self->verts + i;
}

/* Get2DDrawObj__14DrawObjManageri -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObj {
    char pad[0x24];
} DrawObj;

typedef struct DrawObjManager {
    char pad[0xB408];
    DrawObj objs[1];
} DrawObjManager;

DrawObj *Get2DDrawObj__14DrawObjManageri(DrawObjManager *this, int i)
{
    return &this->objs[i];
}

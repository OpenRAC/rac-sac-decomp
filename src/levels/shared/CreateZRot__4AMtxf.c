/* CreateZRot__4AMtxf -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AMtx AMtx;
typedef struct AVec3 AVec3;

extern const AVec3 D_FE_229670;          /* _10AVec3Const$UNIT_Z */

extern void MtxFromAxisAngle__5AMathR4AMtxRC5AVec3f(AMtx *self, const AVec3 *axis,
                                                     float angle);

AMtx *CreateZRot__4AMtxf(AMtx *self, float angle)
{
    MtxFromAxisAngle__5AMathR4AMtxRC5AVec3f(self, &D_FE_229670, angle);

    return self;
}

/* DRAW_GetSlicedCylinderVertexCount__Fii -- 24 bytes. */

int DRAW_GetSlicedCylinderVertexCount__Fii(int slices, int stacks)
{
    return (stacks + 1) * (slices * 2 + 1) + 1;
}

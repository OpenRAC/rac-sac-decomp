/* SetUserData__15ApeFreeListNodeUiUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void SetUserData__15ApeFreeListNodeUiUi(void *self, unsigned int data, unsigned int i)
{
    *(unsigned int *)((char *)self + (i << 2) + 8) = data;
}

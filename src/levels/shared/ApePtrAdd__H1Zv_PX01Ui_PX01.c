/* ApePtrAdd__H1Zv_PX01Ui_PX01 -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Template pointer arithmetic: T* + unsigned int, with T = void here.
 */

void *ApePtrAdd__H1Zv_PX01Ui_PX01(void *ptr, unsigned int offset)
{
    return (void *)((unsigned int)ptr + offset);
}

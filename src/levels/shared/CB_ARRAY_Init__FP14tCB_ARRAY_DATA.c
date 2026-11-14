/* CB_ARRAY_Init__FP14tCB_ARRAY_DATA -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tCB_ARRAY_DATA tCB_ARRAY_DATA;

extern void *memset(void *dst, int value, unsigned int count);

void CB_ARRAY_Init__FP14tCB_ARRAY_DATA(tCB_ARRAY_DATA *data)
{
    memset(data, 0, 0x84);
}

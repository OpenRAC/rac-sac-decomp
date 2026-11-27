/* SCUS_976.23 0x00178590 -- 20 bytes.
 *
 * (p[0] - p[1]) >> 4. srl, so unsigned.
 */

unsigned int func_00178590(unsigned int *p)
{
    return (p[0] - p[1]) >> 4;
}

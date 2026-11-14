/* Line_SetWidth__FP10Line_Groupf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The float store sits in the delay slot of the return.
 */

typedef struct tICONMENU {
    unsigned int reserved_00;
    unsigned int reserved_04;
    unsigned int reserved_08;
    unsigned int reserved_0C;
    unsigned int reserved_10;
    unsigned int reserved_14;
    unsigned int reserved_18;
    float scrollSpeed; /* +0x1C */
} tICONMENU;

void Line_SetWidth__FP10Line_Groupf(tICONMENU *self, float speed)
{
    self->scrollSpeed = speed;
}

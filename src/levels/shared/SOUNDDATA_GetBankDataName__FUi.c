/* SOUNDDATA_GetBankDataName__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Bank {
    char pad[0x50];
} Bank;

extern Bank D_FE_00141C88[];

Bank *SOUNDDATA_GetBankDataName__FUi(unsigned int index)
{
    return &D_FE_00141C88[index];
}

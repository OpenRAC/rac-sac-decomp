/* GetBase__11ApeMemStack -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeMemStack ApeMemStack;

struct ApeMemStack
{
    char pad_00[0x8];
    int base;
};

int GetBase__11ApeMemStack(ApeMemStack *self)
{
    return self->base;
}

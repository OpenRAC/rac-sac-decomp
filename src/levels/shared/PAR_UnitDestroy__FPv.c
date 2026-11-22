/* PAR_UnitDestroy__FPv -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/ENGINE/par/PAR_UnitDestroy__FPv_LEVEL_01.c.
 */

typedef struct Node Node;
typedef struct Holder Holder;

extern Holder D_L01_003223F0;
extern void func_L01_07CF88(Holder *list, Node *element);

void PAR_UnitDestroy__FPv(int *address)
{
    int *node = address - 8;
    int *element = (int *)node[1];
    element[2] = (int)node;
    *(int *)(node[2] + 12) = node[3];
    *(int *)(node[3] + 8) = node[2];
    node[2] = (int)node;
    node[3] = (int)node;
    *(int *)(element[0] + 4) = element[1];
    *(int *)element[1] = element[0];
    func_L01_07CF88(&D_L01_003223F0, (Node *)element);
}

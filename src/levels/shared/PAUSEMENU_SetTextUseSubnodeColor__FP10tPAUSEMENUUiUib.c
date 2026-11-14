/* PAUSEMENU_SetTextUseSubnodeColor__FP10tPAUSEMENUUiUib -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tPAUSEMENU_Node tPAUSEMENU_Node;
typedef struct tPAUSEMENU tPAUSEMENU;

struct tPAUSEMENU_Node {
    unsigned char pad0[0x24];
    unsigned char useSubnodeColor;
    unsigned char pad1[11];
};

struct tPAUSEMENU {
    tPAUSEMENU_Node **nodes;
    unsigned int count;
};

int PAUSEMENU_SetTextUseSubnodeColor__FP10tPAUSEMENUUiUib(tPAUSEMENU *self, unsigned int index,
                                      unsigned int subnode, int useSubnodeColor)
{
    tPAUSEMENU_Node *node;
    if (index >= self->count)
        return 0;
    node = self->nodes[index];
    node = node + subnode;
    node->useSubnodeColor = useSubnodeColor;
    return 1;
}

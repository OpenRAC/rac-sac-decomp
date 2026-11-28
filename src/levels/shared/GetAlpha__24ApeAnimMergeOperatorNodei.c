/* GetAlpha__24ApeAnimMergeOperatorNodei -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimMergeOperatorNode {
    char pad[0x28];
    float *values;
} ApeAnimMergeOperatorNode;

float GetAlpha__24ApeAnimMergeOperatorNodei(ApeAnimMergeOperatorNode *self, int index)
{
    float *slot = &self->values[index];
    return *slot;
}

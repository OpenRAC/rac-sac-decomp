/* SetRotChannel__20APEGDE_BoneComponentP14ApeAnimChannel -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the channel at offset 0, or zero when it is absent.
 */

typedef struct State {
    void *slot;
} State;

void SetRotChannel__20APEGDE_BoneComponentP14ApeAnimChannel(
    State *self, void *channel)
{
    if (channel)
        self->slot = channel;
    else
        self->slot = 0;
}

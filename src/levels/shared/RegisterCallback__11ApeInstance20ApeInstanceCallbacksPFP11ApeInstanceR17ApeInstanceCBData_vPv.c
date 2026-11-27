/* RegisterCallback__11ApeInstance20ApeInstanceCallbacksPFP11ApeInstanceR17ApeInstanceCBData_vPv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeInstance {
    char pad[0x140];
    void *cb;
    void *user;
} ApeInstance;

void RegisterCallback__11ApeInstance20ApeInstanceCallbacksPFP11ApeInstanceR17ApeInstanceCBData_vPv(
    ApeInstance *this, int type, void *fn, void *user)
{
    (void)type;
    this->cb = fn;
    this->user = user;
}

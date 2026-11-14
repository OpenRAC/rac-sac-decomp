/* Add__19AglShaderProfileMgrR16AglShaderProfile -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef void AglShaderProfile;

extern void Append__t9ApeTArray1ZP16AglShaderProfileRCP16AglShaderProfile(
    void *list, AglShaderProfile *const *elem);
extern void *_19AglShaderProfileMgr$s_profileList;

void Add__19AglShaderProfileMgrR16AglShaderProfile(void *self,
                                                    AglShaderProfile const *profile)
{
    AglShaderProfile *entry = (AglShaderProfile *)self;

    Append__t9ApeTArray1ZP16AglShaderProfileRCP16AglShaderProfile(
        &_19AglShaderProfileMgr$s_profileList, &entry);
}

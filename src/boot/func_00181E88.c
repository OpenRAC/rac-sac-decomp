/* func_00181E88 -- 128 bytes.
 *
 * A function of the boot executable at 0x00181E88; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_00181E20;
extern int g_boot_0028E3D0;
extern int g_boot_0020E0F0;
extern int g_boot_002044E0;

typedef struct Boot_00181E88_Record
{
    int          pad_000;
    void        *field_004;
    void        *field_008;
    int          field_00C;
    void        *field_010;
    int          field_014;
    int          pad_018[2];
    void        *field_020;
} Boot_00181E88_Record;

int func_190B60(Boot_00181E88_Record *record);
void func_191EA0(void *object, int flag);

int func_00181E88(void)
{
    Boot_00181E88_Record record;
    int result;

    record.field_004 = &g_boot_00181E20;
    record.field_008 = &g_boot_0028E3D0;
    record.field_00C = 0x800;
    record.field_010 = &g_boot_0020E0F0;
    record.field_014 = 0;
    record.field_020 = &g_boot_002044E0;
    result = func_190B60(&record);
    if (result < 0)
        return -1;
    func_191EA0(result, 0);
    return result;
}

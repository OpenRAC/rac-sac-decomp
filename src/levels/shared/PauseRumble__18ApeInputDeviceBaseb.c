/* PauseRumble__18ApeInputDeviceBaseb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeInputDeviceBase {
    char pad[0x90];
    unsigned char rumble;
} ApeInputDeviceBase;

void PauseRumble__18ApeInputDeviceBaseb(ApeInputDeviceBase *this, int paused)
{
    this->rumble = paused ^ 1;
}

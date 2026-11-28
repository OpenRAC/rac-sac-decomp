/* FE.REL 0x000A3FB8, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * The stores and advanced pointer are plausible, but the compiler reverses
 * the retail register flow. Reopen with a source form that preserves it.
 */

char *StopRumble__18ApeInputDeviceBase21ApeEInputRumbleMotors(char *self, int motor)
{
    self += motor * 4;
    *(int *)(self + 0x80) = 0;
    *(int *)(self + 0x88) = 0;
    return self;
}

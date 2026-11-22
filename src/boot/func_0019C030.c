/* func_0019C030 -- 112 bytes.
 *
 * A function of the boot executable at 0x0019C030; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body TimerUSec2BusClock.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/TimerUSec2BusClock.c.
 */

/* func_0019C030 -- converts a seconds/microseconds pair to bus clock ticks (bus clock rate 0x08CA0000 per second). */
unsigned long long func_0019C030(unsigned int sec, unsigned int usec) {
    return (unsigned long long)sec * 0x08CA0000u + (unsigned long long)usec * 0x08CA0000u / 1000000u;
}

/* SNDSTREAM_SetAmbientVolume__Ff -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_035A10.c.
 */

extern void SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE(int value);

void SNDSTREAM_SetAmbientVolume__Ff(void) {
    SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE(1);
}

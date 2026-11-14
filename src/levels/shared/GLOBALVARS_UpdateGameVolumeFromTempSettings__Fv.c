/* GLOBALVARS_UpdateGameVolumeFromTempSettings__Fv -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The two volumes live in the GLOBALVARS structure as integers (0..255) and
 * are divided by 255 to become the 0..1 floats the sound system expects; they
 * are passed to SOUND_SetGlobalVolume and SNDSTREAM_SetGlobalVolume (stream
 * type 0). The 255.0f constant is live across the first call, so it is saved
 * in the frame.
 */

typedef struct GLOBALVARS GLOBALVARS;

struct GLOBALVARS {
    int pad_00[7];
    int musicVolume;                /* 0x1C */
    int fxVolume;                   /* 0x20 */
};

extern GLOBALVARS *pGV;

extern void SOUND_SetGlobalVolume__Ff(float volume);
extern void SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE(float volume,
                                                       int streamType);

void GLOBALVARS_UpdateGameVolumeFromTempSettings__Fv(void)
{
    SOUND_SetGlobalVolume__Ff((float)pGV->fxVolume / 255.0f);
    SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE((float)pGV->musicVolume / 255.0f,
                                                0);
}

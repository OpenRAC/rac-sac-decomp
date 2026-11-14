/* GLOBALVARS_UpdateGameVolumeFromTempSettings__Fv -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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

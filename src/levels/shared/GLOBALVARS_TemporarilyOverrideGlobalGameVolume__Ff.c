/* GLOBALVARS_TemporarilyOverrideGlobalGameVolume__Ff -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The two volumes of the GLOBALVARS structure (integers, 0..255) are divided
 * by 255 and multiplied by the given factor, then passed to
 * SOUND_SetGlobalVolume and SNDSTREAM_SetGlobalVolume (stream type 0). A
 * global state word is then set to 5. The multiplier lives across the two
 * calls, so it is kept in a callee-saved float register.
 */

typedef struct GLOBALVARS GLOBALVARS;

struct GLOBALVARS {
    int pad_00[7];
    int musicVolume;                /* 0x1C */
    int fxVolume;                   /* 0x20 */
};

extern GLOBALVARS *pGV;

/* The retail module keeps this word next to pGV; it has no exported name. */
extern int D_FE_000F04DC;

extern void SOUND_SetGlobalVolume__Ff(float volume);
extern void SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE(float volume,
                                                       int streamType);

void GLOBALVARS_TemporarilyOverrideGlobalGameVolume__Ff(float volume)
{
    SOUND_SetGlobalVolume__Ff((float)pGV->fxVolume / 255.0f * volume);
    SNDSTREAM_SetGlobalVolume__Ff11STREAM_TYPE((float)pGV->musicVolume
                                                / 255.0f * volume, 0);
    D_FE_000F04DC = 5;
}

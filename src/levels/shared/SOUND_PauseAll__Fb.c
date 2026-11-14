/* SOUND_PauseAll__Fb -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The FMOD system exposes 64 channels; the function pauses all 64 existing
 * channels and then records the global flag.
 */

typedef struct FMOD_System FMOD_System;
typedef struct FMOD_Channel FMOD_Channel;

extern FMOD_System *SOUND_GetSystem__Fv(void);
extern void getChannel__Q24FMOD6SystemiPPQ24FMOD7Channel(FMOD_System *system,
                                                        int index,
                                                        FMOD_Channel **channel);
extern int setPaused__Q24FMOD7Channelb(FMOD_Channel *channel, int paused);

extern char g_sound_pause_all;

void SOUND_PauseAll__Fb(int pause)
{
    FMOD_System *system = SOUND_GetSystem__Fv();
    int index;

    if (system) {
        for (index = 0; index < 64; index++) {
            FMOD_Channel *channel;

            getChannel__Q24FMOD6SystemiPPQ24FMOD7Channel(system, index, &channel);
            setPaused__Q24FMOD7Channelb(channel, pause);
        }
    }

    g_sound_pause_all = (char)pause;
}

/* GU_CameraHint__FPC4VEC3PifP6PLAYER -- 200 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The hint is only given when the camera has not been moved for five frames;
 * the hint counter is decremented at each call. When no player is given, the
 * game's global player is used. If that player is in first-person mode, first
 * person is exited and camera control is disabled, then the secondary camera
 * target is set to the point with the hint value and the negated field of
 * view.
 *
 * The hint value lives across the calls, so it is kept in a callee-saved float
 * register.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct PLAYER PLAYER;

extern int CAMDRIVER_GetFramesSinceInput__Fv(void);
extern int FIRSTPERSON_IsActive__FP6PLAYER(PLAYER *player);
extern void FIRSTPERSON_ExitState__FP6PLAYERb(PLAYER *player, int state);
extern void CAMDRIVER_EnableControl__Fb(int enable);
extern float CAMERA_GetFov__Fv(void);
extern void CAMDRIVER_SetSecondaryTarget__FPC4VEC3ffb(VEC3 *pos, float a,
                                                       float b, int c);

/* The player of the game; the module reads it at 0x280730. */
extern PLAYER *pPlayer;

int GU_CameraHint__FPC4VEC3PifP6PLAYER(VEC3 *camPos, int *counter, float value,
                                        PLAYER *player)
{
    int frames;
    float fov;

    if (counter != 0) {
        if (*counter < 0)
            return 1;
    }

    frames = CAMDRIVER_GetFramesSinceInput__Fv();
    if (frames < 5)
        return 0;

    if (player == 0)
        player = pPlayer;

    if (FIRSTPERSON_IsActive__FP6PLAYER(player))
        FIRSTPERSON_ExitState__FP6PLAYERb(player, 0);

    CAMDRIVER_EnableControl__Fb(0);
    fov = CAMERA_GetFov__Fv();
    CAMDRIVER_SetSecondaryTarget__FPC4VEC3ffb(camPos, value, -fov, 1);

    if (counter != 0)
        *counter = *counter - 1;

    return 0;
}

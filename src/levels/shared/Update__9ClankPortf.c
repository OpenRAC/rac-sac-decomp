/* Update__9ClankPortf -- 272 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The port state has two steps: the first pulls the player back to the port
 * when the state timer (offset 0x10 of the state) expires, the second
 * teleports him away (Teleport_Spawn, controller context 2, player shown
 * again). The float zero used by the state lives across the calls, so it is
 * kept in a callee-saved float register.
 */

typedef struct ClankPort ClankPort;
typedef struct PortHolder PortHolder;
typedef struct PortState PortState;
typedef struct Player Player;
typedef struct Moby Moby;
typedef struct VEC3 VEC3;
typedef struct TeleportConfig TeleportConfig;

struct VEC3 {
    float x;
    float y;
    float z;
};

struct PortState {
    VEC3 pos;
    int state;
    float timer;
};

struct PortHolder {
    char pad_00[0xC];
    PortState *f_0C;
};

struct ClankPort {
    char pad_00[4];
    PortHolder *f_04;
};

struct Player {
    char pad_00[0xAC];
    float f_AC;
    float f_B0;
    float f_B4;
    char pad_B8[0x1A8];
    Moby *f_260;
};

extern Player *g_pActivePlayer;

/* The teleport configuration the port uses has no exported name. */
extern TeleportConfig D_L01_002AB428;

extern void PLAYER_ShowPlayerAll__Fb(int show);
extern void PLAYER_SetPosition__FPC4VEC3(VEC3 *position);
extern void Teleport_Spawn__FP4MobyPC14TeleportConfig(Moby *moby,
                                                      TeleportConfig *config);
extern void CONTROLLER_SetActiveContext__FUi(unsigned int context);

void Update__9ClankPortf(ClankPort *self, float dt)
{
    PortState *port = self->f_04->f_0C;
    int state = port->state;

    switch (state) {
    case 0:
        {
            float v = port->timer - dt;

            port->timer = v;
            if (v < 0.1f) {
                PLAYER_ShowPlayerAll__Fb(0);
            }
            if (port->timer <= 0.0f) {
                PLAYER_SetPosition__FPC4VEC3(&port->pos);
                {
                    float *vel = &g_pActivePlayer->f_AC;

                    vel[0] = 0.0f;
                    vel[1] = 0.0f;
                    vel[2] = 0.0f;
                }
                port->state = 1;
                port->timer = 0.5f;
            }
        }
        break;

    case 1:
        {
            float v = port->timer - dt;

            port->timer = v;
            if (v <= 0.0f) {
                Teleport_Spawn__FP4MobyPC14TeleportConfig(
                    g_pActivePlayer->f_260, &D_L01_002AB428);
                CONTROLLER_SetActiveContext__FUi(2);
                PLAYER_ShowPlayerAll__Fb(1);
                port->state = 2;
            }
        }
        break;

    default:
        break;
    }
}

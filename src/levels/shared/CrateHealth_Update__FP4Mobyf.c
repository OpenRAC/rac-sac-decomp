/* CrateHealth_Update__FP4Mobyf -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Creates the object's data block when it is missing, then copies the two
 * float blocks into it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/17_multiplayer_02/LEVEL_17_138420.c.
 */

typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 f;
    Vec2 g;
} Pair;

typedef struct {
    char pad[0x30];
    Pair p;
} Data;

typedef struct {
    char pad[0x10];
    Data *data;
} Node;

typedef struct {
    char pad[0x30];
    Pair p;
    char pad40[0x14];
    Node *node;
} Obj;

extern void *g_pPowerupHealthType;

Data *PowerupShared_Spawn__FPC8MobyTypeUiPC7MATRIX4(void *x, int flag, Obj *o);
void PowerupHealth_SetParent__FP4MobyT0(Data *d, Obj *o);
void CrateHealth_ResetWindows__FP4Moby(Obj *o);

void CrateHealth_Update__FP4Mobyf(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = PowerupShared_Spawn__FPC8MobyTypeUiPC7MATRIX4(g_pPowerupHealthType, 0, o);
        PowerupHealth_SetParent__FP4MobyT0(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    CrateHealth_ResetWindows__FP4Moby(o);
}

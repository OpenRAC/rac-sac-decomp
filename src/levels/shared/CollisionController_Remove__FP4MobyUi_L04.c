/* CollisionController_Remove__FP4MobyUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Slot {
    int field;
    char pad[0x14];
} Slot;

typedef struct Vars {
    Slot slots[1];
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void CollisionController_Remove__FP4MobyUi(Moby *moby, unsigned int index)
{
    moby->vars->slots[index].field = 0;
}

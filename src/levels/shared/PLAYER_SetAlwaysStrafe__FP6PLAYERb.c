typedef struct Player {
    char pad[624];
    int flags;
} Player;

void PLAYER_SetAlwaysStrafe__FP6PLAYERb(Player *self, int enabled)
{
    self->flags = (self->flags & -3) | ((enabled & 1) << 1);
}

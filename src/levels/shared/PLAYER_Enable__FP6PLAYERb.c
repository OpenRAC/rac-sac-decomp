typedef struct Player {
    char pad[616];
    int flags;
} Player;

void PLAYER_Enable__FP6PLAYERb(Player *self, int enabled)
{
    self->flags = (self->flags & -5) | ((enabled & 1) << 2);
}

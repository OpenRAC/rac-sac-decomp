/* GetNameHash__C6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the name hash field of the object.
 */

typedef struct tICONHORMENU tICONHORMENU;

struct tICONHORMENU {
    unsigned int reserved_000[50];
    unsigned int current_state;
};

unsigned int GetNameHash__C6ApeObj(tICONHORMENU *self)
{
    unsigned int state;

    state = self->current_state;
    return state;
}

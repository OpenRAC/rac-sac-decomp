/* IsActive__18BasicActivatedIdle -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int IsActive__18BasicActivatedIdle(char *self)
{
    unsigned char *flag;

    flag = *(unsigned char **)(*(char **)(self + 4) + 0xC);
    return *flag != 0;
}

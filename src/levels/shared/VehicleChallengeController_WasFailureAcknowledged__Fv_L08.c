/* VehicleChallengeController_WasFailureAcknowledged__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g;

int VehicleChallengeController_WasFailureAcknowledged__Fv(void)
{
    return g ^ 1;
}

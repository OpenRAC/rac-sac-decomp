/* __26MCPI_MutexIsPowerUpTracker -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MCPI_MutexIsPowerUpTracker {
    char pad[4];
    unsigned char field;
} MCPI_MutexIsPowerUpTracker;

MCPI_MutexIsPowerUpTracker *__26MCPI_MutexIsPowerUpTracker(
    MCPI_MutexIsPowerUpTracker *this)
{
    MCPI_MutexIsPowerUpTracker *r = this;
    this->field = 0;
    return r;
}

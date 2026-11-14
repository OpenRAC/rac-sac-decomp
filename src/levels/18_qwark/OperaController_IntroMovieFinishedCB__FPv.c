/* OperaController_IntroMovieFinishedCB__FPv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the byte at offset 0x45 of the object (the "intro movie finished"
 * flag).
 */

typedef struct OperaController {
    unsigned char field_00[0x45];
    unsigned char intro_movie_finished;
} OperaController;

void OperaController_IntroMovieFinishedCB__FPv(void *self)
{
    ((OperaController *)self)->intro_movie_finished = 0;
}

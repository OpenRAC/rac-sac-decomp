/* Start__14CrossbowAttack -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CrossbowVec {
    int x;
    int y;
} CrossbowVec;

typedef struct CrossbowMid {
    char pad[0xC];
    CrossbowVec *vec;
} CrossbowMid;

typedef struct CrossbowAttack {
    int pad;
    CrossbowMid *mid;
} CrossbowAttack;

void Start__14CrossbowAttack(CrossbowAttack *this)
{
    CrossbowVec *vec;

    vec = this->mid->vec;
    vec->x = 0;
    vec->y = 0;
}

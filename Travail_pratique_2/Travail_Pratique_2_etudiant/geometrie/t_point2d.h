/****************************************************************************/
/*							COMMANDES PREPROCESSEUR							*/
/****************************************************************************/

#define __MODULE_POINTS_R3__ 


/****************************************************************************/
/*							DEFINITIONS DES TYPES							*/
/****************************************************************************/
// Pointeur d'un ptr_R3 - pointeur vers un point dans l'espace.
typedef struct t_point2d* ptr_point2d;


/****************************************************************************/
/*							DEFINITIONS DES FONCTIONS						*/
/****************************************************************************/

ptr_point2d initialiser_point(double x, double y);
double getX(const ptr_point2d p);
double getY(const ptr_point2d p);
void R3_setX(ptr_point2d p, double val_X);
void R3_setY(ptr_point2d p, double val_Y);
int point_sur_la_meme_ligne(ptr_point2d p1, ptr_point2d p2);
int point_sur_la_meme_colonne(ptr_point2d p1, ptr_point2d p2);
double distance_entre_points(ptr_point2d p1, ptr_point2d p2);
int points_sont_identiques(const ptr_point2d p1, const ptr_point2d p2);
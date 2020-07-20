/*******************************************************************************
   Ce module impl�mente les sous-programmes pour charger les points 
   correspondant aux sites d'un diagramme de Voronoi � dessiner et pour 
   l'affichage du diagramme et d'un chemin.

   Par		: Pierre B�lisle
   R�vision : Francis Bourdeau
   R�vision E20  : David Beaulieu - Encapsulation des mod�lisations

*******************************************************************************/
#ifndef __M_INTERFACE__
#define __M_INTERFACE__


#include "t_erreur.h"
#include "t_graphe.h"
#include "t_liste.h"

/*******************************************************************************
                          DEFINITIONS DE TYPES ET DE CONSTANTES                 
*******************************************************************************/

// Constantes pour la gestion de l'affichage.
#define COULEUR_SITE    YELLOW
#define COULEUR_LIGNE   WHITE

// La couleur des segments du chemin dans le graphe.
#define COULEUR_CHEMIN  GREEN

/*******************************************************************************
                            DECLARATIONS DE FONCTIONS                           
*******************************************************************************/
/*
    CHARGER_GRAPHE
    
    Cette fonction charge les donnees du fichier dans le graphe re�u.

    Param�tres :
        ptr_graphe [sortie] : Le graphe dans lequels les sites lues seront
                              ajout�es.

    Retour :
        En cas de succes, elle retourne SUCCES, sinon elle retourne une des
        code d'erreurs de l'enum t_erreur.
*/
t_erreur charger_graphe(ptr_graphe graphe, const char* nom_fichier);


/*
    AFFICHER_GRAPHE
   
    Fonction qui affiche le diagramme de voronoi associe au graphe.

    Param�tres :
        - ptr_graphe [entr�e] : Le graphe a afficher.

    Retour :
        Aucune.
*/
void afficher_graphe(ptr_graphe graphe);

#endif

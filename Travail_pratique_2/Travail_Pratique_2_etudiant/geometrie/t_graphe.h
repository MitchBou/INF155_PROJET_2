/*****************************************************************************
Par			: Frederick Henri
Adaptation	: Francis Bourdeau
R�vision	: Pierre B�lisle
R�vision E20  : David Beaulieu - Encapsulation de la structure
Compl�t� par : VOTRE NOM ICI

Ce module impl�mente un graphe permettant de generer un diagramme de
voronoi.	

*****************************************************************************/
#ifndef __T_GRAPHE__
#define __T_GRAPHE__

#include "t_point2d.h"
#include "t_segment.h"

#include "t_liste.h"
#include "t_erreur.h"

/************************************************************************
                          DEFINITIONS DE TYPES ET DE CONSTANTES                      
*************************************************************************/



/***************************************************************************/
/*								DECLARATIONS DE FONCTIONS			   	   */
/***************************************************************************/




/*
	Fonction qui permet d'�crire l'�tat d'un graphe dans un fichier texte
	Cette fonction est utile pour d�buger votre travail.

	PARAMETRES :
		- ptr_graphe : Le graphe ou l'on ajoute le point.
 */
void imprimer_graphe(ptr_graphe un_graphe);

#endif
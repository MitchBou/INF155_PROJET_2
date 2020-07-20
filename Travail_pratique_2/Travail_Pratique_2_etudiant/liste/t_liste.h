/*****************************************************************************
  Cr�ation : Francis Bourdeau
  R�vision : David Beaulieu  (Encapsulation de la structure)
  Fichier  : liste.h

  Ce module contient des fonctions utilitaires permettant de manipuler une
  liste doublement chain�e g�n�rique. Ceci implique que le contenu d'un
  element est n�cessairement un pointeur g�n�rique (void*).

  Les services offerts sont les suivants:

      - creer_liste				: Permet de cr�er une nouelle liste vide.
      - detruire_liste			: Permet de d�truire tous les elements de la 
								  liste et la liste elle-m�me.

      - ajouter_debut           : Permet d'ajouter un �l�ment en t�te de liste.
	  - ajouter_fin				: Permet d'ajouter un �l�ment en queue de liste.
	  - ajouter_ieme_position	: Permet d'ajouter un �l�ment � la position 
								  voulue dans la liste.

	  - consulter_ieme_position	: Permet de r�cup�rer l'�l�ment � la position 
								  voulue.

	  - obtenir_nb_elements		: D�termine le nombre d'�l�ments dans la liste.

	  - retirer_debut           : Permet de retirer un �l�ment en t�te de liste.
	  - retirer_fin				: Permet de retirer un �l�ment en queue de liste.
	  - retirer_ieme_position	: Permet de retirer un �l�ment � la position 
								  voulue dans la liste.

*******************************************************************************/
#ifndef __INF155_LISTE_STATIQUE__
#define __INF155_LISTE_STATIQUE__



/******************************************************************************/
/*                  DEFINITIONS DE TYPES ET DE CONSTANTES                     */
/******************************************************************************/

//
//Cette liste g�n�rique peut contenir l'adresse de n'importe quel objet.
//
typedef struct t_liste* ptr_liste;


/******************************************************************************/
/*                  D�CLARATION DES FONCTIONS PUBLIQUES                       */
/******************************************************************************/
/*
 *  CREER_LISTE
 *
 *  Cette fonction permet d'allouer la m�moire d'une liste et de l'initialiser comme
 *  �tant vide.
 *
 *
 *  Param�tres:
 *      - capacite : Le nombre d'�l�ment pouvant �tre conserv�e dans la liste.
 *
 *  Retour :
 *      - Le pointeur vers la nouvelle liste
 */
ptr_liste creer_liste(int capacite);



/*
 *  DETRUIRE_LISTE
 *
 *  Cette fonction lib�re la m�moire de tous les elements d'une liste et
 *  lib�re la liste elle-m�me.
 *
 *  Param�tres:
 *      - une_liste : la liste � supprimer.
 *
 *  Retour :
 *      - Aucun
 */
void detruire_liste(ptr_liste une_liste);


/*
 *  OBTENIR_NB_ELEMENTS
 *
 *  Cette fonction retourne le nombre d'�l�ments utilis�es dans la liste.
 *
 *  Param�tres:
 *      - une_liste : la liste � consulter.
 *
 *  Retour :
 *      - Aucun
 */
int obtenir_nb_elements(ptr_liste une_liste);



/*
 *  AJOUTER_DEBUT
 *
 *  Cette fonction ajoute un element au d�but de la liste.
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on ajoute un element.
 *      - element   : le contenu conserv� dans le nouveau element.
 *
 *  Retour :
 *      - Aucun
 */
void ajouter_debut(ptr_liste une_liste, void* element);


/*
 *  AJOUTER_FIN
 *
 *  Cette fonction ajoute un element en fin de la liste.
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on ajoute un element.
 *      - element   : le contenu conserv� dans le nouveau element.
 *
 *  Retour :
 *      - Aucun
 */
void ajouter_fin(ptr_liste une_liste, void* element);


/*
 *  AJOUTER_IEME_POSITION
 *
 *  Cette fonction ajoute un element dans la liste � la position d�sir�e
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on ajoute un element.
 *      - element   : le contenu conserv� dans le nouveau element.
 *		- position  : la position o� ajouter le nouvel �lement.
 *
 *  Retour :
 *      - Aucun
 */
void ajouter_ieme_position(ptr_liste une_liste, void* element, int position);


/*
 *  CONSULTER_IEME_POSITION
 *
 *  Cette fonction retourne l'element dans la liste � la position d�sir�e
 *  sans le retir�.
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on ajoute un element.
 *		- position  : la position o� ajouter le nouvel �lement.
 *
 *  Retour :
 *      - L'adresse pointant sur l'�l�ment consult�e.
 */
void* consulter_ieme_element(ptr_liste une_liste, int position);



/*
 *  RETIRER_DEBUT
 *
 *  Cette fonction retirer un element au d�but de la liste.
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on retire un element.
 *
 *  Retour :
 *      - le contenu conserv� dans l'element retir�.
 */
void* retirer_debut(ptr_liste une_liste);


/*
 *  RETIRER_FIN
 *
 *  Cette fonction retirer un element en fin de la liste.
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on retire un element.
 *
 *  Retour :
 *      - le contenu conserv� dans l'element retir�.
 */
void* retirer_fin(ptr_liste une_liste);


/*
 *  RETIRER_IEME_POSITION
 *
 *  Cette fonction retire un element dans la liste � la position d�sir�e
 *
 *  Param�tres:
 *      - une_liste : la liste dans laquelle on retirer un element.
 *		- position  : la position o� ajouter le nouvel �lement.
 *
 *  Retour :
 *      - le contenu conserv� dans l'element retir�.
 */
void* retirer_ieme_position(ptr_liste une_liste, int position);


#endif

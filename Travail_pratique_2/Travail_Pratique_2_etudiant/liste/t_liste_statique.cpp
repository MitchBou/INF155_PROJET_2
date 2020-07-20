/*
 *  Cr�ation : Francis Bourdeau
 *  Fichier  : liste.c
 *
 *
 *  Ce module contient des fonctions utilitaires permettant de manipuler une
 *  liste g�n�rique. Ceci implique que le contenu d'un �l�ment est n�cessairement un 
 *  pointeur g�n�rique (void*).
 *
 */
#include "t_liste.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/******************************************************************************/
/*                  DEFINITIONS DE TYPES ET DE CONSTANTES                     */
/******************************************************************************/

// Une case non-utilis�e.
#define CASE_VIDE  NULL

struct t_liste {
	int		nb_donnees;
	int		capacite;
	void** donnee;
};

/******************************************************************************/
/*                  D�CLARATION DES FONCTIONS PRIV�ES                         */
/******************************************************************************/

//
// Permet de d�caller les �l�ments du tableau lors de l'ajout ou le retrait d'un
// �l�ment.
//
static void decaller_droite(ptr_liste une_liste, int indice_depart);
static void decaller_gauche(ptr_liste une_liste, int indice_depart, int indice_fin);



/******************************************************************************/
/*          IMPL�MENTATIONS DES FONCTIONS PUBLIQUES ET PRIV�ES                */
/******************************************************************************/

//
// Cette fonction permet d'allouer la m�moire d'une liste et de l'initialiser comme
// �tant vide.
//
ptr_liste creer_liste(int capacite)
{
	// On cr�e la liste
	ptr_liste nouvelle_liste = (ptr_liste) malloc(sizeof(struct t_liste));
    if(nouvelle_liste != NULL)
    {
    
		// On cr�e le tableau de donn�es
		nouvelle_liste->donnee = (void**) malloc(capacite * sizeof(void*));
        if( nouvelle_liste->donnee != NULL)
        {
            nouvelle_liste->capacite    = capacite;
            nouvelle_liste->nb_donnees  = 0;
			memset(nouvelle_liste->donnee, CASE_VIDE, capacite * sizeof(void*));
        }
    }
    return nouvelle_liste;
}


//
// Cette fonction lib�re la m�moire de tous les elements d'une liste et
// lib�re la liste elle - m�me.
//
void detruire_liste(ptr_liste une_liste)
{
    free(une_liste->donnee);
    free(une_liste);
}

//
// Cette fonction retourne le nombre d'�l�ments utilis�es dans la liste.
//
int obtenir_nb_elements(ptr_liste une_liste)
{
	return une_liste->nb_donnees;
}



//
// Cette fonction ajoute un element au d�but de la liste.
//
void ajouter_debut(ptr_liste une_liste, void* element)
{
	//On v�rifie s'il y a sufisament d'espace dans la liste.
    if(une_liste->nb_donnees < une_liste->capacite)
    {
		//On cr�e une case libre pour le nouvel element.
        decaller_droite(une_liste, 0);

		//On ajoute le nouvel element.
        une_liste->donnee[0] = element;
        une_liste->nb_donnees++;
    }
}

//
// Cette fonction ajoute un element en fin de la liste.
//
void ajouter_fin(ptr_liste une_liste, void* element)
{
	//On v�rifie s'il y a sufisament d'espace dans la liste.
    if(une_liste->nb_donnees < une_liste->capacite)
    {
		//On ajoute le nouvel element.
        une_liste->donnee[une_liste->nb_donnees] = element;
        une_liste->nb_donnees++;
    }
}

// 
// Cette fonction ajoute un element dans la liste � la position d�sir�e
// 
void ajouter_ieme_position(ptr_liste une_liste, void* element, int position)
{
	//On v�rifie s'il y a sufisament d'espace dans la liste.
    if(une_liste->nb_donnees < une_liste->capacite && 
       0 <= position && position <= une_liste->nb_donnees)
    {
		//On cr�e une case libre pour le nouvel element.
        decaller_droite(une_liste, position);

		//On ajoute le nouvel element.
        une_liste->donnee[position] = element;
        une_liste->nb_donnees++;
    }
}


//
// Cette fonction retourne l'element dans la liste � la position d�sir�e
// sans le retir�.
//
void* consulter_ieme_element(ptr_liste une_liste, int position)
{
	return une_liste->donnee[position];
}


//
// Cette fonction retirer un element au d�but de la liste.
//
void* retirer_debut(ptr_liste une_liste)
{
    void* element = une_liste->donnee[0];
    decaller_gauche(une_liste, 1, une_liste->nb_donnees-1);
    une_liste->nb_donnees--;

    return element;
}



//
// Cette fonction retirer un element en fin de la liste.
//
void* retirer_fin(ptr_liste une_liste)
{
    int indice_fin;
	void* element;

    indice_fin = une_liste->nb_donnees - 1;
    element = une_liste->donnee[indice_fin];

    une_liste->donnee[indice_fin] = CASE_VIDE;
    une_liste->nb_donnees--;

    return element;
}


//
// Cette fonction retirer un element � la position voulue.
//
void* retirer_ieme_position(ptr_liste une_liste, int position)
{
	void* element = une_liste->donnee[position];
    decaller_gauche(une_liste, position + 1, une_liste->nb_donnees-1);
    une_liste->nb_donnees--;
    return element;
}



//
// Permet de d�caller les �l�ments du tableau lors de l'ajout ou le retrait d'un
// �l�ment.
//
static void decaller_droite(ptr_liste une_liste, int indice_depart)
{
    int i_ecriture;
    int i_lecture;
    for(i_ecriture = une_liste->nb_donnees; i_ecriture >= indice_depart + 1; i_ecriture--)
    {
        i_lecture = i_ecriture - 1;
        une_liste->donnee[i_ecriture] = une_liste->donnee[i_lecture];
    }
}

static void decaller_gauche(ptr_liste une_liste, int indice_depart, int indice_fin)
{
    int i_ecriture;
    int i_lecture;
    for(i_lecture = indice_depart; i_lecture <= une_liste->nb_donnees - 1; i_lecture++)
    {
        i_ecriture = i_lecture - 1;
        une_liste->donnee[i_ecriture] = une_liste->donnee[i_lecture];
    }

    une_liste->donnee[indice_fin] = CASE_VIDE;
}


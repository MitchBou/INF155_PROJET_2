/****************************************************************************************
  Par		: Francis Bourdeau
  R�vision	: Pierre B�lisle
 
  Ce module impl�mente des codes d'erreurs afin d'�tre utilis�s comme 
  valeur de retour.

****************************************************************************************/
#ifndef __T_ERREUR__
#define __T_ERREUR__


/****************************************************************************************
                            DEFINITION DE TYPES ET CONSTANTES                            
****************************************************************************************/

// Les erreurs d�tect�es par l'application et les messages affich�s � 
// l'utilisateur.
typedef enum 
{
    SUCCES,
    ERREUR_OUVERTURE_FICHIER,
    ERREUR_ALLOCATION_MEMOIRE,
    ERREUR_GRAPHIQUE,
} t_erreur;


const char * const MESSAGES_ERREURS[] =
{   "",
    "Impossible d'ouvrir le fichier.",
    "Manque de memoire.",
    "Impossible de passer en mode graphique.\n" 
};


#endif

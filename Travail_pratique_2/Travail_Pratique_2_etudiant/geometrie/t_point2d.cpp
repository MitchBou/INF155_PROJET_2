/*****************************************************************************
	Par        :	David Beaulieu et Hugues Saulnier
	Revise le  :	juin 2020
	Fichier    :	R3.c
	Objectifs  :	Librairie qui permet de modéliser un point dans l'espace
	Note	   :	NA
*****************************************************************************/

/****************************************************************************/
/*							COMMANDES PREPROCESSEUR							*/
/****************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#include"t_point2d.h"

/****************************************************************************/
/*							DEFINITIONS DES CONSTANTES						*/
/****************************************************************************/

/****************************************************************************/
/*							DEFINITIONS DES TYPES							*/
/****************************************************************************/
// Un t_R3 a classiquement trois composantes en rectangulaire
// qui représente un point dans l'espace
struct t_point2d
{
	double x;
	double y;
};

/****************************************************************************/
/*							DECLARATION DES FONCTIONS PRIVÉES				*/
/****************************************************************************/

/****************************************************************************/
/*							DÉFINITION DES FONCTIONS PUBLIQUES				*/
/****************************************************************************/

/*
	NOM	:			t_point2d
	DEF :			Fonction constructeur qui permet de créer un nouveau point
					Selon les valeurs donnée en paramètre
	PARAMETRES :	Aucun
	RETOUR :		l'adresse du point créer
	SPÉCIFICATION :
*/
ptr_point2d initialiser_point(double x, double y)
{

	// Allocation mémoire de la structure.
	ptr_point2d point = (ptr_point2d)malloc(sizeof(struct t_point2d));

	point->x = x;
	point->y = y;

	return point;
}


//consulter la valeur de la coordonnée X du point reçu.
double getX(const ptr_point2d p)
{
	return	p->x;
}

//consulter la valeur de la coordonnée Y du point reçu.
double getY(const ptr_point2d p)
{
	return p->y;
}

/* sous-programme public de type mutateur qui permet de modifier la valeur de la coordonnée X du
point reçu.*/
void R3_setX(ptr_point2d p, double val_X)
{
	p->x = val_X;
}

/*Ce sous-programme public de type mutateur qui permet de modifier la valeur de la coordonnée Y du
point reçu.*/
void R3_setY(ptr_point2d p, double val_Y)
{
	p->y = val_Y;
}

//Ce sous-programme public détermine si deux points sont alignés sur une même ligne horizontale.
int point_sur_la_meme_ligne(const ptr_point2d p1, const ptr_point2d p2)
{
	if (fabs(p1->y - p2->y) < 0.00001)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Ce sous-programme public détermine si deux points sont alignés sur une même ligne verticale.
int point_sur_la_meme_colonne(const ptr_point2d p1, const ptr_point2d p2)
{
	if (fabs(p1->x - p2->x) < 0.00001)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Ce sous - programme public calcule la distance entre deux points.
double distance_entre_points(const ptr_point2d p1, const ptr_point2d p2)
{
	double distance;
	double deltaX_carree;
	double deltaY_carree;

	deltaX_carree = (p2->x - p1->x) * (p2->x - p1->x);
	deltaY_carree = (p2->y - p1->y) * (p2->y - p1->y);
	distance = sqrt(deltaX_carree + deltaY_carree);

	return distance;
}
//Ce sous-programme public détermine si deux points sont considérés comme étant identiques.
int points_sont_identiques(const ptr_point2d p1, const ptr_point2d p2)
{
	if (fabs(p1->y - p2->y) < 0.00001)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

double distance_entre_points(const ptr_point2d p1, const ptr_point2d p2)
{
	double pente;
	double deltaX;
	double deltaY;

	deltaX = ;
	deltaY = ;
	pente = deltaX / deltaY;

	return pente;
}


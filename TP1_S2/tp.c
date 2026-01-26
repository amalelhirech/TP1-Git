#include <stdio.h>
#include "tp.h"
#include <string.h>


void lectureDonnees()
{
    int nb_rangees;
    int nb_tables_par_rangee;
    char nom_fichier[50];

    printf("Entrez nb rangee : ");
    scanf("%d", &nb_rangees);
    printf("\n");
    printf("Entrez nb table par rangee : ");
    scanf("%d", &nb_tables_par_rangee);
    printf("\n");
    printf("Entrez le chemin du fichier texte (il doit etre au meme niveau que l'exe): ");
    scanf("%s",&nom_fichier);
    printf("\n");
    printf("fichier : %s\n",nom_fichier);

    FILE * fichier = fopen(nom_fichier, "r");
}
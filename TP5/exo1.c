#include "exo1.h"
#include <stdio.h>


void afficher_menu()
{
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter");

}

int lire_choix ()
{
    int choix;
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

}
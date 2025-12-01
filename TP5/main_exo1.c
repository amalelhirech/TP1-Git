#include "exo1.h"
#include <stdio.h>


int main()
{
    int conso[7];
    initialiser(conso);

    afficher_menu();
    int choix = lire_choix();

    ajouterConsommation(conso);
    

    return 0;
}
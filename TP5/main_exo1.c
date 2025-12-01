#include "exo1.h"
#include <stdio.h>


int main()
{
    int conso[7];
    initialiser(conso);

    int quitter = 0;
    while (!quitter) {
        afficher_menu();
        int choix = lire_choix();

        if (choix == 1) {
            ajouterConsommation(conso);
        }
        else if (choix == 2) {
            afficheResume(conso);
        }

    }

    return 0;
}
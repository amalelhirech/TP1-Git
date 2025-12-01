#include "exo1.h"
#include <windows.h>   
#include <locale.h>
#include <stdio.h>



int main()
{
    utf8();
    int conso[7];
    int objectifs[7] = {8, 0, 0, 0, 5, 3, 2};

    if (charger(conso) == 0) {
        printf("Aucune sauvegarde trouvée, initialisation...\n");
        initialiser(conso);
    }


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
        else if (choix == 3) {
            afficherObjectifsEtScore(objectifs, conso);
        }
        else if (choix == 4) {
            if (sauvegarder(conso)) {
                printf("Sauvegarde réussie dans consommation.txt\n");
            } else {
                printf("Erreur lors de la sauvegarde.\n");
            }
            quitter = 1;
        }

        else 
        {
            printf("Choix invalide.\n");

        }
    }
    return 0;
}
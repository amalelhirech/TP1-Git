#include <stdio.h>
#include "tp.h"
#include <string.h>
#include <stdlib.h>

void lectureDonnees()
{
    int nb_rangees;
    int nb_tables_par_rangee;
    char nom_fichier[50];
    struct Eleve eleve[20];
    char nom[128], prenom[128];
    char line[256];
    int n = 0;

    printf("Entrez nb rangee : ");
    scanf("%d", &nb_rangees);
    printf("\n");
    printf("Entrez nb table par rangee : ");
    scanf("%d", &nb_tables_par_rangee);
    printf("\n");
    printf("Entrez le chemin du fichier texte (il doit etre au meme niveau que l'exe): ");
    scanf("%s", &nom_fichier);
    printf("\n");
    printf("fichier : %s\n", nom_fichier);

    FILE *fichier = fopen(nom_fichier, "r");
    if (fichier == NULL)
    {
        printf("Erreur impossible d'ouvrir le fichier\n");
        return;
    }

    while (fgets(line, sizeof(line), fichier))
    {
        if (sscanf(line, "%127s %127s", prenom, nom) == 2)
        {
            strncpy(eleve[n].prenom, prenom, 49);
            eleve[n].prenom[49] = '\0';

            strncpy(eleve[n].nom, nom, 49);
            eleve[n].nom[49] = '\0';

            n++;
            if (n >= 20)
            {
                break;
            }
        }
    }

    fclose(fichier);

    
}
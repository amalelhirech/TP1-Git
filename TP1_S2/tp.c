#include <stdio.h>
#include "tp.h"
#include <string.h>
#include <stdlib.h>

void lectureDonnees(int *nb_rangees, int *nb_table_par_rangee, Eleve eleves[], int *nb_eleve, int max)
{

    char nom_fichier[50];
    char nom[128], prenom[128];
    char line[256];
    int n = 0;

    printf("Entrez nb rangee : ");
    scanf("%d", nb_rangees);
    printf("\n");
    printf("Entrez nb table par rangee : ");
    scanf("%d", nb_table_par_rangee);
    printf("\n");
    printf("Entrez le chemin du fichier texte (il doit etre au meme niveau que l'exe): ");
    scanf("%49s", nom_fichier);
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
            strncpy(eleves[n].prenom, prenom, 49);
            eleves[n].prenom[49] = '\0';

            strncpy(eleves[n].nom, nom, 49);
            eleves[n].nom[49] = '\0';

            n++;
            if (n >= max)
            {
                break;
            }
        }
    }

    *nb_eleve = n;

    fclose(fichier);
}

void creerSalle(Place salle[], int nb_rangees, int nb_table_par_rangee)
{

    int k = 0;
    for (int i = 0; i < nb_rangees; i++)
    {
        for (int j = 0; j < nb_table_par_rangee; j++)
        {
            salle[k].num_rangee = i + 1;
            salle[k].num_table = j + 1;
            salle[k].occupee = 0;
            k++;
        }
    }
}

void placementAleatoire(Place salle[], int nb_rangees, int nb_table_par_rangee, Eleve eleves[], int nb_eleves, int eleve_par_place[])
{

    int idx_eleve = 0;

    for (int i = 0; i < nb_rangees && idx_eleve < nb_eleves; i++)
    {
        for (int j = 0; j < nb_table_par_rangee && idx_eleve < nb_eleves; j++)
        {
            int k = i * nb_table_par_rangee + j;

            int voisin_occupe = 0;
            if (j > 0 && salle[k - 1].occupee == 1)
                voisin_occupe = 1;
            if (j < nb_table_par_rangee - 1 && salle[k + 1].occupee == 1)
                voisin_occupe = 1;

            if (salle[k].occupee == 0 && voisin_occupe == 0)
            {
                eleve_par_place[k] = idx_eleve;
                salle[k].occupee = 1;
                idx_eleve++;
            }

        }
    }
}
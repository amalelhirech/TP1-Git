#include "exo1.h"
#include <stdio.h>


void afficher_menu()
{
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter\n");

}

int lire_choix ()
{
    int choix;
    printf("Entrez votre choix : ");
    scanf("%d", &choix);
    return choix;

}

void initialiser(int conso[7])
{
    for (int i = 0; i < 7; i++) 
    {
        conso[i] = 0;
    }

}

void ajouterConsommation(int conso[7]) {
    int choix, quantite;

    printf("Quelle categorie voulez-vous modifier ?\n");
    printf("1. Eau\n");
    printf("2. Cafe\n");
    printf("3. Bonbons\n");
    printf("4. Gateaux\n");
    printf("5. Legumes\n");
    printf("6. Fruits\n");
    printf("7. Proteines\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Choix invalide.\n");
        return;
    }

    printf("Combien d'unites ajouter ? ");
    scanf("%d", &quantite);

    conso[choix - 1] += quantite; 
    printf("Consommation mise a jour.\n");
}


void afficheResume(int conso[7])
{
    printf("========== Resume du jour ==========\n");
    printf("Eau      :   %d\n", conso[0]);
    printf("Cafe     :   %d\n", conso[1]);
    printf("Bonbons  :   %d\n", conso[2]);
    printf("Gateau   :   %d\n", conso[3]);
    printf("Legumes  :   %d\n", conso[4]);
    printf("Fruits   :   %d\n", conso[5]);
    printf("Proteines:   %d\n", conso[6]);
    printf("=====================================\n");

}

int charger(int conso[7])
{
    FILE *fichier = fopen("consommation.txt", "r");  
    if (fichier == NULL) {
        return 0; 
    }

    for (int i = 0; i < 7; i++) {
        if (fscanf(fichier, "%d", &conso[i]) != 1) {
            fclose(fichier);
            return 0; 
        }
    }

    fclose(fichier);
    return 1; 
}


int sauvegarder(int conso[7]) {
    FILE *fichier = fopen("consommation.txt", "w");  
    if (fichier == NULL) {
        return 0; 
    }

    for (int i = 0; i < 7; i++) {
        fprintf(fichier, "%d ", conso[i]);  
    }
    fprintf(fichier, "\n");  

    fclose(fichier);
    return 1; 
}
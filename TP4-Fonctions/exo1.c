#include <stdio.h>

void afficherMenu()
{
    printf("==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher la meilleure note de chaque controle\n");
    printf("0. Quitter\n");

}

int lireChoix()
{
    int choix;
    printf("Entrer votre choix");
    scanf("%d", &choix);
    return choix;
}

int main()
{
    afficherMenu();
    int choix = lireChoix();

    if(choix == 1) {
        printf("Votre choix : 1\n");
    }
    else if(choix == 2) {
        printf("Votre choix : 2\n");
    }
    else if(choix == 3) {
        printf("Votre choix : 3\n");
    }
    else if(choix == 4) {
        printf("Votre choix : 4\n");
    }
    else if(choix == 5) {
        printf("Votre choix : 5\n");
    }
    else if(choix == 6) {
        printf("Votre choix : 6\n");
    }
    else if(choix == 0) {
        printf("Votre choix : 0\n");
    }
    else {
        printf("Choix invalide.\n");
    }

    return 0;

}
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

void lireChoix()
{
    int choix;
    printf("Entrer votre choix : ");
    scanf("%d", &choix);
    printf(" Votre choix : %d\n", choix);
   
}

 void saisirNombreEleves()
{
    int n;
    printf("Combien d'eleves avez vous dans la classe : ");
    scanf("%d", &n);
    if (n<=0 || n >= 31)
    {
        printf("Valeur interdite\n");
        saisirNombreEleves();
    }

}


int main()
{
    afficherMenu();
    lireChoix();
    saisirNombreEleves();
    
    return 0;
}
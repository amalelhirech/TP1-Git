#include <stdio.h>

void afficherMenu()
{
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int main()
{
    afficherMenu();
    int choix = 0;
    printf("Entrez un choix : ");
    scanf("%d", &choix);
    

    

    return 0;
}
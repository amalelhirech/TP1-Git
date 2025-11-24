#include <stdio.h>

void afficherMenu()
{
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int saisirMontant()
{
    int montant;
    printf("Entrez un montant : ");
    scanf("%d", &montant);
    return montant;
}

int main()
{
    afficherMenu();
    int choix = 0;
    printf("Entrez un choix : \n");
    scanf("%d", &choix);
    
    if (choix == 1) {
        int montant = saisirMontant(); 
        printf("Montant a retirer : %d\n", montant);
    }
    else if (choix == 2) {
        printf("Au revoir !\n");
    }
    else {
        printf("Choix invalide.\n");
    }


    return 0;
}
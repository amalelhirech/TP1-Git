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
    return montant;
}

int main()
{
    afficherMenu();
    int choix = 0;
    printf("Entrez un choix : ");
    scanf("%d", &choix);

    int montant;
    printf("Entrez un montant : ");
    scanf("%d", &montant);
    printf("Montant a retirer : %d", montant);
    
    
    

    

    return 0;
}
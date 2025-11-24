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

int montantValide(int montant)
{
    if (montant < 5 || montant > 1000 || montant % 5 != 0) {
        printf("Erreur : montant invalide\n");
        printf("Le montant doit etre entre 5 euros et 1000 euros, divisible par 5.\n");
        return 0; 
    }
    return 1; 

}

void calculDistribution(int montant)
{
    int billets50 = montant / 50;
    montant = montant % 50;

    int billets20 = montant / 20;
    montant = montant % 20;

    int billets10 = montant / 10;
    montant = montant % 10;

    int billets5 = montant / 5;
    montant = montant % 5;

    printf("Billets distribues :\n");
    if (billets50 > 0) printf("%d billets de 50 euros\n", billets50);
    if (billets20 > 0) printf("%d billets de 20 euros\n", billets20);
    if (billets10 > 0) printf("%d billets de 10 euros\n", billets10);
    if (billets5 > 0) printf("%d billets de 5 euros\n", billets5);


}

int main()
{
    afficherMenu();
    int choix = 0;
    printf("Entrez un choix : \n");
    scanf("%d", &choix);
    
    if (choix == 1) {
        int montant = saisirMontant(); 
        if(montantValide(montant))
        {
            printf("Montant a retirer : %d\n", montant);
            calculDistribution(montant);
        }
        
    }
    else if (choix == 2) {
        printf("Au revoir !\n");
    }
    else {
        printf("Choix invalide.\n");
    }


    return 0;
}
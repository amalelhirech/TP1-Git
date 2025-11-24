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
    printf("Entrer votre choix : ");
    scanf("%d", &choix);
    printf(" Votre choix : %d\n", choix);
    return choix;
   
}

int saisirNombreEleves()
{
    int n;
    printf("Combien d'eleves avez vous dans la classe : ");
    scanf("%d", &n);
    if (n<=0 || n >= 31)
    {
        printf("Valeur interdite\n");
        return saisirNombreEleves();
    }
    return n;

}

void saisirNotes(float tab[30][3], int n)
{
    printf("Saisie des notes pour %d eleves et 3 controles.\n", n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEleve %d :\n", i + 1);

        for(int j = 0; j < 3; j++)
        {
            float note;
            printf("  notes du controle %d : ", j + 1);
            scanf("%f", &note);

            while(note < 0 || note > 20)
            {
                printf("    Note invalide. Reessayez (0 a 20) : ");
                scanf("%f", &note);
            }

            tab[i][j] = note;
        }
    }

}

void afficherNotes(int n, float tab[30][3])
{
    printf("\nTableau des notes\n");
    printf("Eleve   C1   C2   C3\n");

    for(int i = 0; i < n; i++)
    {
        printf("%5d", i + 1);
        for(int j = 0; j < 3; j++)
        {
            printf("  %4.1f", tab[i][j]);
        }
        printf("\n");
    }

}

int calculerMoyenneEleve(float tab[30][3], int n)
{
    int idx;
    printf("Entrerz l'indice de l'eleve : ");
    scanf("%d", &idx);
    float res;
    
    res = (tab[idx][0] + tab[idx][1] + tab[idx][2]) /3.0;
        
    printf("Moyenne de l'eleve %d : %.2f", idx, res);
    return res;
}

    int main()
{
    float eleve[30][3];   
    int nbEleves;              

    afficherMenu();           
    lireChoix();               
    nbEleves = saisirNombreEleves(); 
    saisirNotes(eleve, nbEleves); 
    afficherNotes(nbEleves, eleve);
    calculerMoyenneEleve(eleve, nbEleves);
    return 0;
}

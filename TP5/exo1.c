#include "exo1.h"
#include <windows.h>
#include <locale.h>
#include <stdio.h>

void afficher_menu()
{
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Afficher les objectifs et score\n");
    printf("4. Sauvegarder et quitter\n");
}

int lire_choix()
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

void ajouterConsommation(int conso[7])
{
    int choix, quantite;

    printf("Quelle categorie voulez-vous modifier ?\n");
    printf("1. Eau💧\n");
    printf("2. Cafe☕\n");
    printf("3. Bonbons🍬\n");
    printf("4. Gateaux🍰\n");
    printf("5. Legumes🥦\n");
    printf("6. Fruits🍎\n");
    printf("7. Proteines🍗\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7)
    {
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

    printf("Eau      : %d 💧 ", conso[0]);
    afficherBarre(conso[0], 8);
    printf("\n");

    printf("Cafe     : %d ☕ ", conso[1]);
    afficherBarre(conso[1], 5);
    printf("\n");

    printf("Bonbons  : %d 🍬 ", conso[2]);
    afficherBarre(conso[2], 12);
    int hb = humeurBonbons(conso[2]);
    if (hb == 0)
        printf(" 😇\n");
    else if (hb == 1)
        printf(" 🙂\n");
    else if (hb == 2)
        printf(" 😬\n");
    else
        printf(" 😱\n");

    printf("Gateaux  : %d 🍰 ", conso[3]);
    afficherBarre(conso[3], 5);
    printf("\n");

    printf("Legumes  : %d 🥦 ", conso[4]);
    afficherBarre(conso[4], 5);
    int hl = humeurLegumes(conso[4]);
    if (hl == 0)
        printf(" 😢\n");
    else if (hl == 1)
        printf(" 🙂\n");
    else
        printf(" 🥳\n");

    printf("Fruits   : %d 🍎 ", conso[5]);
    afficherBarre(conso[5], 5);
    int hf = humeurFruits(conso[5]);
    if (hf == 0)
        printf(" 😔\n");
    else if (hf == 1)
        printf(" 🙂\n");
    else
        printf(" 🍇\n");

    printf("Proteines: %d 🍗 ", conso[6]);
    afficherBarre(conso[6], 5);
    printf("\n");

    printf("=====================================\n");
}

int charger(int conso[7])
{
    FILE *fichier = fopen("consommation.txt", "r");
    if (fichier == NULL)
    {
        return 0;
    }

    for (int i = 0; i < 7; i++)
    {
        if (fscanf(fichier, "%d", &conso[i]) != 1)
        {
            fclose(fichier);
            return 0;
        }
    }

    fclose(fichier);
    return 1;
}

int sauvegarder(int conso[7])
{
    FILE *fichier = fopen("consommation.txt", "w");
    if (fichier == NULL)
    {
        return 0;
    }

    for (int i = 0; i < 7; i++)
    {
        fprintf(fichier, "%d ", conso[i]);
    }
    fprintf(fichier, "\n");
    fclose(fichier);
    return 1;
}

void utf8()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
}

int humeurBonbons(int nbBonbons)
{
    if (nbBonbons >= 0 && nbBonbons <= 3)
    {
        return 0;
    }
    else if (nbBonbons >= 4 && nbBonbons <= 7)
    {
        return 1;
    }
    else if (nbBonbons >= 8 && nbBonbons <= 12)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int humeurLegumes(int nbLegumes)
{
    if (nbLegumes == 0)
    {
        return 0;
    }
    else if (nbLegumes <= 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int humeurFruits(int nbFruits)
{
    if (nbFruits == 0)
    {
        return 0;
    }
    else if (nbFruits <= 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void afficherBarre(int valeur, int max)
{
    if (max <= 0)
    {
        max = 1;
    }

    if (valeur < 0)
    {
        valeur = 0;
    }
    if (valeur > max)
    {
        valeur = max;
    }
    int casesPleines = (valeur * 10) / max;

    for (int i = 0; i < 10; i++)
    {
        if (i < casesPleines)
        {
            printf("█");
        }
        else
        {
            printf("░");
        }
    }
}

int calculerScoreSante(int conso[7], int objectifs[7])
{
    int score = 50;

    if (conso[0] >= objectifs[0])
        score += 10;
    if (conso[4] >= objectifs[4])
        score += 10;
    if (conso[5] >= objectifs[5])
        score += 10;
    if (conso[6] >= objectifs[6])
        score += 10;

    if (conso[2] > 5)
    {
        int malusBonbons = conso[2] - 5;
        if (malusBonbons > 15)
            malusBonbons = 15;
        score -= malusBonbons;
    }

    if (conso[1] > 3)
    {
        int malusCafe = (conso[1] - 3) * 2;
        if (malusCafe > 20)
            malusCafe = 20;
        score -= malusCafe;
    }

    if (score < 0)
        score = 0;
    if (score > 100)
        score = 100;

    return score;
}

void afficherObjectifsEtScore(int objectifs[7], int conso[7])
{
    printf("====== Objectifs du jour ======\n");
    printf("Categorie     Objectif     Atteint ?\n");

    printf("Eau           : ");
    if (objectifs[0] > 0)
    {
        printf("%d          ", objectifs[0]);
        if (conso[0] >= objectifs[0])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Cafe          : ");
    if (objectifs[1] > 0)
    {
        printf("%d          ", objectifs[1]);
        if (conso[1] >= objectifs[1])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Bonbons       : ");
    if (objectifs[2] > 0)
    {
        printf("%d          ", objectifs[2]);
        if (conso[2] >= objectifs[2])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Gateau        : ");
    if (objectifs[3] > 0)
    {
        printf("%d          ", objectifs[3]);
        if (conso[3] >= objectifs[3])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Legumes       : ");
    if (objectifs[4] > 0)
    {
        printf("%d          ", objectifs[4]);
        if (conso[4] >= objectifs[4])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Fruits        : ");
    if (objectifs[5] > 0)
    {
        printf("%d          ", objectifs[5]);
        if (conso[5] >= objectifs[5])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("Proteines     : ");
    if (objectifs[6] > 0)
    {
        printf("%d          ", objectifs[6]);
        if (conso[6] >= objectifs[6])
            printf("✅\n");
        else
            printf("❌\n");
    }
    else
    {
        printf("-          (pas d objectif)\n");
    }

    printf("--------------------------------\n");

    int score = calculerScoreSante(conso, objectifs);
    printf("Score de sante du jour : %d / 100\n", score);

    if (score >= 80)
    {
        printf("💚 Excellent !\n");
    }
    else if (score >= 50)
    {
        printf("💛 Moyen, à améliorer.\n");
    }
    else
    {
        printf("❤️‍🔥 Attention, équilibre à revoir.\n");
    }

    printf("================================\n");
}
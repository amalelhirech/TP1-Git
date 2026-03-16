#ifndef BLIND_TEST
#define BLIND_TEST

typedef struct {
    char nom_fichier[100];
    char titre[100];
    char artiste[100];

}Song;

typedef struct {
    char nom[50];
    int score;
}Joueur;

typedef struct{
    char nom[100];
    int meilleurScore;
    struct Liste_joueur * suivant;
} Liste_joueur;




#endif
#ifndef Pharmacie
#define Pharmacie

typedef struct {

    char nom[50];
    int code;
    int date_fabrication;
    int date_peremption;
    float prix;
    int nb_vendus;
    int stock;

}Medicament;

void saisir_medicament(Medicament *m);
void trier_medicament(Medicament *m, int taille);
void afficher_medicament(Medicament *m, int taille);
void remplir_tab(Medicament *m, int taille);

#endif

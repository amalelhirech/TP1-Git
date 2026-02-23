#ifndef TP
#define TP

typedef struct {
    char nom[50];
    char prenom[50];
}Eleve;

typedef struct{
    int num_rangee;
    int num_table;
    int occupee;
}Place;

void lectureDonnees(int * nb_rangees, int * nb_table_par_rangee, Eleve eleves[], int *nb_eleve, int max);

void creerSalle(Place salle[], int  nb_rangees, int nb_table_par_rangee);

#endif
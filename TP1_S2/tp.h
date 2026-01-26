#ifndef TP
#define TP

struct Eleve{
    char nom[50];
    char prenom[50];
};

struct Place{
    int num_rangee;
    int num_table;
    int occupee;
};

void lectureDonnees();
void creerSalle(struct Place salle[], int nb_rangees, int nb_table_par_rangee);

#endif
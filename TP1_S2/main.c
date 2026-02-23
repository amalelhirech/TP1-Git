#include <stdio.h>
#include "tp.h"
#include <string.h>
#include <stdlib.h>

int main(){

    int nb_rangees = 0;
    int nb_tables_par_rangee = 0;
    Eleve eleves[20];
    int nb_eleves = 0;
    int max  = 20;

    lectureDonnees(&nb_rangees, &nb_tables_par_rangee, eleves, &nb_eleves, max);

    int nb_places = nb_rangees * nb_tables_par_rangee;

    Place * salle = malloc(nb_places * sizeof(Place));
    if (!salle){
        return 1;
    } 

    creerSalle(salle, nb_rangees, nb_tables_par_rangee);

    free(salle);

    return 0;
}
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
    if(nb_places == 0){
        return 1;
    }

    int * eleve_par_place = malloc(nb_places * sizeof(int));
    if(eleve_par_place == NULL){
        return 1;
    }

    Place * salle = malloc(nb_places * sizeof(Place));
    if (!salle){
        free(eleve_par_place);
        return 1;
    } 

    creerSalle(salle, nb_rangees, nb_tables_par_rangee);

    for (int k = 0; k < nb_places; k++) {
        eleve_par_place[k] = -1;
    }

    free(salle);
    free(eleve_par_place);

    return 0;
}
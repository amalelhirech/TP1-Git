#include "exo1.h"
#include <stdlib.h>
#include <stdio.h>

int main(){

    int taille = 3;
    Medicament *m = malloc(sizeof(Medicament) * 3);

    saisir_medicament(m);
    remplir_tab(m, taille);
    trier_medicament(m, taille);

    return 0;
}
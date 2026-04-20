#include "exo1.h"
#include <stdlib.h>
#include <stdio.h>

void saisir_medicament(Medicament *m){
    if (m == NULL){
        return;
    }

    printf("Entre un nom : \n");
    scanf("%s", m->nom);

    printf("Entrez un code : \n");
    scanf("%d", &m->code);

    printf("Entrez une date de fabrication :\n");
    scanf("%d", &m->date_fabrication);

    printf("Entrez une date peremption): \n");
    scanf("%d", &m->date_peremption);

    printf("Entrez un prix : \n");
    scanf("%f", &m->prix);

    printf("Entrez le nombre vendus : \n");
    scanf("%d", &m->nb_vendus);

    printf("entrez le nombre de stock :\n");
    scanf("%d", &m->stock);
}

void trier_medicament(Medicament *m, int taille){

    if (m == NULL){
        return;
    }

    Medicament temp;

    for(int i = 0; i < taille-1; i++){
        for(int j = 0; j < taille-i-1; j++){

            if (m[j].date_peremption > m[j+1].date_peremption){
                temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }
}


void remplir_tab(Medicament *m, int taille){

    if (m == NULL){
        return;
    }

    for(int i = 0; i < taille; i++){
        printf(" Medicament %d \n", i+1);
        saisir_medicament(&m[i]);
    }
}
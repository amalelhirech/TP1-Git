#include "tp3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main (){
    srand(time(NULL));

    Song *songs = NULL;
    int count;
    int i;

    count = load_songs("songs.txt", &songs);
    printf("Nombre de chansons chargees : %d \n", count);

    printf("Avant melange \n");

    for(i = 0; i < count ; i++){
        printf("%d - %s - %s - %s \n", i+1, songs[i].nom_fichier, songs[i].artiste, songs[i].titre);
    }

    printf("Apres melange : \n");
    
    melanger_chanson(songs, count);
    for(i = 0; i < count ; i++){
        printf("%d - %s - %s - %s \n", i+1, songs[i].nom_fichier, songs[i].artiste, songs[i].titre);
    }



    return 0;
}
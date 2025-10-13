#include <stdio.h>

int main(){
    int n = 0;
    int heure = 0;
    int minute = 0;
    int seconde = 0;
    printf("Entrer un nombre");
    scanf("%d", &n);
    heure = n/3600;
    minute = (n%3600)/60;
    seconde = n%60;
    printf("%d secondes = %d heures, %d minutes et %d secondes", n, heure, minute, seconde);


    return 0;
}
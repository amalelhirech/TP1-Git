#include <stdio.h>
#include <math.h>

int main(){
    float c = 0; //montant pret
    float t = 0; // taux d'interet annuel
    int n = 0;// dure du pret en année
    int mensualite = 0;
    printf("Quelle est le montant de votre pret");
    scanf("%d", &c);
    printf("Quelle est le taux d'intéret");
    scanf("%d", &t);
    printf("Quelle est la durée de votre pret en année");
    scanf("%d", &n);
    mensualite = (c*(t/12))/1-pow(1+(t/12), (-n)*12);
    printf("la mensualité est %d", mensualite);


    return 0;
}
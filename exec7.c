#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %f\n", minutes); 
    return 0;
}
/* Comme on divise on peut avoir un nombre décimal donc un floatant*/

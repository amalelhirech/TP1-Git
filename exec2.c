#include <stdio.h>

int main() {
    int tab[10];
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
/* On est pas dans les bonnes bornes la tableau va jusqu'a 10 er pas 5*/
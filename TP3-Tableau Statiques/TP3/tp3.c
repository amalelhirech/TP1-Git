#include <stdio.h>

int main(){
    int n;
    printf("Entrez une taille entre 5 et 10: ");
    scanf("%d", &n);

    if (n<5 || n>10){
        printf("Erreur la taille n'est pas bonne ");
    }

    int width = n * n;
    int max_height = 3 * n-1;
    char img[20][20];

    for(int i = 0; i<width; i++){
        for (int j = 0; j<max_height; j++){
            img[i][j] = ' ';
            
        }
    }
   
    
    return 0;
}
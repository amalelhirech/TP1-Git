#include <stdio.h>

int main() {
    char nom[50];
    printf("Nom ? ");
    scanf("%s", &nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
/* Dans le scanf il n'y a pas le e commercial et dans nom il y 'a que 4 caractere ce n'est pas assez*/
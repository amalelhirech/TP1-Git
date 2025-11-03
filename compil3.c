#include <stdio.h>

int main() {
    int a;
    int b = 10;
    printf("%d\n", b);
    return 0;
}
/* .\compil3.c: In function 'main':
.\compil3.c:5:5: error: 'b' undeclared (first use in this function)
     b = 10;
     ^
.\compil3.c:5:5: note: each undeclared identifier is reported only once for each function it appears in*/
/* La variable b n'a pas de type */
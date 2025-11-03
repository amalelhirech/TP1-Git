#include <stdio.h>

int main() {
    if (1) {
        printf("ok\n");
    } else {
        printf("nope\n");
        }
    return 0;
}
/* .\compil11.c:9:5: error: expected identifier or '(' before 'return'
     return 0;
     ^~~~~~
.\compil11.c:10:1: error: expected identifier or '(' before '}' token
 }
 ^*/
 /* Il manque une acolade au niveau du else*/
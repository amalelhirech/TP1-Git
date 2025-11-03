#include <stdio.h>

int main() {
    int a = 2;
    int b = 10;
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
/* Execute debugger commands using "-exec <command>", for example "-exec info registers" will list registers in use (when GDB is the debugger)
On ne peut pas diviser par 0 c'est impossible */
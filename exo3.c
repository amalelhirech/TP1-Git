#include <stdio.h>

int main(){
    char mot[] = "bonjour";
    char lettre =' ',
    char prem_chance["n\n\n\n\n\n\n-------\n"];
    char deux_chance["n|\n|\n|\n|\n|\n|\n-------\n"];
    char trois_chance["-------\n| |\n|\n|\n|\n|\n-------\n"];
    char quatre_chance["-------\n| |\n| O\n|\n|\n|\n-------\n"];
    char cinq_chance["-------\n| |\n| O\n| /|\n|\n|\n-------\n"];
    char six_chance["-------\n| |\n| O\n| /|\\\n|\n|\n-------\n"];
    char sept_chance["-------\n| |\n| O\n| /|\\\n| /\\\n|\n-------\n"];
    char res[100];
    for (int i = 0, i<7, i++){
        printf("Entrer une lettre");
        scanf("%c", lettre);
        if (mot[i] != lettre){
            printf("prem_chance");
        else {
            res[i] = mot[i];
            printf("%c", res);
        }
            
        }
    }

    return 0;
}
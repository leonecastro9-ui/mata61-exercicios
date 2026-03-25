#include <stdio.h>
#include "token.h"

extern int yylex();
extern char* yytext;

int main(int argc, char **argv) {
    int token;

    while ((token = yylex()) != EOL) {
        
        /* Se a peça for da caixa 1 */
        if (token == NUM) {
            printf("categoria do token: %d, constante numérica: %s\n", token, yytext);
        }
        /* Se a peça for da caixa 6/ Erro */
        else if (token == ERROR) {
            printf("erro léxico: caractere inválido\n");
        }
        /* Se for as outras caixas de matemática */
        else {
            printf("categoria do token: %d\n", token);
        }
    }
    
    return 0;
}
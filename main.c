#include <stdio.h>
#include "funcao_soma.h"  

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora do Grupo A!\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    int resultado_soma = somar(4, 15); 
    printf("Soma (4 + 15): %d\n", resultado_soma);

    return 0;
}
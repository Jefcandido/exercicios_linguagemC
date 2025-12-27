/*
    Faça um programa que leia um núumero real e o imprima.
*/

//Meu código
/*
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    
    int retorno;
    float real = 0;

    printf("Digite um número real/fracionado:\n");

    retorno = scanf("%f", &real);

    printf("Retorno: %d\n", retorno);

    if (retorno == 0) {
        printf("Você não digitou um número válido.\n");
    }

    if (retorno == 1) {
        printf("O número digitado foi %.2f\n", real);
    }
    

    return 0;
}
*/

//Código corrigido pelo ChatGPT
/**/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int retorno;
    float real = 0;

    printf("Digite um número real/fracionado:\n");

    retorno = scanf("%f", &real);

    printf("Retorno: %d\n", retorno);

    if (retorno == 0) {
        printf("Você não digitou um número válido.\n");
    } else {
        printf("O número digitado foi %.2f", real);
    }


    return 0;
}
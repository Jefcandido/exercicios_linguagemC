/*
    Faça um programa que leia um núumero inteiro e o imprima.
*/

// Meu código
/*
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int numero;

    printf("Digite um número inteiro:\n");
    scanf(" %d", &numero);

    printf("Você digitou o número %d\n", numero);

    return 0;
}
*/

//Código corrigido pelo ChatGPT
/**/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int numero;

    printf("Digite um número inteiro:\n");

    if (scanf("%d", &numero) != 1) {
        printf("O número que você digitou não é inteiro.\nFavor digite o número correto.");
        return 0;
    }

    printf("O número que você digito é %d\n", numero);

    return 0;
}